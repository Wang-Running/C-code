#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//��������
void initboard(char board[ROWS][COLS], int rows, int cols, char set);//��ʼ��

void displayboard(char board[ROWS][COLS], int row, int col);    //��ӡ����

void setmine(char mine[ROWS][COLS],int row, int col);   //������

void findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);  //����