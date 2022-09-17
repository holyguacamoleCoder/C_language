#define _CRT_SECURE_NO_WARNINGS 1
//µÝ¹éÇónµÄ½×³Ë
#include<stdio.h>
int fac(int x)
{
	//fac(n)=fac(n-1)*n
	if(x>=2)
	return fac(x - 1)*x;
	if (x = 1)
	{
		return 1;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", fac(n));
	return 0;
}