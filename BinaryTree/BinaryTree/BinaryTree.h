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


// 二叉树前序遍历
void PreOrder(BTNode* root);
// 二叉树中序遍历
void InOrder(BTNode* root);
// 二叉树后序遍历
void PostOrder(BTNode* root);
// 层序遍历
void LevelOrder(BTNode* root);






////定义单链表结点
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