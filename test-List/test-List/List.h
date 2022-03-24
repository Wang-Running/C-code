#define _CRT_SECURE_NO_WARNINGS
//带头结点的双向循环链表

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

//初始化
void ListInit(ListNode* phead);

//打印
void PrintList(ListNode* phead);

//尾插
void ListPushBack(ListNode* phead, Datatype x);

ListNode* Buynode(int x);

//尾删
void ListPopBack(ListNode* phead);

//头插
void ListPushFront(ListNode* phead, Datatype x);

//头删
void ListPopFront(ListNode* phead);

//查找
ListNode* ListFind(ListNode* phead, Datatype x);

//pos位置插入
void ListInsert(ListNode* pos,Datatype x);

//pos位置删除
void ListErase(ListNode* pos);