#define _CRT_SECURE_NO_WARNINGS 1
//����������������Լ��
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int gcf = 0;
	scanf("%d%d", &a, &b);
	////���ȷ���
	/*if (a < b)
	{
		gcf = a;
	}
	else
	{
		gcf = b;
	}
	while (1)*/
	//{
	//	if ((a % gcf == 0) &&( b % gcf == 0))
	//	{
	//		printf("���Լ��Ϊ��%d\n", gcf);
	//		break;
	//	}
	//	else
	//	{
	//		gcf--;
	//	}
	//}
	
	//շת�����
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;

	}
	while (1)
	{
		int ret = a% b;

		if ( ret== 0)
		{
			printf("���Լ��Ϊ��%d", b);
			break;
		}
		else
		{
			b = ret;
		}
	}

	return 0;
}