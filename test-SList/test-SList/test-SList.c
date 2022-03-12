#define _CRT_SECURE_NO_WARNINGS
#include "test-SList.h"

//��ӡ
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

//��ڵ�
SListNode* BuySListNode(SLDataType x)
{
	//������
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

//������β��
void SListPushBack(SListNode** phead, SLDataType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}

	else
	{
		//���������һ���ڵ㣨��β��
		SListNode* tail = *phead;
		while (tail->next!=NULL)
		{
			tail = tail->next;
		}

		//(β��)
		tail->next = newnode;
	}
}

//������ͷ��
void SListPushFront(SListNode** phead, SLDataType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *phead;
	*phead = newnode;
}