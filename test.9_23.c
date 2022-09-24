#define _CRT_SECURE_NO_WARNINGS 1
//斐波那契数列第n项(递归不考虑栈溢出
#include<stdio.h>
int Fac(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fac(n - 1) + Fac(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d", ret);
	return 0;
}