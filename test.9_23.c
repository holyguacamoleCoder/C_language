#define _CRT_SECURE_NO_WARNINGS 1
//쳲��������е�n��(�ݹ鲻����ջ���
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