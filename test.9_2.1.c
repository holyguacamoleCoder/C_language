#define _CRT_SECURE_NO_WARNINGS 1
//语句：判断一个数是否为奇数
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (1 == a % 2)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
