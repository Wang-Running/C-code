#define _CRT_SECURE_NO_WARNINGS
#include "List.h"



//打印
void PrintList(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead;
	cur = cur->next;
	while (cur!=phead)
	{
		printf("%d ",cur->data);
		cur=cur->next;
	}
}


//创建结点
ListNode* Buynode(int x)
{
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	if (tmp==NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	else
	{
		tmp->data = x;
		tmp->next = NULL;
		tmp->prev = NULL;
	}
	return tmp;
}

//初始化
void ListInit(ListNode** phead)
{
	assert(phead);
	*phead = Buynode(0);
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}

//尾插
void ListPushBack(ListNode* phead, Datatype x)
{
	assert(phead);
	ListNode* newnode = Buynode(x);
	ListNode* tail = phead->prev;
	tail->next = newnode;
	newnode->next = phead;
	newnode->prev = tail;
	phead->prev = newnode;
// 2.
//	ListInsert(phead, x);
	
}

//尾删
void ListPopBack(ListNode* phead)
{
	assert(phead);
	if (phead->next == phead)
	{
		return NULL;
	}
	ListNode* tail = phead->prev;
	tail->prev->next = phead;
	phead->prev = tail->prev;
	free(tail);
	tail->next = NULL;
	tail->prev = NULL;
}





//头插
void ListPushFront(ListNode* phead, Datatype x)
{
	assert(phead);
	ListInsert(phead->next,x);
}

//头删
void ListPopFront(ListNode* phead)
{
	assert(phead);
	ListErase(phead->next);
}


//查找
ListNode* ListFind(ListNode* phead, Datatype x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//pos位置插入
void ListInsert(ListNode* pos, Datatype x)
{
	ListNode* newnode = Buynode(x);
	pos->prev->next = newnode;
	newnode->next = pos;
	newnode->prev = pos->prev;
	pos->prev = newnode;
}

//pos位置删除
void ListErase(ListNode* pos)
{
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	pos = NULL;
}