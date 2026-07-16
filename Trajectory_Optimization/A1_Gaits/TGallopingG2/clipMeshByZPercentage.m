function [Fout, Vout, zCut] = clipMeshByZPercentage(F, V, pctFromBottom, keepAbove, tol)
%CLIPMESHBYZPERCENTAGE Clip a triangle mesh with plane z = zCut.
% Keeps triangles fully on desired side, and CLIPS triangles crossing the plane.
%
% Inputs:
%   F, V            : faces (Mx3), vertices (Nx3)
%   pctFromBottom   : 0..1, where to place cut from zmin to zmax
%   keepAbove       : true => keep z >= zCut ; false => keep z <= zCut
%   tol             : optional numerical tolerance (default 1e-12)
%
% Outputs:
%   Fout, Vout      : clipped mesh
%   zCut            : actual cut plane Z value

    if nargin < 5 || isempty(tol), tol = 1e-12; end
    pctFromBottom = max(0, min(1, pctFromBottom));

    zmin = min(V(:,3));
    zmax = max(V(:,3));
    zCut = zmin + pctFromBottom*(zmax - zmin);

    [Fout, Vout] = clipMeshByPlaneZ(F, V, zCut, keepAbove, tol);
end

function [Fout, Vout] = clipMeshByPlaneZ(F, V, zCut, keepAbove, tol)
% Internal: clip by z = zCut. Produces mesh on one side.

    Vout = V;
    Fout = zeros(0,3);

    for i = 1:size(F,1)
        idx = F(i,:);
        P = Vout(idx,:);          % 3x3
        d = P(:,3) - zCut;        % signed distances to plane

        in = classifyIn(d, keepAbove, tol);
        nIn = sum(in);

        if nIn == 3
            Fout(end+1,:) = idx;  %#ok<AGROW>
        elseif nIn == 0
            continue;
        elseif nIn == 1
            % 1 kept, 2 removed -> 1 triangle
            i0 = find(in,1,'first');       % kept
            outs = find(~in);
            i1 = outs(1);
            i2 = outs(2);

            A = P(i0,:);  dA = d(i0);
            B = P(i1,:);  dB = d(i1);
            C = P(i2,:);  dC = d(i2);

            X = intersectEdgeAtZ(A, dA, B, dB, zCut);
            Y = intersectEdgeAtZ(A, dA, C, dC, zCut);

            ix = size(Vout,1)+1; Vout(ix,:) = X; %#ok<AGROW>
            iy = size(Vout,1)+1; Vout(iy,:) = Y; %#ok<AGROW>

            Fout(end+1,:) = [idx(i0), ix, iy]; %#ok<AGROW>

        elseif nIn == 2
            % 2 kept, 1 removed -> quad -> 2 triangles
            outIdx = find(~in,1,'first');
            inIdx  = find(in);  % two kept

            A = P(inIdx(1),:); dA = d(inIdx(1));
            B = P(inIdx(2),:); dB = d(inIdx(2));
            C = P(outIdx,:);   dC = d(outIdx);

            X = intersectEdgeAtZ(A, dA, C, dC, zCut);
            Y = intersectEdgeAtZ(B, dB, C, dC, zCut);

            ix = size(Vout,1)+1; Vout(ix,:) = X; %#ok<AGROW>
            iy = size(Vout,1)+1; Vout(iy,:) = Y; %#ok<AGROW>

            aIdx = idx(inIdx(1));
            bIdx = idx(inIdx(2));

            % Triangulate quad: A-B-Y and A-Y-X
            Fout(end+1,:) = [aIdx, bIdx, iy]; %#ok<AGROW>
            Fout(end+1,:) = [aIdx, iy, ix];   %#ok<AGROW>
        end
    end

    % Remove unused vertices + remap faces
    [Vout, Fout] = compactMesh(Vout, Fout);
end

function in = classifyIn(d, keepAbove, tol)
    if keepAbove
        in = d >= -tol;   % treat near-plane as inside
    else
        in = d <= tol;
    end
end

function X = intersectEdgeAtZ(A, dA, B, dB, zCut)
% Returns intersection of segment AB with plane z=zCut
    denom = (dA - dB);
    if abs(denom) < 1e-20
        t = 0;
    else
        t = dA / (dA - dB);
    end
    X = A + t*(B - A);
    X(3) = zCut;  % enforce exact Z for stability
end

function [Vout,Fout] = compactMesh(Vin, Fin)
    if isempty(Fin)
        Vout = zeros(0,3);
        Fout = zeros(0,3);
        return;
    end
    used = unique(Fin(:));
    map = zeros(size(Vin,1),1);
    map(used) = 1:numel(used);

    Vout = Vin(used,:);
    Fout = map(Fin);
end
