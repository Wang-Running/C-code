#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SListNode;

//打印单链表
void SListPrint(SListNode* phead);

//单链表尾插
void SListPushBack(SListNode** phead, SLDataType x);

//单链表头插
void SListPushFront(SListNode** phead, SLDataType x);