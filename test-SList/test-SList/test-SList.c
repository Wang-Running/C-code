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

//1.������βɾ
//void SListPopBack(SListNode** phead)
//{
//	assert(phead);
//	//���������һ���ڵ㣨��β��
//	SListNode* prev = NULL;
//	SListNode* tail = *phead;
//	while (tail->next != NULL)
//	{
//		prev = tail;
//		tail = tail->next;
//	}
//	free(tail);
//	tail = NULL;
//	prev->next = NULL;
//}

//2.������βɾ
void SListPopBack(SListNode** phead)
{
	assert(phead);
	//1.��
	//2.һ��
	//3.���
	if (*phead==NULL)
	{
		return;
	}
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		//���������һ���ڵ㣨��β��
		SListNode* tail = *phead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}

}

//������ͷɾ
void SListPopFront(SListNode** phead)
{
	assert(phead);
	if (*phead == NULL)
	{
		return;
	}
	SListNode* next = *phead;
	free(*phead);
	*phead = next;

//2.
//	SListNode* per = *phead;
//	*phead = (*phead)->next;
//	free(per);
//	per = NULL;
}


//����
void SListFind(SListNode* phead, SLDataType x)
{
	SListNode* cur = phead;
	while (cur!=NULL)
	{
		if (cur->data==x)
		{
			
		}
	}
}