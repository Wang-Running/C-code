#define _CRT_SECURE_NO_WARNINGS
//分析程序死循环  ，有道云笔记
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//模拟实现库函数strlen
//#include <stdio.h>
////#include <string.h>
//#include <assert.h>
////int main()
////{
////	char arr[] =  "abcdef" ;
////	printf("%d\n",strlen(arr));
////	return 0;
////}
//
//int my_strlen(const char* s)
//{
//	assert(s!=NULL);
//	int i = 0;
//	while (*s!= '\0')
//	{
//		i++;
//		s++;
//	}
//	return i;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}

//模拟实现库函数strcpy
//#include <stdio.h>
//#include <assert.h>
////#include <string.h>
////
////int main()
////{
////	char arr1[] = "*********";
////	char arr2[] = "Hello boy";
////	strcpy(arr1,arr2);
////	printf("%s\n",arr1);
////	return 0;
////}
//
//char* my_strcpy(char* a,char* b)
//{
//	assert(a&&b);
//	char* p = a;              //while后地址改变，先保存起始地址
//	while (*a++ = *b++);          //改变地址内容后
//	return p;                    //从起始地址返回
//}
//
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "Hello boy";
//	//my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));     //打印起始地址后的字符串
//	return 0;
//}


//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#include <stdio.h>
#include <assert.h>

void my_array(int* const p,int s)
{
	assert(p!=NULL);
	int*left = p;
	int*right = p + s - 1;
	while (left < right)
	{
		while (*left % 2)        //令left遇偶数停
		{
			left++;
		}
		while ((*right + 1) % 2)              //令right遇奇数停
		{
			right--;
		}
		int temp = 0;
		temp = *right;                  //奇偶交换
		*right = *left;
		*left = temp;
		left++;               //左移
		right--;               //右移
	}
}

int main()
{
	int arr[] = {1,5,6,8,4,7,9,11,13};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_array(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}