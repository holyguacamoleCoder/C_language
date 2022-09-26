#define _CRT_SECURE_NO_WARNINGS 1
#include"������game.h"


void game()
{
	//��ά���鴢��
	char board[ROW][COL];
	
	//��ʼ������
	Inita_board(board, ROW, COL);
	//��ӡ����
	Display_board(board, ROW, COL);
	char ret ='0';
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		Display_board(board, ROW, COL);
		//�ж����Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		Display_board(board, ROW, COL);
		//�жϵ���Ӯ
		 ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	 if (ret == '*')
	{
		printf("��Ӯ��\n");
		Display_board(board, ROW, COL);

	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		Display_board(board, ROW, COL);
	}
	else
	 {
		 printf("ƽ��\n");
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
		printf("������壺");
		scanf("%d %d", &x, &y);
		printf("������Ҫ��������꣺\n");
		//�ж�����Ϸ���
		if (x>=1 && x <= row && y>=1 && y <= row)
		{
			//����
			//�ж�λ���Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("����λ�ñ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������:\n");
	//�ж�λ���Ƿ�ռ��
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
	//�ж�ʤ��
	int i = 0;
	//���Ӯ��*   //����Ӯ��#
	//�жϺ��У�
	for (i = 0; i < row; i++)
	{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			{
				return board[i][1];
			}
	}
	//�ж�����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж�Ʋб
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[1][1];
	//�ж���б
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		return board[1][1];
	
	//�ж�ƽ�֣�'Q'
	int a = IsFull(board, ROW, COL);
	if (a == 1)
	{
		return 'Q';
	}
	//�жϼ�����'C'
	return 'C';
}
