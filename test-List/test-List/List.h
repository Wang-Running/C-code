#define _CRT_SECURE_NO_WARNINGS
//��ͷ����˫��ѭ������

#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int Datatype;
typedef struct ListNode
{
	Datatype data;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;

//��ʼ��
void ListInit(ListNode* phead);

//��ӡ
void PrintList(ListNode* phead);

//β��
void ListPushBack(ListNode* phead, Datatype x);

ListNode* Buynode(int x);

//βɾ
void ListPopBack(ListNode* phead);

//ͷ��
void ListPushFront(ListNode* phead, Datatype x);

//ͷɾ
void ListPopFront(ListNode* phead);

//����
ListNode* ListFind(ListNode* phead, Datatype x);

//posλ�ò���
void ListInsert(ListNode* pos,Datatype x);

//posλ��ɾ��
void ListErase(ListNode* pos);