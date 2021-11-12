#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)   //��ʼ������
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

void displayboard(char board[ROWS][COLS ], int row, int col)   //��ӡ����
{
	int i = 0;
	int j = 0;
	for (i=0;i<=col;i++)
	{
		printf("%d ",i);            //��ӡ�к�
	}
	printf("\n");
	for (i= 1; i <= row; i++)
	{
		printf("%d ",i);              //��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char mine[ROWS][COLS], int row, int col)    //������
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

int get_mine(char mine[ROWS][COLS],int x,int y)   //������
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

void disappear(char mine[ROWS][COLS], int x, int y)   //��Ȧ
{
	mine[x][y] = mine[x - 1][y] =mine[x - 1][y - 1] =mine[x][y - 1] =mine[x + 1][y - 1] =mine[x + 1][y] =mine[x + 1][y + 1] =mine[x][y + 1] =mine[x - 1][y + 1] = ' ';
	displayboard(mine, ROW, COL);

}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)  //����
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//�ж�
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				//����x��y������Χ����
				int n=get_mine(mine,x,y); 
				if (n != 0)
				{
					show[x][y] = n + '0';
					displayboard(show, ROW, COL);
				}
				else
				{
					//��Ȧ����
					disappear(show, x, y);
				}
			}
		}
		else
		{
			printf("��������Ƿ����޷����ף�����������:\n");
		}
	}
}

//void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)  //����
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win<row*col-10)
//	{
//		printf("������Ҫ�Ų������:");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row&&y >= 1 && y <= col)
//		{
//			//�ж�
//			if (mine[x][y] == '1')
//			{
//				printf("���ź����㱻ը���ˣ�\n");
//				displayboard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				//����x��y������Χ����
//				int n = get_mine(mine, x, y);
//				if (n != 0)
//					show[x][y] = n + '0';
//					displayboard(show, ROW, COL);
//					win++;
//			}
//
//		}
//		else
//		{
//			printf("��������Ƿ����޷����ף�����������:\n");
//		}
//	}
//	if (win == row*col - 10)
//	{
//		printf("���׳ɹ�\n");
//		displayboard(mine, ROW, COL);
//	}
//}