#define _CRT_SECURE_NO_WARNINGS 1
//打印100~200之间的素数
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for(i = 101; i <= 200; i+=2)//素数一定不是偶数
	{
		int j = 0;
		int flag = 1;//先假设
		for (j = 2; j <= sqrt(i); j++)//取根号优化
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}