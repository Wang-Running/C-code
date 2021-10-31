#define _CRT_SECURE_NO_WARNINGS
//判断素数
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。

//#include <stdio.h>
//#include <math.h>
//int is_prime(int i)
//{
//	int n = 0;
//	for (n = 2; n <=sqrt(i); n++)
//	{
//		if (i % n == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}

//实现函数判断year是不是润年。
//#include <stdio.h>
//int is_leap_y(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((is_leap_y(y)) == 1)
//			printf("%d ",y);
//	}
//	return 0;
//}

//实现一个函数来交换两个整数的内容。
//#include <stdio.h>
//void swap(int* x, int* y)    //无返回值传址调用
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	swap(&a, &b);
//	printf("%d %d",a,b);
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
#include <stdio.h>
//int L = 0;
//for (L = 1; L <= H; L++)
//{
//	printf("%d*%d=%2d ", L, H, L*H);
//}
void BG(int* n)
{
	int H = 0;
	for (H = 1; H < *n + 1; H++)
	{
		int L = 0;
		for (L = 1; L <= H; L++)
		{
			printf("%d*%d=%2d ", L, H, L*H);
		}
		printf("\n");
	}
}

int main()
{
	int a = 0;
	scanf("%d",&a);
	BG(&a);
	return 0;
}