function plotfoot(robot,gait)

X = SymVariable('x',[robot.numState,1]);

          Phase_Time = [gait.tspan];
                Time = cell2mat(Phase_Time);
       NumberOfNodes = length(Time);
      NumberOfPhases = length(Phase_Time);   
                   v =  round((gait(end - 1).states.x(1,11) - gait(1).states.x(1,1))/gait(end - 1).tspan(1,11));
    
    
    
  FK_FRfoot = robot.ContactPoints.FRfoot.computeForwardKinematics;                           % Forward Kinematics
  FK_RRfoot = robot.ContactPoints.RRfoot.computeForwardKinematics;                           % Forward Kinematics
   J_FRfoot = robot.ContactPoints.FRfoot.computeBodyJacobian(robot.numState);   % Foot Jacobian
   J_RRfoot = robot.ContactPoints.RRfoot.computeBodyJacobian(robot.numState);   % Foot Jacobian

 fk = ones(3,NumberOfNodes);
frv = ones(6,NumberOfNodes);
rrv = ones(6,NumberOfNodes);

 Q = cell(1,NumberOfPhases);
dQ = cell(1,NumberOfPhases);

     h = 0;
for i = 1 : NumberOfPhases 
      Q(i) = {gait(i+h).states.x};
     dQ(i) = {gait(i+h).states.dx};
     h = h + 1;
end

    q = cell2mat(Q);
   dq = cell2mat(dQ);

    n = 0;    
for i = 1 : NumberOfNodes 
    
       f1 = subs(FK_FRfoot(1:3,4),X(:),q(:,i)); % x = f(q)
    fk(:,i) = f1;
    
       f2 = subs(J_FRfoot,X(:),q(:,i)) * dq(:,i);  % v = J(q)*dq
 frv(:,i) = f2;
    
       f3 = subs(J_RRfoot,X(:),q(:,i)) * dq(:,i);  % v = J(q)*dq
 rrv(:,i) = f3;
          
end


      f = figure;
      f.Units = 'inches';
      f.Position = [5 5.6 16 4.75]; 
      f.Color = 'w';
      
      t = tiledlayout(1,3);
     
      nexttile
      plot(Time,fk,'linewidth',1.3)
      grid on
      title('FR Foot Position') 
      xlabel(' Time   (s) ')
      ylabel(' Position (m) ')
      legend('FR Foot x','FR Foot y','FR Foot z')

      nexttile
       plot(Time,frv(1,:),Time,frv(2,:),Time,frv(3,:),'linewidth',1.3) 
      grid on
      title('FR Foot Linear Velocity') 
      xlabel(' Time   (s) ')
      ylabel(' Velocity  (m/s)  ')
      legend('x','y','z')
      
      nexttile
       plot(Time,frv(4,:),'+-',Time,frv(5,:),'+-',Time,frv(6,:),'+-','linewidth',1.3) 
      grid on
      title('FR Foot Angular Velocity') 
      xlabel(' Time (s)')
      ylabel(' Velocity  (rad/s)')
      legend('roll','pitch','yaw')
      
end

      
      

      

