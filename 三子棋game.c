#define _CRT_SECURE_NO_WARNINGS 1
#include"三子棋game.h"


void game()
{
	//二维数组储存
	char board[ROW][COL];
	
	//初始化棋盘
	Inita_board(board, ROW, COL);
	//打印棋盘
	Display_board(board, ROW, COL);
	char ret ='0';
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		Display_board(board, ROW, COL);
		//判断玩家赢
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		Display_board(board, ROW, COL);
		//判断电脑赢
		 ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	 if (ret == '*')
	{
		printf("你赢了\n");
		Display_board(board, ROW, COL);

	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
		Display_board(board, ROW, COL);
	}
	else
	 {
		 printf("平局\n");
		 Display_board(board, ROW, COL);
	 }
}

void Inita_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i<row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j <col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
				
			}
			
			printf("\n");
		}
		
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家下棋：");
		scanf("%d %d", &x, &y);
		printf("请输入要下棋的坐标：\n");
		//判断坐标合法性
		if (x>=1 && x <= row && y>=1 && y <= row)
		{
			//下棋
			//判断位置是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标位置被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:\n");
	//判断位置是否被占用
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y]==' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}


char IsWin(char board[ROW][COL], int row, int col)
{
	//判断胜局
	int i = 0;
	//玩家赢：*   //电脑赢：#
	//判断横行：
	for (i = 0; i < row; i++)
	{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			{
				return board[i][1];
			}
	}
	//判断竖列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断撇斜
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[1][1];
	//判断捺斜
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		return board[1][1];
	
	//判断平局：'Q'
	int a = IsFull(board, ROW, COL);
	if (a == 1)
	{
		return 'Q';
	}
	//判断继续：'C'
	return 'C';
}
