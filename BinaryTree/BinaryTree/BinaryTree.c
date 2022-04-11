#define _CRT_SECURE_NO_WARNINGS
#include "BinaryTree.h"


BTNode* BuyNode(BTDataType x)
{
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	root->data = x;
	root->left = NULL;
	root->right = NULL;
	return root;
}

// ¶ş²æÊ÷Ç°Ğò±éÀú
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

// ¶ş²æÊ÷ÖĞĞò±éÀú
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

// ¶ş²æÊ÷ºóĞò±éÀú
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