#define _CRT_SECURE_NO_WARNINGS
//从大到小输出
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//#include <stdio.h>
//int main()
//{
//	int i = 100;
//	while (i > 0)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i--;
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	int r = 0;
//	int n = 0;
//	scanf("%d %d",&a,&b);
//	if (b < a)
//	{
//		temp = b;
//		b = a;
//		a = temp;      //排大小
//	}
//	while (a != 0)     //判断余数是否为0
//	{
//		r = b%a;      //余数，辗转相除法
//		n = a;
//		a = r; 
//	}
//	printf("%d\n",n);
//	return 0;
//}


//打印1000年到2000年之间的闰年
//1.能被4整除且不能被100整除为闰年
//2.能被400整除为闰年
//#include <stdio.h>
//int main()
//{
//	int i = 1000;
//	while (i <= 2000)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//写一个代码：打印100~200之间的素数
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;      //如果被整除，不是素数。 
		}
		if (j >= i)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}
