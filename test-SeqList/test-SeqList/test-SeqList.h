#pragma once   //防止重复定义

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//定义一个顺序表，连续存储
//静态顺序表，长度固定，不实用
//#define N 100
//struct SeqList
//{
//	int a[N];
//	int size;//记录数据的个数
//};

//重命名数据类型
typedef int SLDataType;

//动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int size;//记录数据的个数
	int capacity; //记录空间大小
}SL;

//打印函数
void SLPrintf(SL* p);

//检查空间
void SLcheckCapacity(SL* p);

//初始化
void SLInit(SL* p);

//销毁
void SLDestory(SL* p);

//时间复杂度O(1)
//尾插
void SLPushBack(SL* p, SLDataType x);

//尾删
void SLPopBack(SL* p);

//时间复杂度O(N)
//头插
void SLPushFront(SL* p, SLDataType x);

//头删
void SLPopFront(SL* p);

//在固定位置插入,pos为下标
void SLInsert(SL* p,size_t pos,SLDataType x);

//在固定位置删除,pos为下标
void SLErase(SL* p, size_t pos);

//查找
int SLFind(SL* p, SLDataType x);