#define _CRT_SECURE_NO_WARNINGS 1
//1~1000之间的整数中9出现了多少次？
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 1000; i++)
	{
		if (i % 10  == 9)
			count++;
		if (i / 10  == 9)
			count++;
		if (i / 100 == 9)
			count++;
	}
	printf("%d", count);
	return 0;
}