#define _CRT_SECURE_NO_WARNINGS
#include "BinaryTree.h"


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


// 层序遍历--使用队列
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
		//保存起始节点
		BTNode* sta = QueueFront(&q);
		printf("%d ",sta->data);
		//出队--此时队头元素更新至下一位
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
	//销毁队列
	QueueDestory(&q);
}

//二叉树销毁
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