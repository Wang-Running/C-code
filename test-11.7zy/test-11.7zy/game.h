
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
//��������
void initboard(char board[ROW][COL], int row, int col);    //��ʼ������

void displayboard(char board[ROW][COL], int row, int col); //��ӡ����

void play_move(char board[ROW][COL], int row, int col);   //�������

void computer_move(char board[ROW][COL], int row, int col);  //��������

char is_win(char board[ROW][COL], int row, int col);  //�ж���Ӯ  ���Ӯ'*' ����Ӯ'#'  ƽ��'Q'  ����'C'
