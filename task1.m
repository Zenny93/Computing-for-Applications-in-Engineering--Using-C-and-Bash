function [n] = task1(b)
A = readmatrix(b);
n = norm(A,'fro');
end
