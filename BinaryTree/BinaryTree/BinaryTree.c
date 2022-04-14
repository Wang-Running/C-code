#define _CRT_SECURE_NO_WARNINGS
#include "BinaryTree.h"




////队列初始化
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//	pq->head = pq->tail = NULL;
//}
//
////队列销毁
//void QueueDestory(Queue* pq)
//{
//	assert(pq);
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->head = pq->tail = NULL;
//}
//
////入队
//void QueuePush(Queue* pq, BTNode x)
//{
//	assert(pq);
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	assert(newnode);
//	newnode->data = x;
//	newnode->next = NULL;
//	if (pq->head == NULL)
//	{
//		assert(pq->tail == NULL);
//		pq->head = pq->tail = newnode;
//	}
//	else
//	{
//		pq->tail->next = newnode;
//		pq->tail = newnode;
//	}
//}
//
////出队
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(pq->head&&pq->tail);
//
//	if (pq->head->next == NULL)
//	{
//		free(pq->head);
//		pq->head = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* next = pq->head->next;
//		free(pq->head);
//		pq->head = next;
//	}
//
//}
//
////判断是否为空
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//	return pq->head == NULL&&pq->tail == NULL;
//}
//
////对头元素
//BTNode QueueFront(Queue* pq)
//{
//	assert(pq);
//	assert(pq->head);
//	return pq->head->data;
//}













BTNode* BuyNode(BTDataType x)
{
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	root->data = x;
	root->left = NULL;
	root->right = NULL;
	return root;
}

// 二叉树前序遍历
void PreOrder(BTNode* root)
{
	if (root==NULL)
	{
		return;
	}
	printf("%d ",root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

// 二叉树中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

// 二叉树后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}


//// 层序遍历--使用队列
//void LevelOrder(BTNode* root)
//{
//	if (root==NULL)
//		return;
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q,*root);
//	while (!QueueEmpty(&q))
//	{
//		//保存起始节点
//		BTNode sta = QueueFront(&q);
//		printf("%d ",sta.data);
//		//出队--此时队头元素更新至下一位
//		QueuePop(&q);
//		if (sta.left)
//		{
//			QueuePush(&q, *(sta.left));
//		}
//		if (sta.right)
//		{
//			QueuePush(&q, *(sta.right));
//		}
//	}
//	//销毁队列
//	QueueDestory(&q);
//}