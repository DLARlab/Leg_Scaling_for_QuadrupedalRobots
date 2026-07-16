function [conGUI] = load_animation(robot, gait, terrain, RobotDesign, varargin)

switch RobotDesign
    case 'A1'
        filenameFRT = 'thigh_mirror.stl';
        R_FRT = [0,0,0];
        filenameFLT = 'thigh.stl';
        R_FLT = [0,0,0];
        filenameRRT = 'thigh_mirror.stl';
        R_RRT = [0,0,0];
        filenameRLT = 'thigh.stl';
        R_RLT = [0,0,0];
        %--------------------------------------------------
        R_FRC = [0,0,0];
        R_FLC = [0,0,0];
        R_RRC = [0,0,0];
        R_RLC = [0,0,0];
    case 'A1D'
        filenameFRT = 'thigh.stl';
        R_FRT = [0,0,pi];
        filenameFLT = 'thigh_mirror.stl';
        R_FLT = [0,0,pi];
        filenameRRT = 'thigh_mirror.stl';
        R_RRT = [0,0,0];
        filenameRLT = 'thigh.stl';
        R_RLT = [0,0,0];
        %--------------------------------------------------
        R_FRC = [0,0,pi];
        R_FLC = [0,0,pi];
        R_RRC = [0,0,0];
        R_RLC = [0,0,0];
    case 'A1X'
        filenameFRT = 'thigh_mirror.stl';
        R_FRT = [0,0,0];
        filenameFLT = 'thigh.stl';
        R_FLT = [0,0,0];
        filenameRRT = 'thigh.stl';
        R_RRT = [0,0,pi];
        filenameRLT = 'thigh_mirror.stl';
        R_RLT = [0,0,pi];
        %--------------------------------------------------
        R_FRC = [0,0,0];
        R_FLC = [0,0,0];
        R_RRC = [0,0,pi];
        R_RLC = [0,0,pi];
    case 'A1F'
        filenameFRT = 'thigh.stl';
        R_FRT = [0,0,pi];
        filenameFLT = 'thigh_mirror.stl';
        R_FLT = [0,0,pi];
        filenameRRT = 'thigh.stl';
        R_RRT = [0,0,pi];
        filenameRLT = 'thigh_mirror.stl';
        R_RLT = [0,0,pi];
        %--------------------------------------------------
        R_FRC = [0,0,pi];
        R_FLC = [0,0,pi];
        R_RRC = [0,0,pi];
        R_RLC = [0,0,pi];
end

ip = inputParser;
ip.addParameter('UseExported',true,@(x) isequal(x,true) || isequal(x,false));
ip.addParameter('ExportPath','',@(x)ischar(x));
ip.addParameter('SkipExporting',false,@(x) isequal(x,true) || isequal(x,false));
ip.addParameter('NumStrds', 1, @(x) isnumeric(x) && isscalar(x) && x >= 0 && mod(x,1) == 0);  % Added
ip.parse(varargin{:});

opts = ip.Results;
if isempty(opts.ExportPath)
    root_path = get_root_path();
    export_path = fullfile(root_path,'gen','anim');
    opts.ExportPath = export_path;
else
    export_path = opts.ExportPath;
end
if ~exist(export_path,'dir')
    mkdir(export_path);
end
addpath(export_path);

cont_domain_idx = find(arrayfun(@(x)~isempty(x.tspan),gait));
t = [];
q = [];

for j=cont_domain_idx.'
    t = [t,gait(j).tspan];       %#ok<*AGROW>
    q = [q,gait(j).states.x];
end

if opts.NumStrds > 1
    t_offset = t(end);      % equals stride end time
    x_offset = q(1,end) - q(1,1);
    x_ex = q(1,:);
    
    t_new = cell(1,opts.NumStrds-1);
    x_new = cell(1,opts.NumStrds-1);
    for i = 1 : opts.NumStrds-1
        t_ex = t + t_offset;
        x_ex = x_ex + x_offset;
        t_offset = t_ex(end);
        
        x_offset = x_ex(end) - x_ex(1);
        
        t_new{i} = t_ex;
        x_new{i} = x_ex;
    end
    
    t = [t,cell2mat(t_new)];
    x = [q(1,:),cell2mat(x_new)];
    q(1,:) = [];
    %         x = zeros(1,length(x));
    q = repmat(q, 1, opts.NumStrds);
    q = [x;q];
end

f = figure(1000); clf;
f.Color = [1 1 1];

% Add the skeleton for A1 robot
a1_disp = frost.Animator.Display(f, robot, opts);

%     set(gca, 'XTick', [], 'YTick', [], 'ZTick', []);
%     box 'off'

axis off

% Add patches for A1 robot
% Add Trunk
% +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
%    trunk = robot.Links(getLinkIndices(robot,'trunk'));
%    A1_trunk_anim_frame = CoordinateFrame(...
%        'Name','FRfootAnim',...
%        'Reference',trunk.Reference,...
%        'Offset',[0,0,0],...
%        'R',[0,0,0]);
%    A1_Box = frost.Animator.Rectangler(a1_disp.axs, robot, A1_trunk_anim_frame, [0.1300,0.0970,0.0570], [-0.1300,-0.0970,-0.0570], 'Trunk', opts);
%    a1_disp.addItem(A1_Box);

