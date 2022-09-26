#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//初始定义
#define ROW 3
#define COL 3

//函数声明

//初始化棋盘
void Inita_board(char board[ROW][COL], int row, int col);
//打印棋盘
void Display_board(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char IsWin(char board[ROW][COL], int row, int col);
//判断满盘
int IsFull(char board[ROW][COL], int row, int col);

