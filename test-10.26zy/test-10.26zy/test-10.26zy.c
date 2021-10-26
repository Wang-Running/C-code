#define _CRT_SECURE_NO_WARNINGS
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d \n", i);
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//#include <stdio.h>
//int main()
//{
//	float i = 0.0;
//	float a = 0.0;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		a = 1.0 / i;
//		sum += a;
//	}
//	printf("%.2f\n",sum);
//	return 0;
//}

//求10 个整数中最大值
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {};
//	scanf("%");
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 9; i++)               //九次行循环
	{
		int j = 0;
		int a = 0;
		for (j=0;j<i;j++)
		{

			printf("%d*%d=%d",);
		}
		printf("\n");                    //一行完了换行
	}
	return 0;
}