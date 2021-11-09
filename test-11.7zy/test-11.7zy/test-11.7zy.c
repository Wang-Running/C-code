#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//三子棋游戏
//菜单
//

void menu()
{
	printf("************************\n");
	printf("******  1.play  ********\n");
	printf("******  0.exit  ********\n");
	printf("************************\n");
}

void game()
{
	char board[ROW][COL] = {0};
	initboard(board,ROW,COL);  //初始化棋盘
	displayboard(board, ROW, COL);  //打印棋盘

	char ret = 0;
	while (1)
	{
		play_move(board, ROW, COL);   //玩家下棋
		displayboard(board, ROW, COL);

		ret = is_win(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		displayboard(board, ROW, COL);

		ret = is_win(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}


void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		printf("请选择>:\n");
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入>:");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}

