%% 1- Setup
clear; close all; clc;
restoredefaultpath; matlabrc;

addpath(genpath(fullfile('../../A1_Optimization')));
addpath(fullfile('../../A1_Gaits'));
addpath(fullfile('../../A1_Gaits','TGallopingG2'));
addpath(fullfile('../../A1_Model'));
addpath(fullfile('../../A1_Model','meshes'));
frost_path  = '../../frost-dev';
addpath('../../frost-dev');
frost_addpath;

%++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
RobotDesign = 'A1u150';    % A1u50, A1u75, A1, A1u125, A1u150    % A1ae50, A1ae75, A1, A1ae125, A1ae150 
%++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

addpath(genpath(fullfile('../../A1_Model',['gen',RobotDesign])));

LOAD_PATH = fullfile('../../A1_Gaits','TGallopingG2',['gen',RobotDesign],'sym'); % You need to change "opt_pronk" for your task.
if ~exist(LOAD_PATH,'dir')
    mkdir(LOAD_PATH);
end
addpath(LOAD_PATH);

EXPORT_PATH = fullfile('../../A1_Gaits','TGallopingG2',['gen',RobotDesign],'opt');% You need to change "opt_pronk" for your task.
if ~exist(EXPORT_PATH,'dir')% if "EXPORT_PATH" path does not exist, craet it using mkdir.
    mkdir(EXPORT_PATH);
end
addpath(EXPORT_PATH);

ANIM_PATH = fullfile('../../A1_Gaits','TGallopingG2',['gen',RobotDesign],'anim');
if ~exist(ANIM_PATH,'dir')
    mkdir(ANIM_PATH);
end
addpath(ANIM_PATH);

%% 2- Settings %%
LOAD = false;
SAVE = true;
OMIT_CORIOLIS = false;

%% 3- Load Hybrid System %%
%++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
robot = feval(RobotDesign, fullfile('../../A1_Model','urdf',[RobotDesign,'.urdf'])); 
%++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

if LOAD
    robot.loadDynamics(LOAD_PATH, OMIT_CORIOLIS,{},'OmitCoriolisSet',OMIT_CORIOLIS); %#ok<UNRCH>
    [sys, domains, guards] = load_behavior(robot, LOAD_PATH,'type','TGallopingG2');
else
    robot.configureDynamics('DelayCoriolisSet',OMIT_CORIOLIS,'OmitCoriolisSet',OMIT_CORIOLIS);
    [sys, domains, guards] = load_behavior(robot,[], 'type','TGallopingG2');
end
%plot(sys.Gamma)
                                        
%% 4- Create Optimization Problem %
% Specifying the Number of collocation points in the stance phase and flight phase %
  num_grid.stance_FR = 8; 
num_grid.stance_FRFL = 8;
  num_grid.stance_FL = 8;
    num_grid.flight1 = 5;
  num_grid.stance_RR = 8; 
num_grid.stance_RRRL = 8;
  num_grid.stance_RL = 8;
    num_grid.flight2 = 5;
nlp = HybridTrajectoryOptimization('A1_TG2',sys,num_grid,[],'EqualityConstraintBoundary',1e-3);

%% 5- Add Domain (Phase) Specific Constraints %%
nlp.Phase(1).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.FRConstraint;     
nlp.Phase(2).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.EventConstraint;     
nlp.Phase(3).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.FRFLConstraint;     % flight1
nlp.Phase(4).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.EventConstraint;  
nlp.Phase(5).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.FLConstraint;      
nlp.Phase(6).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.EventConstraint;     
nlp.Phase(7).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.Flight1Constraint;    
nlp.Phase(8).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.EventConstraint;      
nlp.Phase(9).Plant.UserNlpConstraint  = @NLPSetUp.Constraints.RRConstraint;     
nlp.Phase(10).Plant.UserNlpConstraint = @NLPSetUp.Constraints.EventConstraint;     
nlp.Phase(11).Plant.UserNlpConstraint = @NLPSetUp.Constraints.RRRLConstraint;   
nlp.Phase(12).Plant.UserNlpConstraint = @NLPSetUp.Constraints.EventConstraint;  
nlp.Phase(13).Plant.UserNlpConstraint = @NLPSetUp.Constraints.RLConstraint;      
nlp.Phase(14).Plant.UserNlpConstraint = @NLPSetUp.Constraints.EventConstraint;     
nlp.Phase(15).Plant.UserNlpConstraint = @NLPSetUp.Constraints.Flight2Constraint;   % flight2
nlp.Phase(16).Plant.UserNlpConstraint = @NLPSetUp.Constraints.EventConstraint;      
nlp.update;

