#define _CRT_SECURE_NO_WARNINGS 1
#include"扫雷game.h"


void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------扫雷游戏----------\n");
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------扫雷游戏----------\n");

}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = the_number_of_mines;//布置the_number_of_mines个雷
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//排雷：
	//遇到'0':显示周围雷的数量
	//遇到'1':提示游戏结束
	while (win<row*col-the_number_of_mines)
	{
		printf("请输入要排查的雷的坐标：>\n");
		scanf("%d%d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
				//判断是否踩雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾你踩到雷了，游戏结束\n");
					printf("以下为雷盘");
					Displayboard(mine, row, col);
					break;
				}
				else
				{
					//统计雷
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					Displayboard(show, row, col);
					win++;
				}
		}
		else
		{
			printf("坐标非法，请重新输入");
		}
	}
	if (win == row * col - the_number_of_mines)
	{
		printf("恭喜你，排雷成功！");
	}
}


int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	/*int count = 0;
	for (i = -1; i <= x + 1; i++)
	{
		for (j = -1; j <= y + 1; y++)
		{
			if (mine[x + i][y + j] == '1')
				count++;
		}
	}
	return count;*/
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y - 1] + mine[x][y + 1] + mine[x][y - 1] - 8 * '0';
}

