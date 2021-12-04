#define _CRT_SECURE_NO_WARNINGS


//BC53  计算一元二次方程
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c, x1, x2;
//
//	while (~scanf("%f%f%f", &a, &b, &c))
//	{
//		if (a)
//		{
//			float delta = b * b - 4 * a * c;
//
//			if (delta == 0)
//			{
//				x1 = (-b + sqrt(delta)) / (2 * a);
//				printf("x1=x2=%.2f\n", x1);
//			}
//
//			else if (delta > 0)
//			{
//				x1 = (-b - sqrt(delta)) / (2 * a);
//				x2 = (-b + sqrt(delta)) / (2 * a);
//				printf("x1=%.2f;x2=%.2f\n", x1, x2);
//			}
//
//			else if (delta < 0)
//			{
//				x1 = -b / (2 * a);
//				x2 = sqrt(-delta) / (2.0 * a);
//				printf("x1=%.2f-%.2fi;", x1, x2);
//				printf("x2=%.2f+%.2fi\n", x1, x2);
//			}
//		}
//		else
//			printf("Not quadratic equation\n");
//	}
//	return 0;
//}

//BC54
//首先要清楚月份天数的分类
//每年的4，6，9，11月的天数都是30天
//每年的1，3，5，7，8，10，12月都是31天
//然后计算2月的天数
//2月的天数有两种，闰年为29天，非闰年28天

//BC54
//首先要清楚月份天数的分类
//每年的4，6，9，11月的天数都是30天
//每年的1，3，5，7，8，10，12月都是31天
//然后计算2月的天数
//2月的天数有两种，闰年为29天，非闰年28天

//#include <stdio.h>
//
//int main()
//{
//	int year, month, day;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		switch (month)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			printf("31\n");
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("30\n");
//			break;
//		default:
//			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			{
//				printf("29\n");
//			}
//			else
//			{
//				printf("28\n");
//			}
//		}
//	}
//	return 0;
//}

//布尔类型
//#include <stdio.h>
////#include <stdbool.h>
//int main()
//{
//	unsigned int num = -10;
//	printf("%u\n",num);
//	return 0;
//}