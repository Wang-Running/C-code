#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;


// ������ǰ�����
void PreOrder(BTNode* root);
// �������������
void InOrder(BTNode* root);
// �������������
void PostOrder(BTNode* root);
// �������
void LevelOrder(BTNode* root);






////���嵥������
//typedef struct QueueNode
//{
//	BTNode data;
//	struct QueueNode* next;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//}Queue;
//
//void QueueInit(Queue* pq);
//
//void QueueDestory(Queue* pq);
//
//void QueuePush(Queue* pq, BTNode x);
//
//void QueuePop(Queue* pq);
//
//bool QueueEmpty(Queue* pq);
//
//BTNode QueueFront(Queue* pq);