#pragma once   //��ֹ�ظ�����

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//����һ��˳��������洢
//��̬˳������ȹ̶�����ʵ��
//#define N 100
//struct SeqList
//{
//	int a[N];
//	int size;//��¼���ݵĸ���
//};

//��������������
typedef int SLDataType;

//��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size;//��¼���ݵĸ���
	int capacity; //��¼�ռ��С
}SL;

//��ӡ����
void SLPrintf(SL* p);

//���ռ�
void SLcheckCapacity(SL* p);

//��ʼ��
void SLInit(SL* p);

//����
void SLDestory(SL* p);

//ʱ�临�Ӷ�O(1)
//β��
void SLPushBack(SL* p, SLDataType x);

//βɾ
void SLPopBack(SL* p);

//ʱ�临�Ӷ�O(N)
//ͷ��
void SLPushFront(SL* p, SLDataType x);

//ͷɾ
void SLPopFront(SL* p);

//�ڹ̶�λ�ò���,posΪ�±�
void SLInsert(SL* p,size_t pos,SLDataType x);

//�ڹ̶�λ��ɾ��,posΪ�±�
void SLErase(SL* p, size_t pos);

//����
int SLFind(SL* p, SLDataType x);