#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ʼ����
#define ROW 3
#define COL 3

//��������

//��ʼ������
void Inita_board(char board[ROW][COL], int row, int col);
//��ӡ����
void Display_board(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);
//�ж�����
int IsFull(char board[ROW][COL], int row, int col);

