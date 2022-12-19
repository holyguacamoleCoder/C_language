
disp('输入判断矩阵：');
A=input('A:')


EORROR=0

%判断方阵和维度
[r,c]=size(A)
if r~=c || c<=1
    EORROR=1
end

%判断矩阵大于0
if EORROR==0
    if sum(sum(A<=0))>0
    EORROR=2
    end
end

%判断n<=15
if EORROR==0
    [n,n]=size(A)
    if n>15
      EORROR=3
    end
end

%判断相乘为1
if EORROR==0
    if(sum(sum(A'.*A~=ones(n))))>0
     EORROR=4
    end
end


%%%%%%%%%%%一致性检验%%%%%%%%%%%%%%%
if EORROR==0
    %计算最大特征值
    [V,D]=eig(A)
    MAX_EIG=max(max(D))
    [r,c]=find(MAX_EIG==D,1)

    %计算一致性指标
    CI=MAX_EIG-n/n-1
    RI=[0 0 0.52 0.89 1.12 1.26 1.36 1.41 1.46 1.49 1.52 1.54 1.56 1.58 1.59];
    CR=CI/RI(n)

    if CR<0.10
        disp('判断矩阵的一致性可以接受');
    elseif CR>0.1
        disp('CR>0.1,判断矩阵需要进行修改');
    end


    %计算权重

    %%算术平均法

    Add_A=sum(A,1);
    ADD_A=repmat(Add_A,n,1);
    ADD_A0=A./ADD_A;

    add_A=sum(ADD_A0,2);

    disp('算数平均权重：');
    disp(add_A./n)


    %%几何平均法
    
    Prod_A=prod(A,2);
    PROD_A=Prod_A.^(1/n);
    disp('几何平均权重：');
    disp(PROD_A/sum(PROD_A));


    %%特征值权重
    
    disp('特征值权重')
    disp(V(:,c)/sum(V(:,c)))



end
%clc;clear