#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include"add.h"
//函数声明
//int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum=Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}

//函数定义
//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}

//递归：函数自己调用自己
//简单的递归
//int main()
//{
//	printf("hehe\n");
//	main();
//  无条件递归，死循环，栈溢出
//	return 0;
//}

//eg:
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);//1234
//	print(num);
//	return 0;
//}

#include<string.h>

//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
int my_strlen(char *str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}


int main()
{
	char arr[] = "bit";
	//int l=strlen(arr);
	//printf("%d\n",l);
	int l = my_strlen(arr);
	printf("%d",l);
	return 0;
}