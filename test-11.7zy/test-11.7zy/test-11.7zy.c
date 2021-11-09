#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//��������Ϸ
//�˵�
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
	initboard(board,ROW,COL);  //��ʼ������
	displayboard(board, ROW, COL);  //��ӡ����

	char ret = 0;
	while (1)
	{
		play_move(board, ROW, COL);   //�������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}


void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		printf("��ѡ��>:\n");
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������>:");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}

