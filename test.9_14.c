#define _CRT_SECURE_NO_WARNINGS 1
//函数闰年
#include<stdio.h>
int judge_leapy(int x)
{
	return(((x % 100 != 0) && (x % 4 == 0)) || x % 400 == 0);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (judge_leapy(n) == 0)
	{
		printf("不是闰年");
	}
	else
	{
		printf("是闰年");
	}
	return 0;
}