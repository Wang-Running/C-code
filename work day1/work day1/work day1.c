#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//	int x = 5, y = 7;
//	void swap()
//	{
//		int z;
//		z = x;
//		x = y;
//		y = z;
//	}
//		int main()
//	{
//			int x = 3, y = 8;
//			swap();
//			printf("%d,%d\n",x, y);
//			return 0;
//		}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int y[5 + 3] = {1,2,3,4,5,6,7,8,};
//	char c1[] = { '1', '2', '3', '4', '5' };
//	char c2[] = { '\x10', '\xa', '\8' };
//	double x[5] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f\n",x[i]);
//	}
//	return 0; 
//}

//#define INT_PTR int*
//#include <stdio.h>
//int main()
//{
//	typedef int* int_ptr;
//	INT_PTR a, b;
//	int_ptr c, d;
//	return 0;
//}

//JZ17 打印从1到最大的n位数
//输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
//1. 用返回一个整数列表来代替打印
//2. n 为正整数
//static int ans[100010] = { 0 };
//int* printNumbers(int n, int* returnSize) {
//	// write code here
//	int max = pow(10, n);
//	int i = 0;
//	for (i = 0; i<max; i++)
//	{
//		ans[i] = i + 1;
//	}
//	*returnSize = (i - 1);
//	return ans;
//}

//HJ73 计算日期到天数转换
//输入描述：
//输入一行，每行空格分割，分别是年，月，日
//输出描述：
//输出是这一年的第几天
//#include <stdio.h>
//int main()
//{
//	int day[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 30 };
//	int y, m, d;
//	int days = 0;
//	scanf("%d %d %2d", &y, &m, &d);
//	if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
//	{
//		int i = 0;
//		for (i = 0; i<m - 1; i++)
//		{
//			days += day[i];
//		}
//		days += d;
//	}
//	else
//	{
//		int i;
//		if (m<2)
//		{
//			for (i = 0; i<m - 1; i++)
//			{
//				days += day[i];
//			}
//			days += d;
//		}
//		else
//		{
//			for (i = 0; i<m - 1; i++)
//			{
//				days += day[i];
//			}
//			days += (d - 1);
//		}
//	}
//	printf("%d", days);
//	return 0;
//}