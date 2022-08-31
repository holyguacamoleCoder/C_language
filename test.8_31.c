#define _CRT_SECURE_NO_WARNINGS 1
//scanf初次使用
//计算两个整数的和
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}