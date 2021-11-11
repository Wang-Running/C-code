#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)   //初始化棋盘
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

void displayboard(char board[ROWS][COLS ], int row, int col)   //打印棋盘
{
	int i = 0;
	int j = 0;
	for (i=0;i<=col;i++)
	{
		printf("%d ",i);            //打印列号
	}
	printf("\n");
	for (i= 1; i <= row; i++)
	{
		printf("%d ",i);              //打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char mine[ROWS][COLS], int row, int col)    //布置雷
{
	int count = 10;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int get_mine(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] + 
		mine[x - 1][y - 1] +
		mine[x][y - 1] + 
		mine[x + 1][y - 1]+
		mine[x + 1][y] + 
		mine[x + 1][y + 1] +
		mine[x][y + 1] + 
		mine[x - 1][y + 1]-8*'0';
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)  //排雷
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("请输入要排查的坐标:\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//判断
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				//计算x，y坐标周围的雷
				int n=get_mine(mine,x,y); 
				show[x][y] = n + '0';
				displayboard(show, ROW, COL);
			}

		}
		else
		{
			printf("输入坐标非法，无法排雷，请重新输入:\n");
		}
	}
}