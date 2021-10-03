#define _CRT_SECURE_NO_WARNINGS
//分支语句
//if
//switch
//循环语句
//while
//for
//do while

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		//if else 多条语句时应使用大括号
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("老不死\n");
//
//	}
	//int age = 15;
	//if (age < 18)
	//	printf("未成年");
	//else
	//	printf("成年");
	//if (age < 18)
	//	printf("未成年\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (1 == a % 2)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i%2==1)
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//switch (整型表达式)
//	//case 整型常量表达式：
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四"); 
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//
//
//	}
	//scanf("%d",&day);
	//if (1 == day)
	//	printf("星期一");
	//else if (2 == day)
	//	printf("星期二");
	//else if (3 == day)
	//	printf("星期三");
	//else if (4 == day)
	//	printf("星期四");

//	return 0;
//}

#include<stdio.h>
int main()
{
	char ch=0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
