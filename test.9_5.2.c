#define _CRT_SECURE_NO_WARNINGS 1
//ģ���û���¼
#include<string.h>
#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };//�ٶ������Ѿ�����Ϊ123456
	for (i = 0; i < 3; i++)
	{
		printf("���������루������3�λ��ᣩ��");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�");
			break;
		}
		else
		{
			printf("����������ٴγ���\n");
		}
	}
	if (i == 3)
	{
		printf("���������������Σ������˳�\n");
	}
	return 0;
}