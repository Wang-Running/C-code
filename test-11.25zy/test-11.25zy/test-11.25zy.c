#define _CRT_SECURE_NO_WARNINGS

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