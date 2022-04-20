#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

void TestInsertSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	InsertSort(a,sizeof(a)/sizeof(a[0]));
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

void TestBubbleSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	BubbleSort(a, sizeof(a) / sizeof(a[0]));
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

void TestShellSort()
{
	int a[] = { 9, 8, 5, 6, 4, 7, 1, 3 };
	ShellSort(a, sizeof(a) / sizeof(a[0]));
	PrintArr(a, sizeof(a) / sizeof(a[0]));
}

int main()
{
	TestInsertSort();
	TestBubbleSort();
	TestShellSort();
	return 0;
}