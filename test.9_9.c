#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ100~200֮�������
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for(i = 101; i <= 200; i+=2)//����һ������ż��
	{
		int j = 0;
		int flag = 1;//�ȼ���
		for (j = 2; j <= sqrt(i); j++)//ȡ�����Ż�
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