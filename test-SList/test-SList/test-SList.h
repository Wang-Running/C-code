#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SListNode;

//��ӡ������
void SListPrint(SListNode* phead);

//������β��
void SListPushBack(SListNode** phead, SLDataType x);

//������ͷ��
void SListPushFront(SListNode** phead, SLDataType x);

//������βɾ
void SListPopBack(SListNode** phead, SLDataType x);

//������ͷɾ
void SListPopFront(SListNode** phead, SLDataType x);

//����
void SListFind(SListNode* phead, SLDataType x);