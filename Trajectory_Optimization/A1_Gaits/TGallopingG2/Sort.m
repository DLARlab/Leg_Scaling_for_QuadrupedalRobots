function Output = Sort(configurations,grids)

A = ones(1,length(configurations));
for i = 1 : length(configurations)
 A(i) = configurations{i}.indexVector;
end

a = 0;
%------ PF
for i = 1 : length(grids{1})
Data.V{i}.Index = find(A==i);
      C = ones(1,length(Data.V{i}.Index));
   solC = ones(1,length(Data.V{i}.Index));
for j = 1 : length(C)
   C(j) = configurations{Data.V{i}.Index(j)}.costValue;
 solC(j)= double(~isempty(configurations{Data.V{i}.Index(j)}.finalDatStruct));
end
     solNotEmpty = find(solC==1);
               K = C(solNotEmpty); 
Data.V{i}.CostValue = min(K);
             if isempty(Data.V{i}.CostValue)
               d =[];
             else
               d = find(C==Data.V{i}.CostValue);
             end
Data.V{i}.MinIndex = Data.V{i}.Index(d);
           if isempty(Data.V{i}.MinIndex)
               Data.V{i}.sol = [];
           else
           Data.V{i}.sol = configurations{Data.V{i}.MinIndex}.finalDatStruct;
           end
           Data.V{i}.Velocity = a;
           a = a + 0.1;  
%            a = a + 0.3; 
end

% Extarct Non-empty solutions:
nosol = length(Data.V);
CheckData = ones(1,nosol);
for k = 1:nosol
CheckData(1,k) = ~isempty(Data.V{k}.sol);
end
NonEmptyData = find(CheckData==1);
Data.V(NonEmptyData(end)+1:nosol)=[];
Data.V(1:NonEmptyData(1)-1)=[];

% for i = 1 : length(Data.V)
% sol = Data.V{i}.sol;
%       Data.V{i}.gait = parse(nlp, sol); 
% end

Output = Data;
end