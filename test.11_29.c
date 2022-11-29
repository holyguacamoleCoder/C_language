#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 8
#define COL 8
//8皇后问题
#include<stdio.h>
int count = 0;//方法数
int chess_board[ROW][COL] = { 0 };//初始化
int check(int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)//行
	{
		if (chess_board[i][col] == 1)
		{
			return 0;
		}
	}
	//for (j = 0; j <COL;j++)//列
	//{
	//	if (chess_board[row][j] == 1)
	//	{
	//		return 0;
	//	}
	//}
	for (i = row, j = col; i>=0 && j>=0; i--, j--)//左上
	{
		if (chess_board[i][j] == 1)
		{
			return 0;
		}
	}
	for (i = row, j = col; i <ROW && j<COL; i++, j++)//右下
	{
		if (chess_board[i][j] == 1)
		{
			return 0;
		}
	}
	for (i = row, j = col; j < COL && i >=0; i--, j++)//左下
	{
		if (chess_board[i][j] == 1)
		{
			return 0;
		}
	}
	for (i = row, j = col; i<ROW && j >= 0; i++, j--)//右上
	{
		if (chess_board[i][j] == 1)
		{
			return 0;
		}
	}
	return 1;
}

void printf_board(int row, int col, int board[ROW][COL])
{
	int i = 0;
	int j = 0;
	printf("第%d种方法：", count);
	printf("\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//printf("%d ", chess_board[i][j]);
			if (chess_board[i][j] == 1)
				printf("Q ");
			else
				printf("# ");
		}
		printf("\n");
	}
}

void queen(int row)
{
	int col = 0;
	if (row == ROW)
	{
		row = 0;
		count++;
		printf_board(ROW, COL, chess_board);
	}
	else
	{  
		for (col = 0; col < COL; col++)
		{
			if (check(row, col))//检查皇后能否放入
			{
				chess_board[row][col] = 1;
				queen(row + 1);
				chess_board[row][col] = 0;
			}
		}
	}
}
int main()
{
	queen(0);
	return 0;
}