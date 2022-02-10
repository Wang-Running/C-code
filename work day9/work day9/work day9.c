#define _CRT_SECURE_NO_WARNINGS
//leetcode 题号：728. 自除数
//遍历数组中的每个元素，判断是否是自除数即可，如果是则加入到返回数组中
//int* selfDividingNumbers(int left, int right, int* returnSize)
//{
//	int *ret = (int *)calloc(1000, sizeof(int));//动态申请足够大的空间用于存放返回的自除数
//	*returnSize = 0;
//	for (int i = left; i <= right; i++) 
//	{
//		int num = i;
//		while (num) 
//		{
//			int remainder = num % 10;//计算余数
//			if (remainder == 0 || (i % remainder) != 0) 
//			{//判断i自身与余数取模是否为0
//				break;
//			}
//			num /= 10;
//		}
//		//如果num==0表示通过了每一位数的取模判断，则i就是自除数
//		if (num == 0) 
//			ret[(*returnSize)++] = i;
//	}
//	return ret;
//}


//day 10


//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2, m = 0, n = 0, k;
//	k = (n = b<a) && (m = a);
//	printf("%d,%d\n", k, m);
//	return 0;
//}
//(n=b<a)&&(m=a)转换成(0)&&(m=a)，&&运算前表达式为
//假，则后面的括号(m = a)不运算，m值还是0

//牛客网题号： JZ65 不用加减乘除做加法
//写一个函数，求两个整数之和，要求在函数体内不得使用 + 、 - 、*、 / 四则运算符号。
//数据范围：两个数都满足 - 10 \le n \le 1000−10≤n≤1000
//进阶：空间复杂度 O(1)O(1)，时间复杂度 O(1)O(1)
#include <stdio.h>
int Add(int num1, int num2)
{
	while (num2 != 0)
	{
		int a = (num1&num2) << 1;
		num1 = num1^num2;
		num2 = a;
	}
	return num1;
}
int main()
{
	int num1, num2;
	scanf("%d %d",&num1,&num2);
	int sum=Add(num1,num2);
	printf("%d\n",sum);
	return 0;
}