%% 6- Configure Bounds and Update %%
bounds = NLPSetUp.Bounds.getBounds(robot); 
if LOAD
    nlp.configure(bounds, LOAD_PATH); %#ok<UNRCH>
else
    nlp.configure(bounds);
end

%% 7- Add Multi-Domain Constraints %%
nlp = NLPSetUp.Constraints.MultidomainConstraints(nlp,bounds);
nlp.update;

%% 8- Compile Single Constraint or Cost Function %%
% Compile Constraint:
%           compileConstraint(nlp, 1, {'Yaw0'}, EXPORT_PATH, 'dynamics_equation');

% Compile Cost Function:  
%          compileObjective(nlp, 1, {'Torque'}, EXPORT_PATH,'dynamics_equation'); 
 
% Remove Single Constraint:
%          removeConstraint(nlp.Phase(1),'dynamics_equation');

%% 9- Compile All Constarints and Cost Functions %%
 compileConstraint(nlp,[],[],EXPORT_PATH, []);
 compileObjective(nlp,[],[],EXPORT_PATH, []);
     
 sys.saveExpression(LOAD_PATH);

%% 10- NLP Settings
average_velocity = 2;
nlp.Phase(15).updateConstrProp('average_velocity_entire_stride', 'last','lb', [average_velocity-0.01;0], 'ub', [average_velocity+0.01;0]); 

%% Load
Solution = load('Velocity_2_TG2');

%% 13a- Solving the NLP Problem with default IC %%
solver = IpoptApplication(nlp);
[sol, info] = optimize(solver);
gait = NLPSetUp.Utilities.parse(nlp, sol);
% ----cost---- %
% Phase_Cost = checkCosts(nlp, sol);

%% 13b- Solving the NLP Problem with new IC %%
x0  = Solution.sol;
solver = IpoptApplication(nlp);
[sol, info] = optimize(solver,x0);
gait = NLPSetUp.Utilities.parse(nlp, sol);

%% Save
save([pwd,'\Velocity_',num2str(average_velocity),'.mat'],'nlp','gait','info','sol','bounds')

%% 10- Animation %%
close all
skip_export = true; % set it to true after exporting the functions once.
load_animation(robot, gait, [], RobotDesign, 'ExportPath', ANIM_PATH, 'SkipExporting', skip_export,'NumStrds',4);

%% 11- Variables, Constraints, and Cost log %%
checkVariables(nlp, sol, 1e-4,'VariablesLog.txt');
checkConstraints(nlp, sol,1e-0, 'ConstraintsLog.txt');
checkCosts(nlp, sol,'CostLog.txt');

%% 15- Ploting The Torque and Trajectory of Each Joint%%
PlotA1(gait,'JointsTorques')
PlotA1(gait,'JointsPositions')
PlotA1(gait,'BodyPositions')

%% 10- Gait Search
velocity = 2;
Vx_range = 0:0.1:10;
FileName = ['TG2_',RobotDesign,'_RawSearch'];
A1CreateParameterStudy(FileName, sol, velocity, 'Vx', 1, Vx_range);

%%
A1ProcessParameterStudy(FileName, nlp, info, robot)

%% Gait Library
load(['TG2_',RobotDesign,'_RawSearch.mat'])
Data = Sort(configurations,grids);
for i = 1 : length(Data.V)
              sol = Data.V{i}.sol;
    Data.V{i}.gait = parse(nlp,sol); 
end
save(['GL_TG2_',RobotDesign],'Data')
