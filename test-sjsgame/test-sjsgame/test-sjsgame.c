#define _CRT_SECURE_NO_WARNINGS
//�ػ�
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()-ִ��ϵͳ����
//	system("shutdown -s -t 60");
//	again:
//	printf("ע�⣬��ĵ�����һ�����ڹػ����������������,��ȡ���ػ�\n������>:");
//	scanf("%s",input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include <stdio.h>
#include <time.h>
void menu()
{

	printf("***********************************\n");
	printf("****     1.play     0.exit     ****\n");
	printf("***********************************\n");
}

void game()
{
	//����һ�������
	//��ʱ�����������������������
	//time_t time(time_t *timer)
	int ret=rand()%100; //����1-100�����
	int guess = 0;//���ղµ�����
	//printf("%d\n",ret);
	//������
	while (1)
	{
		printf("����������>:");
		scanf("%d",&guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do{

		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}