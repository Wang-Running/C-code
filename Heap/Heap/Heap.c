#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"

void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->capacity = php->size = 0;
}

void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}
void swap(HPDataType* pa, HPDataType* pb)
{
	HPDataType* tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//向上调整
void Up(HPDataType* a,size_t child)
{
	size_t parent = (child - 1) / 2;
	while (child>0)
	{
		if (a[child] < a[parent])
		{
			//HPDataType data = php->a[parent];
			//php->a[parent] = php->a[child];
			//php->a[child] = data;
			swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	//插入元素
	if (php->a==php->capacity)
	{
		size_t newcapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		HPDataType* tmp = (HPDataType*)realloc(php->a,sizeof(HPDataType)*newcapacity);
		assert(tmp);
		php->a = tmp;
		php->capacity = newcapacity;
	}
	php->a[php->size] = x;
	php->size++;
	//保证是堆的结构
	//向上调整
	size_t child = php->size - 1;
	//size_t parent = (child-1) / 2;
	//while (child>0)
	//{
	//	if (php->a[child] < php->a[parent])
	//	{
	//		//HPDataType data = php->a[parent];
	//		//php->a[parent] = php->a[child];
	//		//php->a[child] = data;
	//		swap(&php->a[child], &php->a[parent]);
	//		child = parent;
	//		parent = (child - 1) / 2;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}

	Up(php->a,child);
}
void HeapPrint(HP* php)
{
	assert(php);
	for (size_t i=0;i<php->size;i++)
	{
		printf("%d ",php->a[i]);
	}
	printf("\n");
}

void Down(HPDataType* a,size_t parent,size_t size)
{
	size_t lchild = parent*2 + 1;
	size_t rchild = parent*2 + 2;
	while (rchild<size)
	{
		if (a[lchild]<a[rchild])
		{
			if (a[parent] > a[lchild])
			{
				swap(&a[parent], &a[lchild]);
				parent = lchild;
				lchild = parent*2 + 1;
				rchild = parent*2 + 2;
			}
		}
		else if (a[lchild]>a[rchild])
		{
			if (a[parent] > a[rchild])
			{
				swap(&a[parent], &a[rchild]);
				parent = rchild;
				lchild = parent*2 + 1;
				rchild = parent*2+ 2;
			}
		}
		else
		{
			break;
		}
	}
}

//删除堆顶数据
//互换堆顶和末尾数据，向下调整
void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	size_t parent = 0;
	swap(&php->a[0],&php->a[php->size-1]);
	php->size--;
	Down(php->a,parent,php->size);
}


bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
size_t HeapSize(HP* php)
{
	assert(php);
	return php->size;
}
HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size>0);
	return php->a[0];
}