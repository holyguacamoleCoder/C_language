#define _CRT_SECURE_NO_WARNINGS 1
//函数打印9*9乘法表
#include<stdio.h>
void printf_mut_table(int x)
{
    int i = 0;
    for (i = 1; i <= x; i++)
    {
        int j = 0;
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);//9
    printf_mut_table(n);
    return 0;
}