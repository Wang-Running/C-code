#define _CRT_SECURE_NO_WARNINGS

//day 15


//#include <stdio.h>

//int fun(int n)
//{
//	int prod = 1, i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		prod *= i;
//	}
//		return prod;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=fun(n);
//	printf("%d\n",ret);
//	return 0;
//}


// KS33 寻找奇数

//输入描述：第一行：一个整数n，表示序列的长度。第二行：n个正整数ai，两个数中间以空格隔开。
//输出描述：一个数，即在序列中唯一出现奇数次的数值。

//输入：5
//2 1 2 3 1
//输出：3

//用异或

//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	scanf("%ld", &n);
//	long long x = 0;
//	long long max = 0;
//	while (~scanf("%ld", &x))
//	{
//		max ^= x;      //输入直接异或，不考虑数组
//	}
//	printf("%ld\n", max);
//	return 0;
//}


//NC107 寻找峰值

/**
* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
*
*
* @param nums int整型一维数组
* @param numsLen int nums数组长度
* @return int整型
*
* C语言声明定义全局变量请加上static，防止重复定义
*/
//int findPeakElement(int* nums, int numsLen) {
//	// write code here
//	int left = 0, right = numsLen - 1, mid;
//	while (left<right)
//	{
//		mid = left + (right - left) / 2;
//		if (nums[mid]<nums[mid + 1])
//			left = mid + 1;
//		else
//			right = mid;
//	}
//	return left;
//}


//day 16

// WY49 数对
//#include <stdio.h>
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int count = 0;
//	for (int x = 1; x <= n; x++)
//	{
//		for (int y = 1; y <= n; y++)
//		{
//			if ((x % y) >= k)
//				count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	long n, k;
//	scanf("%d %d", &n, &k);
//	long count = 0;
//	for (long x = 1; x <= n; x++)
//	{
//		for (long y = 1; y <= n; y++)
//		{
//			if ((x%y) >= k)
//				count++;
//		}
//	}
//	printf("%ld\n", count);
//	return 0;
//}


// HJ46 截取字符串
//输入一个字符串和一个整数 k ，截取字符串的前k个字符并输出

//输入：
//abABCcDEF
//6
//输出：
//abABCc

//#include <stdio.h>
//int main()
//{
//	char arr[101] = { 0 };
//	while (~scanf("%s", arr))
//	{
//		int n;
//		scanf("%d", &n);
//		arr[n] = '\0';
//		printf("%s\n", arr);
//	}
//	return 0;
//}