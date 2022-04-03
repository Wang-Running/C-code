#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"

void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->capacity = php->size = 0;
}

void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}
void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);