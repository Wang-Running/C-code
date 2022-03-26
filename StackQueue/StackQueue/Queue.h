#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int QDatatype;

//定义单链表结点
typedef struct QueueNode
{
	QDatatype data;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue* pq);

void QueueDestory(Queue* pq);

void QueuePush(Queue* pq,QDatatype x);

void QueuePop(Queue* pq);

bool QueueEmpty(Queue* pq);

size_t QueueSize(Queue* pq);

QDatatype QueueFront(Queue* pq);

QDatatype QueueBack(Queue* pq);