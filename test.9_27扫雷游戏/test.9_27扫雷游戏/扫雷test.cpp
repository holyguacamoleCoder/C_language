#define _CRT_SECURE_NO_WARNINGS 1
#include"扫雷game.h"
#include"扫雷game.c"

void menu()
{
	printf("*****************************\n");
	printf("*********   1.play   ********\n");
	printf("*********   0.exit   ********\n");
	printf("*****************************\n");

}


void game()
{
	//储存雷信息
	char mine[ROWS][COLS]={0};
	//存储排查雷信息
	char show[ROWS][COLS]={0};
	//初始化棋盘
	Initboard(mine, ROWS, COLS, '0');//0不是雷；1是雷
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	//Displayboard(mine, ROW, COL);  //最后不把雷盘打印出来
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);  //最后不把雷盘打印出来
	//排查雷
	Findmine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：1/0>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("开始游戏\n");
			game();
			break;
		}
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}



//优化：
//1.展开空地---递归
//2.标记雷---新棋盘