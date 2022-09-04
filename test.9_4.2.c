#define _CRT_SECURE_NO_WARNINGS 1
//º∆À„1£°+2£°+...+10£°+...+n!
#include<stdio.h>
int main()
{
    int i = 0;
    int fn = 1;
    int sum = 1;
    int n = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fn *= i;
        sum += fn;
    }
    printf("%d", sum);
    return 0;
}