trunk = robot.Links(getLinkIndices(robot,'trunk'));
A1_trunk_anim_frame = CoordinateFrame(...
    'Name','FRfootAnim',...
    'Reference',trunk.Reference,...
    'Offset',[0,0,0],...
    'R',[0,0,0]);
filename = 'trunk.stl';
funcname = 'H_BaseRotX';
A1_trunk = frost.Animator.PatchSTL(a1_disp.axs, robot, A1_trunk_anim_frame, filename, funcname, 'Trunk', RobotDesign, opts);
a1_disp.addItem(A1_trunk);

% Add patches for FR leg
% +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
% Add FR Hip
FR_hip_Link = robot.Links(getLinkIndices(robot,'FR_hip'));
FR_hip_anim_frame = CoordinateFrame(...
    'Name','FRhipAnim',...
    'Reference',FR_hip_Link.Reference,...
    'Offset', [0,-0,0],...
    'R',[0,0,0]);
filename = 'hip.stl';
funcname = 'H_FR_hip_joint';
FR_hip = frost.Animator.PatchSTL(a1_disp.axs, robot, FR_hip_anim_frame, filename, funcname, 'FRhip', RobotDesign, opts);
a1_disp.addItem(FR_hip);
%
    % Add FR thigh
    FR_thigh_Link = robot.Links(getLinkIndices(robot,'FR_thigh'));
    FR_thigh_anim_frame = CoordinateFrame(...
         'Name','FRhipAnim',...
         'Reference',FR_thigh_Link.Reference,...
         'Offset',[0,-0,0],...
         'R',[0,0,0]);
    filename = 'thigh_mirror.stl';
    funcname = 'H_FR_thigh_joint';
    FR_thigh = frost.Animator.PatchSTL(a1_disp.axs, robot, FR_thigh_anim_frame, filename, funcname, 'FRthigh', RobotDesign, opts);
    a1_disp.addItem(FR_thigh);

    % Add FR calf
    FR_calf_Link = robot.Links(getLinkIndices(robot,'FR_calf'));
    FR_calf_anim_frame = CoordinateFrame(...
         'Name','FRhipAnim',...
         'Reference',FR_calf_Link.Reference,...
         'Offset',[0,-0,0],...
         'R',[0,0,0]);
    filename = 'calf.stl';
    funcname = 'H_FR_calf_joint';
    FR_calf = frost.Animator.PatchSTL(a1_disp.axs, robot, FR_calf_anim_frame, filename, funcname, 'FRcalf', RobotDesign, opts);
    a1_disp.addItem(FR_calf);
%
%
%     % Add patches for FL leg
%     % +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
%     % Add FL Hip
FL_hip_Link = robot.Links(getLinkIndices(robot,'FL_hip'));
FL_hip_anim_frame = CoordinateFrame(...
    'Name','FLhipAnim',...
    'Reference',FL_hip_Link.Reference,...
    'Offset', [0,-0,0],...
    'R',[pi,0,0]);
filename = 'hip.stl';
funcname = 'H_FL_hip_joint';
FL_hip = frost.Animator.PatchSTL(a1_disp.axs, robot, FL_hip_anim_frame, filename, funcname, 'FLhip', RobotDesign, opts);
a1_disp.addItem(FL_hip);
%
    % Add FL thigh
    FL_thigh_Link = robot.Links(getLinkIndices(robot,'FL_thigh'));
    FL_thigh_anim_frame = CoordinateFrame(...
         'Name','FLhipAnim',...
         'Reference',FL_thigh_Link.Reference,...
         'Offset',[0,0,0],...
         'R',[0,0,0]);
    filename = 'thigh.stl';
    funcname = 'H_FL_thigh_joint';
    FL_thigh = frost.Animator.PatchSTL(a1_disp.axs, robot, FL_thigh_anim_frame, filename, funcname, 'FLthigh', RobotDesign, opts);
    a1_disp.addItem(FL_thigh);

    % Add FL calf
    FL_calf_Link = robot.Links(getLinkIndices(robot,'FL_calf'));
    FL_calf_anim_frame = CoordinateFrame(...
         'Name','FLhipAnim',...
         'Reference',FL_calf_Link.Reference,...
         'Offset',[0,0,0],...
         'R',[0,0,0]);
    filename = 'calf.stl';
    funcname = 'H_FL_calf_joint';
    FL_calf = frost.Animator.PatchSTL(a1_disp.axs, robot, FL_calf_anim_frame, filename, funcname, 'FLcalf', RobotDesign, opts);
    a1_disp.addItem(FL_calf);
