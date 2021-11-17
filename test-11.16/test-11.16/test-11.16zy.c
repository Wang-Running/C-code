#define _CRT_SECURE_NO_WARNINGS
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//arr是一个整形一维数组。
//#include <stdio.h>
//
//void my_printf(int* arr,int x)
//{
//	int i = 0;
//	for (i=0;i<x;i++)
//	{
//		printf("%d ",*(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_printf(arr,sz);
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容。
//将一个字符串str的内容颠倒过来，并输出。
//#include <stdio.h>
//#include <string.h>
//
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = (str + strlen(str) - 1);
//	while (left < right)
//	{
//		char n = *left;
//		*left = *right;
//		*right = n;
//		left++;
//		right--;
//	}
//
//}

//int main()
//{
//	int i = 0;
//	char str[10000] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		for (i = 0; i < strlen(str); i++)
//		{
//			printf("%c", str[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char str[10000] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n",str);
//	}
//	return 0;
//}


//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

//例如：2 + 22 + 222 + 2222 + 22222

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int num = 0;
//	int i= 0;
//	int n = 0;
//	scanf("%d %d",&n,&a);
//	for (i=0;i<n;i++)
//	{
//		num = num * 10 + a;
//		sum += num;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include <stdio.h>
#include <math.h>

int Sum(int x, int y)
{
	int k = 0;
	int num = 0;
	int sum = 0;
	for (k=0;k<y-1;k++)             //因为剩最大位%10为0，所以y-1，留下最大一位，出循环后单独算
	{
		num = pow(x % 10, y);
		sum += num;
		x/=10;
	}
	sum += pow(x, y);          //单独加上最大位的y次方
	return sum;
}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;                //位数
		int j = i;                 //经过while后i改变，i未变前赋值给j,代替原值i进行后面的计算
		int z = i;
		while (z / 10 != 0)          //这里刚开始直接用i进行运算  死循环
		{
			n++;
			z=z / 10;                //用i运算的话，当i=10时 i=i/10 直接等于1 ，死循环    ，所以用变量z代替i
		}
		if (j == Sum(j, n))        //判断
			printf("%d ",j);
	}
	return 0;
}