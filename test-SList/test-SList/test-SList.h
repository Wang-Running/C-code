#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SListNode;

struct ListNode
{
	int val;
	struct ListNode *next;
};
//��ӡ������
void SListPrint(SListNode* phead);

//������β��
void SListPushBack(SListNode** phead, SLDataType x);

//������ͷ��
void SListPushFront(SListNode** phead, SLDataType x);

//������βɾ
void SListPopBack(SListNode** phead, SLDataType x);

//������ͷɾ
void SListPopFront(SListNode** phead);

//����,���ص�ַ
SListNode* SListFind(SListNode* phead, SLDataType x);

//����������λ�ò���
void SListInsert(SListNode** phead, SListNode* pos ,SLDataType x);

//������posλ�ú����
void SListInsertAfter(SListNode* pos, SLDataType x);

//����������λ��ɾ��
void SListErase(SListNode** phead, SListNode* pos);

//������posλ�ú�ɾ��
void SListEraseAfter(SListNode* pos);

//����
void SListDestory(SListNode** phead);

struct SListNode* middleNode(SListNode* head);