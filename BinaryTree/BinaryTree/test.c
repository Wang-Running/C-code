#define _CRT_SECURE_NO_WARNINGS
#include "BinaryTree.h"


//手动创建
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	//BTNode* node7 = BuyNode(7);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	//node3->left = node7;
	return node1;
}

//定义全局或者静态变量
//多次调用会累加
//int count = 0;
//int BTreeSize(BTNode* root)
//{
//	if (root == NULL)
//		return;
//	++count;
//	BTreeSize(root->left);
//	BTreeSize(root->right);
//	return  count;
//}


//遍历+计数
//将变量地址传过去，计数---思想最优
//void BTreeSize(BTNode* root,int* count)
//{
//	if (root == NULL)
//		return;
//	++(*count);
//	BTreeSize(root->left,count);
//	BTreeSize(root->right,count);
//}


//递归--分治思想--节点个数
int BTreeSize(BTNode* root)
{
	return root == NULL ? 0 : BTreeSize(root->left) + BTreeSize(root->right) + 1;
}

//叶子节点个数
int BTreeLeafSize(BTNode* root)
{
	if (root==NULL)
	{
		return 0;
	}
	if (root->left == NULL&&root->right==NULL)
	{
		return 1;
	}
	return BTreeLeafSize(root->left) + BTreeLeafSize(root->right);
}

//第k层节点个数
int BTreeLeveSize(BTNode* root,int k)
{
	assert(k>=1);
	if (root==NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return BTreeLeveSize(root->left, k - 1) + BTreeLeveSize(root->right, k - 1);
}

//二叉树深度
int BTreeDepth(BTNode* root)
{
	if (root==NULL)
	{
		return 0;
	}
	int leftdepth = BTreeDepth(root->left);
	int rightdepth = BTreeDepth(root->right);
	return leftdepth >rightdepth ? leftdepth + 1 : rightdepth + 1;
}

// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root==NULL)
	{
		return NULL;
	}
	if (root->data == x)
		return root;
	if (BinaryTreeFind(root->left, x))
		return BinaryTreeFind(root->left,x);
	if (BinaryTreeFind(root->right, x))
		return BinaryTreeFind(root->right, x);
	return NULL;
}

int main()
{
	BTNode* tree = CreatBinaryTree();
	//PreOrder(tree);
	//printf("\n");
	//InOrder(tree);
	//printf("\n");
	//PostOrder(tree);
	//printf("\n");
	/*int count = 0;*/
	//printf("%d\n", BTreeSize(tree));
	//printf("%d\n", BTreeSize(tree));
	//BTreeSize(tree, &count);
	//printf("%d\n", count);
	//printf("%d\n", BTreeSize(tree));
	//printf("%d\n", BTreeLeafSize(tree));
	//printf("%d\n", BTreeDepth(tree));
	//LevelOrder(tree);
	printf("%p ",BinaryTreeFind(tree,4));
	printf("%d ", *BinaryTreeFind(tree, 4));
	return 0;
}