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


void Swap(int* pa, int* pb)
{
	int num = *pa;
	*pa = *pb;
	*pb = num;
}

// 堆排序
void AdjustDown(int* a, int root, int n)
{
	int child = root * 2 + 1;
	while (child < n)
	{
		if (child + 1 <n && a[child + 1] < a[child])
		{
			child++;
		}
		if (a[child] < a[root])
		{
			Swap(&a[child], &a[root]);
			root = child;
			child = root * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
//堆排序优化->直接对数组建堆
//时间复杂度O(N*logN)空间复杂度O(1)
void HeapSort(int* a, int n)
{
	//向上调整建堆
	//分析后是件复杂度为O(N*logN)
	//for (int i = 1;i<size;i++)
	//{
	//	up(a,i);
	//}
	//向下调整建堆
	//分析后是件复杂度为O(N+logN)=O(N)

	//总结，一般取向下调整建堆效率更高
	//升序建大堆
	//降序建小堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, i, n);
	}
	//最后一个数据的下标
	size_t end = n - 1;
	while (end>0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, 0, end);
		end--;
	}
}



// 冒泡排序
//升序为例
void BubbleSort(int* a, int n)
{
	//大循环
	for (int i = 0;i<n-1;i++)
	{
		//优化，若无交换，有序，直接结束比较
		int flag = 0;
		//单趟循环
		for (int j = 0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				flag = 1;
				Swap(&a[j],&a[j+1]);
			}
		}
		if (flag==0)
		{
			break;
		}
	}
}
//时间复杂度O(N^2)
//最好O(N)

//希尔排序-优化的插入排序
//1.预排序  接近有序
//2.直接插入排序

//三层循环,预排序
//void ShellSort(int* a, int n)
//{
//	int gap = 3;
//	//控制gap组
//	for (int j = 0;j<gap;j++)
//	{
//		//控制间隔为gap的一组数据
//		for (int i = j; i<n - gap; i += gap)
//		{
//			int end = i;
//			int num = a[end + gap];
//			while (end >= 0)
//			{
//				if (num<a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = num;
//		}
//	}
//
//}

//两层循环，预排序
void ShellSort(int* a, int n)
{
	//gap不是固定的值
	//int gap = 3;
	int gap = n;
	//一层循环控制gap,大于1预排序
	//gap等于1时直接插入排序
	while (gap>1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i<n - gap; i++)
		{
			int end = i;
			int num = a[end + gap];
			while (end >= 0)
			{
				if (num<a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = num;
		}
	}
	//不用调用插入排序
	//InsertSort(a, n);
}


//直接选择排序
//每个数放到固定的对应位置
void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;
	while (left<right)
	{
		int mini = left;
		int maxi = left;
		//遍历一次选出最大数和最小数下标
		for (int i = left;i<=right;i++)
		{
			if (a[i]<a[mini])
			{
				mini = i;
			}
			if (a[i]>a[maxi])
			{
				maxi = i;
			}
		}
		//将最大值和最小值放在最左边和最右边
		//要注意当left=maxi时，值会被掉包

		Swap(&a[left],&a[mini]);

		//防掉包，如果left和maxi重叠，修正maxi
		if (left==maxi)
		{
			maxi = mini;
		}

		Swap(&a[right], &a[maxi]);
		//更新下标
		left++;
		right--;
	}
}

//hoare快速排序-单趟
int PartSort(int* a,int left,int right)
{
	int keyi = left;
	while (left<right)
	{
		//=是防止死循环
		//left<right是防止越界

		//右边走找小
		while (left<right&&a[right]>=a[keyi])
		{
			right--;
		}
		//左边走找大
		while (left<right&&a[left] <= a[keyi])
		{
			left++;
		}
		//交换左右
		Swap(&a[left],&a[right]);
	}

	//相等结束，交换相遇位置和keyi上的值
	Swap(&a[keyi],&a[right]);
	return left;
}

//快速排序-整体排序
void QuickSort(int* a,int begin,int end)
{
	if (begin>=end)
	{
		return;
	}
	//第一趟找出中间
	int keyi = PartSort(a,begin,end);
	//对两边区间进行排序
	QuickSort(a,begin,keyi-1);
	QuickSort(a,keyi+1,end);
}