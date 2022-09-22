#define _CRT_SECURE_NO_WARNINGS 1
//递归实现n的k次方
#include<stdio.h>
double Pow(int x,int y)
{
	if (y > 0)
	{
		return x * Pow(x, y - 1);
	}
	else if (y==0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(x, -y);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n,&k);
	double ret=Pow(n,k);
	printf("%lf", ret);
	return 0;
}