#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include "Stack.h"

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




//注意:若对有序数据进行快排，选择key为
//最大或最小，那么时间复杂度为O(N^2)
//栈帧会溢出
//对此进行优化
//1.随机选key
//2.三数取中(选不是最大也不是最小)
int GetMid(int* a, int left, int right)
{
	//可能会出界
	/*int mid = (left+right) / 2;*/
	int mid = left + (right - left) / 2;
	if (a[left]<a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left]>a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else
	{
		if (a[mid]>a[right])
		{
			return mid;
		}
		else if (a[left]>a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}




//hoare快速排序-单趟
int PartSort1(int* a,int left,int right)
{
	//选出中数交换位置
	int mid = GetMid(a,left,right);
	Swap(&a[mid],&a[left]);

	//key在左边的数变为选的中数
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
void QuickSort1(int* a,int begin,int end)
{
	if (begin>=end)
	{
		return;
	}
	//hoare第一趟找出中间
	int keyi = PartSort1(a,begin,end);
	//挖坑法找
	/*int keyi = PartSort2(a, begin, end);*/
	//前后指针法
	/*int keyi = PartSort3(a, begin, end);*/
	//对两边区间进行排序
	QuickSort1(a,begin,keyi-1);
	QuickSort1(a,keyi+1,end);
}

//挖坑法快速排序-单趟
//左边或右边是一个坑，右边找小填左边，左边找大填右边
int PartSort2(int* a, int left, int right)
{
	int key = a[left];
	int pit = left;
	while (left<right)
	{
		//右边先走，找小
		while (left<right&&a[right]>=key)
		{
			right--;
		}
		//补上坑
		a[pit] = a[right];
		//更新坑
		pit = right;
		//左边后走，找大
		while (left<right&&a[left] <= key)
		{
			left++;
		}
		a[pit] = a[left];
		pit = left;
	}
	a[pit] = key;
	return pit;
}


//前后指针法快指针找小
//key在左
//int PartSort3(int* a, int left, int right)
//{
//	int key = a[left];
//	int prev = left;
//	int cur = left + 1;
//	/*while (cur<=right)
//	{
//		if (a[cur]<key)
//		{
//			prev++;
//			Swap(&a[prev],&a[cur]);
//		}
//		cur++;*/
//	while (cur <= right)
//	{
//		if (a[cur]<=key && a[++prev]!=a[cur])
//		{
//			Swap(&a[prev], &a[cur]);
//		}
//		cur++;
//	}
//	Swap(&a[prev],&a[left]);
//
//	return prev;
//}

//前后指针法快指针找小
//key在右
int PartSort3(int* a, int left, int right)
{
	int key = a[right];
	int prev = left-1;
	int cur = left;
	while (cur < right)
	{
		if (a[cur]<=key && a[++prev] != a[cur])
		{
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}

	Swap(&a[++prev], &a[right]);

	return prev;
}


//小区间优化
//区间很小时，不再使用递归思路排序
//直接使用插入排序对小区间排序，
//减少递归调用

void QuickSort2(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}

	if (end - begin<10)
	{
		InsertSort(a+begin,end-begin+1);
	}
	else
	{
		//hoare第一趟找出中间
		int keyi = PartSort1(a, begin, end);
		//挖坑法找
		/*int keyi = PartSort2(a, begin, end);*/
		//前后指针法
		/*int keyi = PartSort3(a, begin, end);*/
		//对两边区间进行排序
		QuickSort2(a, begin, keyi - 1);
		QuickSort2(a, keyi + 1, end);
	}
}

//快速排序---非递归
//用栈实现
void QuickSort3(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	//将他们的下标入栈
	StackPush(&st,begin);
	StackPush(&st,end);

	while (!StackEmpty(&st))
	{
		//后进先出
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);

		//选一种快排方法
		int keyi = PartSort3(a, left, right);

		//对两边区间进行入栈[left,keyi-1][keyi+1,right]
		if (left<keyi-1)
		{
			StackPush(&st,left);
			StackPush(&st,keyi-1);
		}
		if (keyi+1<right)
		{
			StackPush(&st, keyi+1);
			StackPush(&st, right);
		}

	}

}


void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin>=end)
	{
		return;
	}
	int mid=(begin+end)/2;
	//区间分割
	//不能是[begin,mid-1]和[mid,end],会存在死循环
	_MergeSort(a, begin, mid,tmp);
	_MergeSort(a, mid+1, end, tmp);

	//区间归并
	//printf("[%d %d] [%d %d]\n",begin,mid,mid+1,end);
	int begin1 = begin, end1 = mid;
	int begin2 = mid+1, end2 = end;
	//确定归并时存放数据的起始位置
	int index = begin;
	//写的是继续的条件
	//一次比较区间中数据的大小，一个区间写完后
	//需要将没结束的区间中的剩余数据写入数组中
	while (begin1<=end1 && begin2<=end2)
	{
		if (a[begin1]<a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}
	//没结束的区间直接归并到临时数组中
	while (begin1<=end1)
	{
		tmp[index++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}

	//将排好序的数据拷贝回原空间
	memcpy(a+begin,tmp+begin,(end-begin+1)*sizeof(int));
}

//归并排序
void MergeSort(int* a, int n)
{
	//要用到临时数组
	int* tmp = (int*)malloc(sizeof(int)*n);
	assert(tmp);
	//调用子函数进行区间的分割
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}




//归并排序非递归
//直接控制间隔进行排序归并
//间隔注意不能按2的倍数算，若数组个数为奇数，存在越界问题
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	int gap = 1;

	//通过调整间距gap，进行归并排序
	//分组归并，间距为gap的是一组
	while (gap<n)
	{
		//控制区间边界，对初始间隔进行排序
		for (int i = 0; i<n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			//越界，须纠正下标

			//end1越界，修正
			if (end1 >= n)
				end1 = n - 1;

			//begin2越界，右边区间不存在
			//修改成不存在的区间
			if (begin2 >= n)
			{
				begin2 = 0;
				end2 = -1;
			}

			//end2越界,修正
			if (begin2<n && end2 >= n)
				end2 = n - 1;

			//****条件断点*****
			if (begin1==8&&end1==9
				&&begin2==9&&end2==9)
			{
				int x = 0;
			}

			//直接进行归并
			int index = i;
			//写的是继续的条件
			//一次比较区间中数据的大小，一个区间写完后
			//需要将没结束的区间中的剩余数据写入数组中
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1]<a[begin2])
				{
					tmp[index++] = a[begin1++];
				}
				else
				{
					tmp[index++] = a[begin2++];
				}
			}
			//没结束的区间直接归并到临时数组中
			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}

		}

		//将排好序的数据拷贝回原空间
		memcpy(a, tmp, n*sizeof(int));

		//更新间距gap
		gap *= 2;
	}

		
	free(tmp);
}