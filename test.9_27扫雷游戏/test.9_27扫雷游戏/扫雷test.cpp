#define _CRT_SECURE_NO_WARNINGS 1
#include"ɨ��game.h"
#include"ɨ��game.c"

void menu()
{
	printf("*****************************\n");
	printf("*********   1.play   ********\n");
	printf("*********   0.exit   ********\n");
	printf("*****************************\n");

}


void game()
{
	//��������Ϣ
	char mine[ROWS][COLS]={0};
	//�洢�Ų�����Ϣ
	char show[ROWS][COLS]={0};
	//��ʼ������
	Initboard(mine, ROWS, COLS, '0');//0�����ף�1����
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	//Displayboard(mine, ROW, COL);  //��󲻰����̴�ӡ����
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);  //��󲻰����̴�ӡ����
	//�Ų���
	Findmine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��1/0>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("��ʼ��Ϸ\n");
			game();
			break;
		}
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}



//�Ż���
//1.չ���յ�---�ݹ�
//2.�����---������