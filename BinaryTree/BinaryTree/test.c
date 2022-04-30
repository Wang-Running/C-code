#define _CRT_SECURE_NO_WARNINGS
#include "BinaryTree.h"

//���ٽ��
BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	node->data = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}

//�ֶ�����
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(7);
	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node2->right = node5;
	node3->left = node6;
	node3->right = node7;
	
	return node1;
}

//����ȫ�ֻ��߾�̬����
//��ε��û��ۼ�
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


//����+����
//��������ַ����ȥ������---˼������
//void BTreeSize(BTNode* root,int* count)
//{
//	if (root == NULL)
//		return;
//	++(*count);
//	BTreeSize(root->left,count);
//	BTreeSize(root->right,count);
//}


//�ݹ�--����˼��--�ڵ����
int BTreeSize(BTNode* root)
{
	return root == NULL ? 0 : BTreeSize(root->left) + BTreeSize(root->right) + 1;
}

//Ҷ�ӽڵ����
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

//��k��ڵ����
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

//���������
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

// ����������ֵΪx�Ľڵ�
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

//�ж��Ƿ�����ȫ������
bool BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
	{
		QueuePush(&q,root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front == NULL)
		{
			break;
		}
		QueuePush(&q,front->left);
		QueuePush(&q, front->right);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		//������ǷǿյĻ���Ϊ��ȫ������
		if (front)
		{
			QueueDestory(&q);
			return false;
		}
	}
	QueueDestory(&q);
	return true;
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
	LevelOrder(tree);
	//printf("%p ",BinaryTreeFind(tree,4));
	//printf("%d ", *BinaryTreeFind(tree, 4));
	//printf("��ȫ������:%d\n", BinaryTreeComplete(tree));
	BinaryTreeDestory(tree);
	tree = NULL;
	return 0;
}


//������ǰ�򹹽����������
//BTNode* CreatBTree(char* a, int* i)
//{
//	if (a[*i] == '#')
//	{
//		(*i)++;
//		return NULL;
//	}
//
//	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
//	if (node == NULL)
//	{
//		exit(-1);
//	}
//	node->data = a[(*i)++];
//	node->left = CreatBTree(a, i);
//	node->right = CreatBTree(a, i);
//	return node;
//}
//
////�������
//void InOrder(BTNode* tree)
//{
//	if (tree == NULL)
//	{
//		return;
//	}
//	InOrder(tree->left);
//	printf("%c ", tree->data);
//	InOrder(tree->right);
//}
//
//int main()
//{
//	char a[100];
//	scanf("%s", a);
//	int i = 0;
//	BTNode* root = CreatBTree(&a, &i);
//	InOrder(root);
//	return 0;
//}
