#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"
void TestHeap()
{
	HP hp;
	HeapInit(&hp);
	HeapPush(&hp,0);
	HeapPush(&hp, 3);
	HeapPush(&hp, 1);
	HeapPush(&hp, 8);
	HeapPush(&hp, 5);
	HeapPush(&hp, 9);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
}

//������
void HeapSort(int* a,int size)
{
	HP hp;
	HeapInit(&hp);
	for (int i = 0;i<size;i++)
	{
		HeapPush(&hp,a[i]);
	}
	HeapPrint(&hp);
	int j = 0;
	while (!HeapEmpty(&hp))
	{
		a[j] = HeapTop(&hp);
		j++;
		HeapPop(&hp);
	}
	HeapDestroy(&hp);
}

//�Ż�
void HeapSort(int* a,int size)
{
	//���ϵ�������
	for (int i = 0;i<size;i++)
	{
		up(a,i);
	}
	//���µ�������
	for (int i = (size-1-1)/2; i>=0; i--)
	{
		down(a,i, size);
	}
}

int main()
{
	/*TestHeap();*/
	int a[] = {0,8,3,6,5,9,7,2};
	HeapSort(a,sizeof(a)/sizeof(int));
	for (int i = 0; i<sizeof(a) / sizeof(int); i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

