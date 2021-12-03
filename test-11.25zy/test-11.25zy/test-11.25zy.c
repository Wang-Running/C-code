#define _CRT_SECURE_NO_WARNINGS

//BC118
//老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。
//1.运行超时
#include <stdio.h>
int main()
{
	//输入序列
	int n = 0;
	scanf("%d",&n);
	int i = 0;
	int arr1[100001] = {0};
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	//查重
	for (i=0;i<n;i++)
	{
		if (arr1[i] == arr1[i + 1])
		{
			for (i; i < n; i++)        //最后一位数不被覆盖 防越界
			{
				arr1[i] = arr1[i + 1];
			}
			i = 0;
			i--;
		}
		if (arr1[i+1]==0)                //防止arr1[i]=arr1[i+1]=0,死循环
			break;
	}
	//排序       冒泡升序
	for (i = 0;i<n;i++)
	{
		int j = 0;
		for (j = 0; j < n-1; j++)       //防越界互换值
		{
			if (arr1[j]>arr1[j + 1])
			{
				int temp = 0;
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j+1] = temp;
			}
		}
	}
	//打印
	for (i = 0; i < n; i++)
	{
		if (arr1[i]!=0)
		printf("%d ", arr1[i]);
	}
	return 0;
}

//BC114-小乐乐排电梯
//#include <stdio.h>
//
//void Wait(int x)
//{
//	int i = 0;        // 12的个数
//	int time = 2;
//	if (x < 12)
//		printf("%d\n",time);
//	else
//	{
//		while (x / 12)
//		{
//			i += i+ x / 12;
//			x %= 12;
//		}
//		time = i * 4 + time;
//		printf("%d\n", time);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	Wait(n);
//	return 0;
//}

//#include <stdio.h>
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n / 12 * 4 + 2);
//
//	return 0;
//}

//BC107-矩阵转置
//#include <stdio.h>
//int main()
//{
//	int row, col;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &row, &col);
//	//输入
//	for (int i=0;i<row;i++)
//	{
//		for (int j = 0;j<col;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	//输出
//	for (int i = 0; i<col; i++)                //行列数互换
//	{
//		for (int j = 0; j<row; j++)
//		{
//			printf("%d ",arr[j][i]);           //坐标互换
//		}
//		printf("\n");
//	}
//	return 0;
//}

//序列中删除指定数字
//#include<stdio.h>
//void Dal(int *arr,int n,int b)
//{
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		if (arr[i] == b)
//		{
//			for (i; i < n; i++)
//			{
//				arr[i] = arr[i + 1];
//			}
//			i = 0;
//			i--;            //覆盖一位后，确保i从0开始，重新查找
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30] = {0};
//	int b = 0;
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &b);
//	Dal(arr,n,b);
//	for (i = 0; i<n ; i++)
//	{
//		if (arr[i]!=0)           //不打印0
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}