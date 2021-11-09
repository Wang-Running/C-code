
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
//函数声明
void initboard(char board[ROW][COL], int row, int col);    //初始化棋盘

void displayboard(char board[ROW][COL], int row, int col); //打印棋盘

void play_move(char board[ROW][COL], int row, int col);   //玩家下棋

void computer_move(char board[ROW][COL], int row, int col);  //电脑下棋

char is_win(char board[ROW][COL], int row, int col);  //判断输赢  玩家赢'*' 电脑赢'#'  平局'Q'  继续'C'
