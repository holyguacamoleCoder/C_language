#define _CRT_SECURE_NO_WARNINGS 1
//语句：打印1~100的所有奇数
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i += 2)
	{
		printf("%d ", i);
	}
	return 0;
}