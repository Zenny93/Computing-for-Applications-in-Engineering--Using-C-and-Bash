function[] = task3(n)
A = rand(n).*2-1;
b = ones(1,n); %sets the value of b to 1
tic;
c = A.* b;
toc;
end
