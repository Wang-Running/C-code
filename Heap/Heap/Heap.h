#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	size_t size;
	size_t capacity;
}HP;

void HeapInit(HP* php);
void HeapDestroy(HP* php);
void HeapPush(HP* php,HPDataType x);
void HeapPop(HP* php);