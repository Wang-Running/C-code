#define _CRT_SECURE_NO_WARNINGS
//�����
//#include <stdio.h>
//#include <time.h>
//void menu()
//{
//
//	printf("***********************************\n");
//	printf("****     1.play     0.exit     ****\n");
//	printf("***********************************\n");
//}
//
//void game()
//{
//	//����һ�������
//	//��ʱ�����������������������
//	//time_t time(time_t *timer)
//	int ret = rand() % 100; //����1-100�����
//	int guess = 0;//���ղµ�����
//	//printf("%d\n",ret);
//	//������
//	while (1)
//	{
//		printf("����������>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do{
//
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//����ͬ��
//�� N Ϊ�ŵ�����
//Ҫ���������Ϊ������ż�����ܷ�4����
//(1)��NΪ����������� 0 0
//��2����NΪż�����ܱ���������������ҪN/4ֻ���ӣ����N/2ֻ��
//��3����NΪż�����ܱ����������������У�N-2��/4ֻ���ӣ����N/2ֻ��
#include <stdio.h>
int main()
{
	int nCases, nFeets;
	while (scanf("%d", &nCases) != EOF)
	{
		for (int i = 0; i < nCases; i++)
		{
			scanf("%d",&nFeets);
			if (nFeets % 4 == 0)
				printf("%d %d\n", nFeets / 4, nFeets / 2);
			else if (nFeets % 2 == 0)
				printf("%d %d\n", nFeets / 4 + 1, nFeets / 2);
			else
				printf("0 0\n");
		}
	}
	return 0;
}