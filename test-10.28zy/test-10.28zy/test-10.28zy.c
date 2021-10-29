#define _CRT_SECURE_NO_WARNINGS
//随机数
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
//	//生成一个随机数
//	//拿时间戳来设置随机数的生成起点
//	//time_t time(time_t *timer)
//	int ret = rand() % 100; //生成1-100随机数
//	int guess = 0;//接收猜的数字
//	//printf("%d\n",ret);
//	//猜数字
//	while (1)
//	{
//		printf("请输入数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//鸡兔同笼
//设 N 为脚的数量
//要想清楚脚数为奇数或偶数，能否被4整除
//(1)若N为奇数，则输出 0 0
//（2）若N为偶数且能被四整除，则最少要N/4只兔子，最多N/2只鸡
//（3）若N为偶数不能被四整除，则最少有（N-2）/4只兔子，最多N/2只鸡
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