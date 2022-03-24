#define _CRT_SECURE_NO_WARNINGS
#include "List.h"



//��ӡ
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


//�������
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

//��ʼ��
void ListInit(ListNode** phead)
{
	assert(phead);
	*phead = Buynode(0);
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}

//β��
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

//βɾ
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





//ͷ��
void ListPushFront(ListNode* phead, Datatype x)
{
	assert(phead);
	ListInsert(phead->next,x);
}

//ͷɾ
void ListPopFront(ListNode* phead)
{
	assert(phead);
	ListErase(phead->next);
}


//����
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

//posλ�ò���
void ListInsert(ListNode* pos, Datatype x)
{
	ListNode* newnode = Buynode(x);
	pos->prev->next = newnode;
	newnode->next = pos;
	newnode->prev = pos->prev;
	pos->prev = newnode;
}

//posλ��ɾ��
void ListErase(ListNode* pos)
{
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	pos = NULL;
}