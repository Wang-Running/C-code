#define _CRT_SECURE_NO_WARNINGS
//关机
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()-执行系统命令
//	system("shutdown -s -t 60");
//	again:
//	printf("注意，你的电脑在一分钟内关机，如果输入我是猪,就取消关机\n请输入>:");
//	scanf("%s",input);
//	if (strcmp(input, "我是猪") == 0)
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
	//生成一个随机数
	//拿时间戳来设置随机数的生成起点
	//time_t time(time_t *timer)
	int ret=rand()%100; //生成1-100随机数
	int guess = 0;//接收猜的数字
	//printf("%d\n",ret);
	//猜数字
	while (1)
	{
		printf("请输入数字>:");
		scanf("%d",&guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择>:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}