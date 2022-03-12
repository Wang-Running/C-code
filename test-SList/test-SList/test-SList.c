#define _CRT_SECURE_NO_WARNINGS
#include "test-SList.h"

//打印
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//买节点
SListNode* BuySListNode(SLDataType x)
{
	//空链表
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
	}

	return newnode;
}

//单链表尾插
void SListPushBack(SListNode** phead, SLDataType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}

	else
	{
		//遍历找最后一个节点（找尾）
		SListNode* tail = *phead;
		while (tail->next!=NULL)
		{
			tail = tail->next;
		}

		//(尾插)
		tail->next = newnode;
	}
}

//单链表头插
void SListPushFront(SListNode** phead, SLDataType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *phead;
	*phead = newnode;
}