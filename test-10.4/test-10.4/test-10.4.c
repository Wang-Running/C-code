#define _CRT_SECURE_NO_WARNINGS
//strcpy  string-copy字符串拷贝
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

//memset
//memory - 内存 set - 设置
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	return 0;
//}

//自定义函数

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max=%d\n",max);
//	return 0;
//}

//#include <stdio.h>
//Swap1不能完成任务
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的

//void Swap1(int x,int y)
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//}
//
//void Swap2(int *pa, int *pb)
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tem = 0;
//	printf("a=%d b=%d\n",a,b);
//	//Swap1(a, b);
//	//调用函数
//	Swap2(&a,&b);
//	//tem = a;
//	//a = b;
//	//b = tem;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//Swap2()要用到以下：
//int main()
//{
//	int a = 10;
//	int *pa=&a;//pa是指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n",a);
//	return 0;
//}
//是素数返回1，不是素数返回0

//1.写一个函数判断一个数是不是素数

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1) //判断i是否为素数
//		printf("%d ", i);
//	}
//	return 0;
//}

//2.写一个函数判断一年是不是闰年

//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if(is_leap_year(year)==1)
//		printf("%d ",year);
//	}
//}

//3.写一个函数，实现一个整型有序数组的二分查找

//#include<stdio.h>
//                 //本质上arr是一个指针
//int binary_search(int arr[],int k,int sz)
//{
//
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;           //arr是首元素地址
//	int ret=binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
//	}
//	return 0;
//}

//4.写一个函数，每调用一次，就会将num的值增加一
//#include<stdio.h>
//void Add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//num=1
//	printf("%d\n",num);
//	Add(&num);//num=2
//	printf("%d\n", num);
//	Add(&num);//num=3
//	printf("%d\n", num);
//	Add(&num);//num=4
//	printf("%d\n", num);
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("%d",printf("%d",printf("%d",43)));//4321
	return 0;
}