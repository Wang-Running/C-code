#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
//����ʵ��
void initboard(char board[ROW][COL], int row, int col)     //��ʼ������
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j=0;j<col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[ROW][COL], int row, int col)    //��ӡ����
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//����
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//�ָ���
		if (i<row-1)
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j < col - 1)
			printf("|");
		}
		printf("\n");
	}
}

void play_move(char board[ROW][COL], int row, int col)   //�������
{
	int x = 0;
	int y = 0;
	printf("�������>:");
	while (1)
	{
		scanf("%d %d",&x,&y);
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����걻ռ�ã�����������:\n");
		}

		else
		{
			printf("����Ƿ�,����������:\n");
		}
	}
}


void computer_move(char board[ROW][COL], int row, int col)    //��������
{
	printf("��������:\n");
	int x = rand()%ROW;
	int y = rand()%COL;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col)   //�ж���Ӯ
{
	int i = 0;
	//����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�Խ��ߵ��ж�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	if (1 == is_full(board, row, col))
	{
		return 'Q';
	}
	//����
	return 'C';
}
