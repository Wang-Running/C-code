#define _CRT_SECURE_NO_WARNINGS
#include "test-SeqList.h"

//��ӡ
void SLPrintf(SL* p)
{
	assert(p);
	for (int i = 0;i<p->size;i++)
	{
		printf("%d ",p->a[i]);
	}
	printf("\n");
}


//��ʼ��
void SLInit(SL* p)
{
	assert(p);
	p->a = NULL;
	p->size = 0;
	p->capacity = 0;
}

//���ռ�
void SLcheckCapacity(SL* p)
{
	assert(p);
	//����Ƿ���Ҫ����
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

//β��
void SLPushBack(SL* p, SLDataType x)
{
	assert(p);
	//���ռ�,�Ƿ�����
	SLcheckCapacity(p);

	//����
	p->a[p->size] = x;
	p->size++;
	SLPrintf(p);
}

//βɾ
void SLPopBack(SL* p)
{
	assert(p);
	//size����һֱ--
	if (p->size > 0)
	{
		p->size--;
	}
	SLPrintf(p);
}

//ͷ��
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

//ͷɾ
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

//�ڹ̶�λ�ò���,posΪ�±�
void SLInsert(SL* p, size_t pos, SLDataType x)
{
	assert(p);
	//ע��Ҫ�ж�pos�Ĵ�С
	if (pos>p->size)
	{
		printf("pos Խ��:%d\n",pos);
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

//�ڹ̶�λ��ɾ��,posΪ�±�
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

//����
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

//����
void SLDestory(SL* p)
{
	assert(p);
	free(p->a);
	p->a = NULL;
	p->capacity = p->size = 0;
}