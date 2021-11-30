#define _CRT_SECURE_NO_WARNINGS
//BC29 不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。
//#include<stdio.h>
//int main()
//{
//	int num;
//	while (scanf("%d", &num) != EOF)
//		printf("%d\n", 1<<num);
//	return 0;
//}


//BC70  KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”三角形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)        //四行
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (j == 0 || i == j||i==n-1)   // i表示行，最后一行全部打印
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//BC76 公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[7] = {0};
//	int max=-1;
//	int min = 101;
//	double sum = 0;
//	for (i=0;i<7;i++)
//	{
//		scanf("%d",&arr[i]);
//		if (arr[i]>max)
//			max = arr[i];
//		if (arr[i]<min)
//			min = arr[i];
//		sum += arr[i];
//	}
//	sum = sum - max - min;
//	sum = sum / 5;
//	printf("%.2lf",sum);
//	return 0;
//}

//BC60 KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的带空格直角三角形图案。
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = n-1; j>i; j--)
			{
				printf("  ");
			}
			for (j = 0; j<=i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}