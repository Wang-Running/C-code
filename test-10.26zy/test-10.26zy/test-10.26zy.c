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
//	int b = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		a = 1.0 / i*b;
//		sum += a;
//		b = -b;
//	}
//	printf("%.2f\n",sum);
//	return 0;
//}


//求10 个整数中最大值
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)       //依次输入10个数
//	{
//		scanf("%d",&arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)         //下标递增，依次比较
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d",max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)               //九次行循环
//	{
//		int j = 0;
//		int a = 0;
//		for (j=1;j<=i;j++)
//		{
//
//			printf("%d*%d=%2d ",j,i,i*j);
//		}
//		printf("\n");                    //一行完了换行
//	}
//	return 0;
//}

//二分查找 要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 1;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < a)
		{
			left = mid+1;
		}
		else if (arr[mid]>a)
		{
			right = mid-1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}

