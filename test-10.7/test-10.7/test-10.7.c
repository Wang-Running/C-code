#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *=i;
//	}
//	return ret;
//}
//
////递归
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac2(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;//储存n的阶乘
//	scanf("%d",&n);
//	//ret=Fac1(n);//n的阶乘循环
//	ret = Fac2(n);
//	printf("%d\n",ret);
//	return 0;
//}

//斐波那契数
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return (Fib(n - 1) + Fib(n - 2));
//	}
//}
//运算量过大

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("%d\n",ret);
	//printf("%d",count);
	return 0;
}