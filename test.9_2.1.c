#define _CRT_SECURE_NO_WARNINGS 1
//��䣺�ж�һ�����Ƿ�Ϊ����
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
