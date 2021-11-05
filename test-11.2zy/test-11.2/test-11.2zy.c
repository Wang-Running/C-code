#define _CRT_SECURE_NO_WARNINGS
//递归方式实现打印一个整数的每一位
#include <stdio.h>

int DY(int n)
{
	if (n > 9)
		DY(n / 10);
	printf("%d ",n%10);
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	DY(a);
	return 0;
}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int z = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		z = z*i;
//	}
//	printf("%d",z);
//	return 0;
//}

//#include <stdio.h>
//int JC(int i)
//{
//	if (i > 1)
//		return i*JC(i - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=JC(n);
//	printf("%d",ret);
//	return 0;
//}


//递归和非递归分别实现strlen
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[] = "abc";
//	int z = 0;
//	z = strlen(ch);   //strlen是求字符串长度
//	printf("%d",z);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch[] = "abcdjnfsdj";
//	int count=0;
//	int i = 0;
//	while (ch[i] != '\0')   //下标从0开始
//	{
//		i++;                 //没遇到'\0'不结束下标自增1
//		count++;              //count计数，与下标同步
//	}
//	printf("%d",count);
//	return 0;
//}

//函数形式
//#include <stdio.h>
//int is_strlen(char *ch)
//{
//	int count=0;
//	while (*ch != '\0')   //下标从0开始
//	{
//		ch++;                 //没遇到'\0'不结束下标自增1
//		count++;              //count计数，与下标同步
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdjnfsdj";
//	int len=is_strlen(ch);
//	printf("%d", len);
//	return 0;
//}

//函数递归
//#include <stdio.h>
//int is_strlen(char *ch)
//{
//	if (*ch == '\0')
//		return 0;
//	else
//		return 1 + is_strlen(ch + 1);
//}
//int main()
//{
//	char ch[] = "abcdjnfsdj";
//	int len = is_strlen(ch);
//	printf("%d", len);
//	return 0;
//}




//编写一个函数 reverse_string(char * string)（递归实现）

//实现：将参数字符串中的字符反向排列，不是逆序打印。

//要求：不能使用C函数库中的字符串操作函数。
//非递归
//#include <stdio.h>
//void reverse_string(char * arr)
//{
//	char *left = arr;
//	char *right = arr+strlen(arr) - 1;
//	while (left < right)
//	{
//		char temp = 0;
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s",arr);
//	return 0;
//}


//递归写法
#include <stdio.h>
void reverse_string(char * arr)
{
	char left = *arr;
	char *right = arr + strlen(arr) - 1;
	char temp = *arr;
	*arr = *right;
	*right = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	*right = temp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//输入：1729，输出：19
//#include <stdio.h>
//int DigitSum(unsigned n)
//{
//	int ret = 0;
//	if (n > 1)
//	{
//		ret = n % 10;
//		return ret + DigitSum(n / 10);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	unsigned n = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	sum=DigitSum(n);
//	printf("%d",sum);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。
//#include <stdio.h>
//#include <math.h>
//int CF(int n,int k)
//{
//	if (k > 1)
//		return n*pow(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d %d",&n,&k);
//	sum=CF(n,k);
//	printf("%d",sum);
//	return 0;
//}

//递归和非递归分别实现求第n个斐波那契数

//例如：

//输入：5  输出：5

//输入：10， 输出：55

//输入：2， 输出：1

//1 1 2 3 5 8 13 21 34 55......

//非递归
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	if (i < 3)
//		printf("1");
//	else
//
//	return 0;
//}

//递归

//#include <stdio.h>
//int fib(n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d",&i);
//	ret = fib(i);
//	printf("%d",ret);
//	return 0;
//}

//函数
#include <stdio.h>
int fib(n)
{
	int a = 1;
	int b = 1;
	int c = 1;
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
	int i = 0;
	int ret = 0;
	scanf("%d", &i);
	ret = fib(i);
	printf("%d", ret);
	return 0;
}