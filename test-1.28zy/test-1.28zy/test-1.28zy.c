#define _CRT_SECURE_NO_WARNINGS
//模拟实现strncat
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//char* my_strncat(char* dest, const char* src, int n, int srclen)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while (*dest)
//	{
//		dest++;
//	}
//
//	if (n > srclen)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return ret;
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			*dest++ = *src++;
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	char arr1[30] = "hello";
//	char arr2[] = "word";
//	int srclen = strlen(arr2);
//	printf("%s\n",my_strncat(arr1,arr2,n,srclen));
//	return 0;
//}

//模拟strcat
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//保留起始地址，方便找回打印
//	assert(dest && src);
//	//1. 找目标空间中的\0，打印的起点
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 追加内容到目标空间
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";//注意初始化方式，必须要包含'\0'
//	char arr2[] = "world";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

//模拟实现strncpy
#include <stdio.h>
#include <assert.h>
char* my_strncpy(char* dest, const char* src,int n)
{
	char* ret = dest;
	//保留起始地址
	assert(dest && src);
	for (int i = 0;i<n;i++)
	{
		*dest++ = *src++;
	}
}

int main()
{
	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
	char arr2[20] = "xxxxxxxxxxxx";
	int n = 0;
	scanf("%d",&n);
	my_strncpy(arr2, arr1,n);
	printf("%s\n", arr2);
	return 0;
}

//模拟strcpy
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//保留起始地址
//	assert(dest && src);
//	while (*dest++ = *src++)  //这里不打印'\0'之后的
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	char arr2[20] = "xxxxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//分组：
//只出现一次的两个数字分别分到一个组
//每个组都满足一个数字出现一次，其他数字都成对出现
//#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 1,2,3,4,6 };
//	//1.先异或在一起
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i<sz;i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.计算ret的二进制中第几位是一
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret>>i)&1)==1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//按照pos位为0/1来分组
//	int n = 0;
//	int m = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			n ^= arr[i];
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 0)
//		{
//			m ^= arr[i];
//		}
//	}
//	printf("%d %d\n",m,n);
//	return 0;
//}