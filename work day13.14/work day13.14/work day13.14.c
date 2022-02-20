#define _CRT_SECURE_NO_WARNINGS

//day 13


// HJ37 统计每个月兔子的总数
//有一只兔子，从出生后第3个月起每个月都生一只兔子，
//小兔子长到第三个月后每个月又生一只兔子，假如兔子都不死，
//问第n个月的兔子总数为多少？

//斐波那契数列
//#include <stdio.h>
//
//int fb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fb(n - 1) + fb(n - 2);
//}
//
//int main()
//{
//	int m = 0;
//	while (scanf("%d", &m) != EOF)
//	{
//		fb(m);
//		printf("%d\n", fb(m));
//	}
//	return 0;
//}

// ZJ16 数列的和
//数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double m, n;
//	while (~scanf("%lf %lf", &m, &n))
//	{
//		double sum = 0;
//		for (int i = 0; i<n; i++)
//		{
//			sum += m;
//			m = sqrt(m);
//		}
//		printf("%.2f\n", sum);
//	}
//	return 0;
//}

//day 14

//NC61 两数之和

/**
* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
*
*
* @param numbers int整型一维数组
* @param numbersLen int numbers数组长度
* @param target int整型
* @return int整型一维数组
* @return int* returnSize 返回数组行数
*
* C语言声明定义全局变量请加上static，防止重复定义
*/
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
//	// write code here
//	int* ret = (int*)malloc(2 * sizeof(int));
//	*returnSize = 2;
//	for (int i = 0; i<numbersLen; i++)
//	{
//		if (numbers[i] > target)
//			continue;
//		for (int j = i + 1; j<numbersLen; j++)
//		{
//			if (target - numbers[i] == numbers[j])
//			{
//				ret[0] = i + 1;
//				ret[1] = j + 1;
//				return ret;
//			}
//		}
//	}
//	*returnSize = 0;
//	return 0;
//}