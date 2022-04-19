#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

void PrintArr(int* a,int n)
{
	for (int i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}


//插入排序:有一个有序区间，插入一个数，依然保证它有序
//保证区间有序，从第一个数开始向后排序
//升序为例
void InsertSort(int* a, int n)
{
	for (int i = 0;i<n-1;i++)
	{
		//end为区间下标，从0开始
		int end=i;
		//先定义一个变量，保存要插入的值，方便覆盖
		int num = a[end + 1];
		//一趟排序
		while (end >= 0)
		{
			//如果插入的值比前一个值小，区间从end开始向后覆盖
			if (num<a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			//否则，空位end+1=要插入的值
			else
			{
				//考虑到边界情况，这步可直接省略
				/*a[end+1] = num;*/
				break;
			}
		}
		//边界情况:若插入值最小，end小于0，while结束，插入值未放入数组中
		//须手动放入
		a[end + 1] = num;
	}
	
}
//时间复杂度最坏O(N^2)，最好O(N)

// 堆排序
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);


void Swap(int* pa,int* pb)
{
	int num = *pa;
	*pa = *pb;
	*pb = num;
}

// 冒泡排序
//升序为例
void BubbleSort(int* a, int n)
{
	//大循环
	for (int i = 0;i<n-1;i++)
	{
		//单趟循环
		for (int j = 0;j<n-i-1;j++)
		{
			if (a[j]<a[j+1])
			{
				Swap(&a[j],&a[j+1]);
			}
		}
	}
}