#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}
//  \\ 表示字符'\'，\123表示字符'{'，\t表示制表符，这些都是一个字符



//#include <stdio.h>
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	printf("%d\n", NUM);    //8,宏只是替换，替换后NUM的样子是(2+1+1)*2+1/2，计算得8
//	return 0;
//}

//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);   //  7  静态局部变量i
//}

//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int m, sum, i;
//	while (scanf("%d", &m) != EOF)
//	{
//		sum = pow(m, 3);
//		for (i = 0; i<10000; i++)
//		{
//			//if (i == m*m + 1 - m)
//			if (i == (sum-m*m+m)/m)     //求首项奇数
//			{
//				int j = 0;
//				for (j = 0; j<m - 1; j++)
//				{
//					printf("%d+", i + 2 * j);
//				}
//				printf("%d\n", i + 2 * j);
//			}
//		}
//	}
//	return 0;
//}

//等差数列 2，5，8，11，14。。。。
//（从 2 开始的 3 为公差的等差数列）
//输出求等差数列前n项和
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n)!=EOF)
//	{
//		int d = 3;
//		int a1 = 2;
//		int sum = n*a1 + (n*(n - 1)*d) / 2;
//		printf("%d\n",sum);
//	}
//	return 0;
//}


