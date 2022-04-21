#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

//直接插入
void TestInsertSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	InsertSort(a,sizeof(a)/sizeof(a[0]));
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

//冒泡
void TestBubbleSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	BubbleSort(a, sizeof(a) / sizeof(a[0]));
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

//希尔
void TestShellSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	ShellSort(a, sizeof(a) / sizeof(a[0]));
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

//直接选择排序
//每个数放到固定的对应位置
void TestSelectSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	SelectSort(a, sizeof(a) / sizeof(a[0]));
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

//堆排序
void TsetHeapSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

//快速排序
void TestQuickSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	QuickSort(a,0, sizeof(a) / sizeof(a[0])-1);
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

int main()
{
	//TestInsertSort();
	//TestBubbleSort();
	//TestShellSort();
	//TestSelectSort();
	//TsetHeapSort();
	TestQuickSort();
	return 0;
}