#define _CRT_SECURE_NO_WARNINGS
//模拟实现strncat

//模拟实现strncpy

//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//分组：
//只出现一次的两个数字分别分到一个组
//每个组都满足一个数字出现一次，其他数字都成对出现
#include <stdio.h>
int main()
{
	int ret = 0;
	int arr[] = { 1, 2, 3, 4, 5, 1,2,3,4,6 };
	//1.先异或在一起
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0;i<sz;i++)
	{
		ret ^= arr[i];
	}
	//2.计算ret的二进制中第几位是一
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret>>i)&1)==1)
		{
			pos = i;
			break;
		}
	}
	//按照pos位为0/1来分组
	int n = 0;
	int m = 0;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			n ^= arr[i];
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 0)
		{
			m ^= arr[i];
		}
	}
	printf("%d %d\n",m,n);
	return 0;
}