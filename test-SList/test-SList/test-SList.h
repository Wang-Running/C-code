#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <assert.h>

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

//单链表尾删
void SListPopBack(SListNode** phead, SLDataType x);

//单链表头删
void SListPopFront(SListNode** phead);

//查找,返回地址
SListNode* SListFind(SListNode* phead, SLDataType x);

//单链表任意位置插入
void SListInsert(SListNode** phead, SListNode* pos ,SLDataType x);

//单链表pos位置后插入
void SListInsertAfter(SListNode* pos, SLDataType x);

//单链表任意位置删除
void SListErase(SListNode** phead, SListNode* pos);

//单链表pos位置后删除
void SListEraseAfter(SListNode* pos);

//销毁
void SListDestory(SListNode** phead);