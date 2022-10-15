#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//利用语句计算n的阶乘
#include<stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    int fn = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fn *= i;
    }
    printf("%d", fn);
    return 0;
}