#define _CRT_SECURE_NO_WARNINGS
// HJ10 字符个数统计
//输入一行没有空格的字符串。
//输出 输入字符串 中范围在(0~127，包括0和127)字符的种数。
//示例：
//输入：abc 输入：aaa
//输出：3 输出：1


//错误
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[500] = { 0 };
//	scanf("%s", arr);
//	int ret = strlen(arr);
//	int count = 0;
//	for (int i = 0;i<ret;i++)
//	{
//		for (int j = 0;j<ret;j++)
//		{
//			if (arr[j] != arr[j + 1] && arr[i] != arr[j+1])  //相邻比较，每一个和其他比较。不相同加一
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d",count);
//	return 0;
//}

//先排序，再去重
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(void* e1, void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
int main()
{
	char arr[500] = { 0 };
	int i = 0;
	int j = 0;
	scanf("%s", arr);
	int len = strlen(arr);
	//排序
	qsort(arr, len, 1, cmp);
	//去重
	for (i = 0; i<len - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			for (j = 0; j<len - 1; j++)    //重复则向前覆盖
			{
				arr[j] = arr[j + 1];
			}
			i--;    //i自减后++，在原位置上重新比较
			len--;  //覆盖后长度减一
		}
	}
	printf("%d", len);
	return 0;
}