%
%
%     % Add patches for RR leg
%     % +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
% Add RR Hip
RR_hip_Link = robot.Links(getLinkIndices(robot,'RR_hip'));
RR_hip_anim_frame = CoordinateFrame(...
    'Name','RRhipAnim',...
    'Reference',RR_hip_Link.Reference,...
    'Offset', [0,-0,0],...
    'R',[0,pi,0]);
filename = 'hip.stl';
funcname = 'H_RR_hip_joint';
RR_hip = frost.Animator.PatchSTL(a1_disp.axs, robot, RR_hip_anim_frame, filename, funcname, 'RRhip', RobotDesign, opts);
a1_disp.addItem(RR_hip);
%
    % Add RR thigh
    RR_thigh_Link = robot.Links(getLinkIndices(robot,'RR_thigh'));
    RR_thigh_anim_frame = CoordinateFrame(...
         'Name','RRhipAnim',...
         'Reference',RR_thigh_Link.Reference,...
         'Offset',[0,-0,0],...
         'R',[0,0,0]);
    filename = 'thigh_mirror.stl';
    funcname = 'H_RR_thigh_joint';
    RR_thigh = frost.Animator.PatchSTL(a1_disp.axs, robot, RR_thigh_anim_frame, filename, funcname, 'RRthigh', RobotDesign, opts);
    a1_disp.addItem(RR_thigh);

    % Add RR calf
    RR_calf_Link = robot.Links(getLinkIndices(robot,'RR_calf'));
    RR_calf_anim_frame = CoordinateFrame(...
         'Name','RRhipAnim',...
         'Reference',RR_calf_Link.Reference,...
         'Offset',[0,-0,0],...
         'R',[0,0,0]);
    filename = 'calf.stl';
    funcname = 'H_RR_calf_joint';
    RR_calf = frost.Animator.PatchSTL(a1_disp.axs, robot, RR_calf_anim_frame, filename, funcname, 'RRcalf', RobotDesign, opts);
    a1_disp.addItem(RR_calf);
%
%
%     % Add patches for RL leg
%     % +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
% Add RL Hip
RL_hip_Link = robot.Links(getLinkIndices(robot,'RL_hip'));
RL_hip_anim_frame = CoordinateFrame(...
    'Name','RLhipAnim',...
    'Reference',RL_hip_Link.Reference,...
    'Offset', [0,-0,0],...
    'R',[pi,pi,0]);
filename = 'hip.stl';
funcname = 'H_RL_hip_joint';
RL_hip = frost.Animator.PatchSTL(a1_disp.axs, robot, RL_hip_anim_frame, filename, funcname, 'RLhip', RobotDesign, opts);
a1_disp.addItem(RL_hip);
% %
    % Add RL thigh
    RL_thigh_Link = robot.Links(getLinkIndices(robot,'RL_thigh'));
    RL_thigh_anim_frame = CoordinateFrame(...
         'Name','RLhipAnim',...
         'Reference',RL_thigh_Link.Reference,...
         'Offset',[0,0,0],...
         'R',[0,0,0]);
    filename = 'thigh.stl';
    funcname = 'H_RL_thigh_joint';
    RL_thigh = frost.Animator.PatchSTL(a1_disp.axs, robot, RL_thigh_anim_frame, filename, funcname, 'RLthigh', RobotDesign, opts);
    a1_disp.addItem(RL_thigh);

    % Add RL calf
    RL_calf_Link = robot.Links(getLinkIndices(robot,'RL_calf'));
    RL_calf_anim_frame = CoordinateFrame(...
         'Name','RLhipAnim',...
         'Reference',RL_calf_Link.Reference,...
         'Offset',[0,0,0],...
         'R',[0,0,0]);
    filename = 'calf.stl';
    funcname = 'H_RL_calf_joint';
    RL_calf = frost.Animator.PatchSTL(a1_disp.axs, robot, RL_calf_anim_frame, filename, funcname, 'RLcalf', RobotDesign, opts);
    a1_disp.addItem(RL_calf);


% %Draw Contact Points Locations
% fields = fieldnames(robot.ContactPoints);
% for i = 1:numel(fieldnames(robot.ContactPoints))
%     fname = fields{i};
%     name = robot.ContactPoints.(fname).Name;
%     itemsF{i} = frost.Animator.LinkSphere(a1_disp.axs, robot, robot.ContactPoints.(fname), name, opts);
%     a1_disp.addItem(itemsF{i});
% end

%% Display
if isempty(terrain)
    [terrain.Tx, terrain.Ty] = meshgrid(-20:0.7:20, -0.3:0.6:0.3);
    terrain.Tz = [-0.005*ones(1,length(terrain.Tx));-0.005*ones(1,length(terrain.Tx))]; 
end

anim = frost.Animator.AbstractAnimator(a1_disp, t, q, 'Terrain' , terrain);
anim.isLooping = true;
anim.speed = 1;
anim.pov = frost.Animator.AnimatorPointOfView.North;
anim.Animate(true);
conGUI = frost.Animator.AnimatorControls();
conGUI.anim = anim;

end