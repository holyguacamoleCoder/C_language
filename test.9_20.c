#define _CRT_SECURE_NO_WARNINGS 1
//������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**********************\n");
	printf("********0.play********\n");
	printf("********1.exit********\n");
	printf("**********************\n");

}

void game()
{
	int ret = rand()%100+1;
	//printf("%d", ret);
	int guess = 0;
	while (1)
	{
		printf("��������µ���\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
			continue;
		}
		else if (guess < ret)
		{
			printf("��С��\n");
			continue;
		}
		else if (guess == ret)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	//��ӡ�˵�
	
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��(0/1):");
		scanf("%d", &input);
		if (input== 0)//������Ϸ��
		{
			printf("������Ϸ\n");
			game();
			break;
		}
		else if (input == 1)//�˳���Ϸ��
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else
		{
			printf("�����������������\n");
			continue;
		}
	} while (input);
	return 0;
}