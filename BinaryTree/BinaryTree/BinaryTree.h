#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Queue.h"

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
// ����������
void BinaryTreeDestory(BTNode* root);
