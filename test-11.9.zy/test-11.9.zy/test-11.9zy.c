#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	//��������
	char mine[ROWS][COLS] = { 0 };//������
	char show[ROWS][COLS] = { 0 };//�Ų���

	//��ʼ��mine����Ϊȫ'0'
	initboard(mine,ROWS,COLS,'0');
	//��ʼ��show����Ϊȫ'*'
	initboard(show, ROWS, COLS, '*');

	//��ӡ����
	//displayboard(show,ROW,COL);
	//displayboard(mine, ROW, COL);

	//������
	setmine(mine,ROW,COL);
	//displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);

	//����
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
		printf("��ѡ��:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			//ɨ��
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
