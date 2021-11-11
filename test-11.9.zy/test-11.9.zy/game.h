#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//函数声明
void initboard(char board[ROWS][COLS], int rows, int cols, char set);//初始化

void displayboard(char board[ROWS][COLS], int row, int col);    //打印棋盘

void setmine(char mine[ROWS][COLS],int row, int col);   //布置雷

void findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);  //排雷