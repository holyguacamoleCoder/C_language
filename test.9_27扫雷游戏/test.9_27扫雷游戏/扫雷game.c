#define _CRT_SECURE_NO_WARNINGS 1
#include"ɨ��game.h"


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
	printf("----------ɨ����Ϸ----------\n");
	//��ӡ�к�
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------ɨ����Ϸ----------\n");

}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = the_number_of_mines;//����the_number_of_mines����
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
	//���ף�
	//����'0':��ʾ��Χ�׵�����
	//����'1':��ʾ��Ϸ����
	while (win<row*col-the_number_of_mines)
	{
		printf("������Ҫ�Ų���׵����꣺>\n");
		scanf("%d%d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
				//�ж��Ƿ����
				if (mine[x][y] == '1')
				{
					printf("���ź���ȵ����ˣ���Ϸ����\n");
					printf("����Ϊ����");
					Displayboard(mine, row, col);
					break;
				}
				else
				{
					//ͳ����
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					Displayboard(show, row, col);
					win++;
				}
		}
		else
		{
			printf("����Ƿ�������������");
		}
	}
	if (win == row * col - the_number_of_mines)
	{
		printf("��ϲ�㣬���׳ɹ���");
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

