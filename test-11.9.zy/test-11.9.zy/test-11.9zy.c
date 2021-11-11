#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	//创建数组
	char mine[ROWS][COLS] = { 0 };//布置雷
	char show[ROWS][COLS] = { 0 };//排查雷

	//初始化mine数组为全'0'
	initboard(mine,ROWS,COLS,'0');
	//初始化show数组为全'*'
	initboard(show, ROWS, COLS, '*');

	//打印棋盘
	//displayboard(show,ROW,COL);
	//displayboard(mine, ROW, COL);

	//布置雷
	setmine(mine,ROW,COL);
	//displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);

	//排雷
	findmine(mine,show, ROW, COL);

}

void menu()
{
	printf("*******************\n");
	printf("*****  1.play  ****\n");
	printf("*****  0.exit  ****\n");
	printf("*******************\n");
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			//扫雷
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

