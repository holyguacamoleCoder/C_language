#define _CRT_SECURE_NO_WARNINGS 1
#include"三子棋game.h"
#include"三子棋game.c"
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
		printf("请输入1/2：");
		scanf("%d", &input);
		switch(input)
		{
		 case 1:
			 printf("玩游戏\n");
			 game();
			 break;
		 case 2:
			 printf("退出游戏\n");
			 break;
		 default:
			 printf("输入错误，请重新输入\n");
			 break;
		}
	} while (input);
}