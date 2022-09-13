#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int judge_pri(int x)
{
    int i = 0;
    for (i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    if (judge_pri(a) == 0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}