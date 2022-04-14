#define _CRT_SECURE_NO_WARNINGS
#include "BinaryTree.h"




////���г�ʼ��
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//	pq->head = pq->tail = NULL;
//}
//
////��������
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
////���
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
////����
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
////�ж��Ƿ�Ϊ��
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//	return pq->head == NULL&&pq->tail == NULL;
//}
//
////��ͷԪ��
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

// ������ǰ�����
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

// �������������
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

// �������������
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


//// �������--ʹ�ö���
//void LevelOrder(BTNode* root)
//{
//	if (root==NULL)
//		return;
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q,*root);
//	while (!QueueEmpty(&q))
//	{
//		//������ʼ�ڵ�
//		BTNode sta = QueueFront(&q);
//		printf("%d ",sta.data);
//		//����--��ʱ��ͷԪ�ظ�������һλ
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
//	//���ٶ���
//	QueueDestory(&q);
//}