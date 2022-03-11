#define _CRT_SECURE_NO_WARNINGS
#include "test-SeqList.h"

//打印
void SLPrintf(SL* p)
{
	assert(p);
	for (int i = 0;i<p->size;i++)
	{
		printf("%d ",p->a[i]);
	}
	printf("\n");
}


//初始化
void SLInit(SL* p)
{
	assert(p);
	p->a = NULL;
	p->size = 0;
	p->capacity = 0;
}

//检查空间
void SLcheckCapacity(SL* p)
{
	assert(p);
	//检查是否需要扩容
	if (p->size == p->capacity)
	{
		size_t newCapacity = p->capacity == 0 ? 4 : p->capacity * 2;
		SLDataType* tmp = realloc(p->a, sizeof(SLDataType)*newCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			p->a = tmp;
			p->capacity = newCapacity;
		}
	}
}

//尾插
void SLPushBack(SL* p, SLDataType x)
{
	assert(p);
	//检查空间,是否扩容
	SLcheckCapacity(p);

	//插入
	p->a[p->size] = x;
	p->size++;
	SLPrintf(p);
}

//尾删
void SLPopBack(SL* p)
{
	assert(p);
	//size不能一直--
	if (p->size > 0)
	{
		p->size--;
	}
	SLPrintf(p);
}

//头插
void SLPushFront(SL* p, SLDataType x)
{
	assert(p);
	SLcheckCapacity(p);
	for (int i = p->size;i>0;i--)
	{
		p->a[i] = p->a[i-1];
	}
	p->a[0] = x;
	p->size++;
	SLPrintf(p);
}

//头删
void SLPopFront(SL* p)
{
	assert(p);
	if (p->size>0)
	{
		for (int j = 0; j<p->size - 1; j++)
		{
			p->a[j] = p->a[j + 1];
		}
	}
	p->size--;
	SLPrintf(p);
}

//在固定位置插入,pos为下标
void SLInsert(SL* p, size_t pos, SLDataType x)
{
	assert(p);
	//注意要判断pos的大小
	if (pos>p->size)
	{
		printf("pos 越界:%d\n",pos);
		return;
	}
	SLcheckCapacity(p);
	for (int i = p->size;i>pos;i--)
	{
		p->a[i] = p->a[i - 1];
	}
	p->a[pos] = x;
	p->size++;
	SLPrintf(p);
}

//在固定位置删除,pos为下标
void SLErase(SL* p, size_t pos)
{
	assert(p);
	if (pos<p->size)
	{
		for (int j = (int)pos; j<p->size-1; j++)
		{
			p->a[j] = p->a[j + 1];
		}
	}
	p->size--;
	SLPrintf(p);
}

//查找
int SLFind(SL* p,SLDataType x)
{
	assert(p);
	SLPrintf(p);
	for (int i = 0;i<p->size;i++)
	{
		if (p->a[i]==x)
		{
			return i;
		}
	}
	return -1;
}

//销毁
void SLDestory(SL* p)
{
	assert(p);
	free(p->a);
	p->a = NULL;
	p->capacity = p->size = 0;
}