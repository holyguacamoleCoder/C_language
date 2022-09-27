#pragma once

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define the_number_of_mines 10

//引用头文件

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数声明
//初始化棋盘
void Initboard(char board[ROWS][COLS], int rows, int cols,char set);
//打印棋盘
void Displayboard(char board[ROWS][COLS], int row, int col);
//布置雷
void Setmine(char board[ROWS][COLS], int row, int col);
//排查雷
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//统计雷
int get_mine_count(char mine[ROWS][COLS], int x, int y);



