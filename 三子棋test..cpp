#define _CRT_SECURE_NO_WARNINGS 1
#include"������game.h"
#include"������game.c"
void menu()
{
	printf("****************************\n");
	printf("********   1.play    *******\n");
	printf("********   2.exit    *******\n");
	printf("****************************\n");

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������1/2��");
		scanf("%d", &input);
		switch(input)
		{
		 case 1:
			 printf("����Ϸ\n");
			 game();
			 break;
		 case 2:
			 printf("�˳���Ϸ\n");
			 break;
		 default:
			 printf("�����������������\n");
			 break;
		}
	} while (input);
}