#define _CRT_SECURE_NO_WARNINGS
//冒泡排序
#include <stdio.h>

//void bubble_sort(int *arr, int sz)
//{
//	int n = 0;
//	for (n = 0; n < sz - 1; n++) //大循环九趟
//	{
//		int j = 0;
//		int flag = 1;//如果有序
//		for (j = 0; j<sz - 1 - n; j++)
//		{
//			if (arr[j]> arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) //则跳出循环
//			break;
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(&arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[i]=%d\n", arr[i]);
//	}
//	return 0;
//}


//创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//自己设计以上函数的参数，返回值。

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}

//void init(int arr[], int sz, int set)
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		arr[j] = set;
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,8,7,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int set = 0;
//	//print(arr,sz);
//	//reverse(arr,sz);
//	init(arr,sz,set);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[i]=%d\n", arr[i]);
//	}
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;
	printf("输入10个数:");
	for (i=0;i<10;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("输入10个数:");
	for (i = 0; i<10; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < 10; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		printf("arr1[i]=%d ", arr1[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("arr2[i]=%d\n", arr2[i]);
	}
	return 0;
}

