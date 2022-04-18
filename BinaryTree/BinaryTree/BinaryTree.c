#define _CRT_SECURE_NO_WARNINGS
#include "BinaryTree.h"


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


// �������--ʹ�ö���
void LevelOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		//������ʼ�ڵ�
		BTNode* sta = QueueFront(&q);
		printf("%d ",sta->data);
		//����--��ʱ��ͷԪ�ظ�������һλ
		QueuePop(&q);
		if (sta->left)
		{
			QueuePush(&q, sta->left);
		}
		if (sta->right)
		{
			QueuePush(&q, sta->right);
		}
	}
	//���ٶ���
	QueueDestory(&q);
}

//����������
void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
	root = NULL;
}