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

//1.�����ѣ�������
//void HeapSort(int* a,int size)
//{
//	HP hp;
//	HeapInit(&hp);
//	for (int i = 0;i<size;i++)
//	{
//		HeapPush(&hp,a[i]);
//	}
//	HeapPrint(&hp);
//	int j = 0;
//	while (!HeapEmpty(&hp))
//	{
//		a[j] = HeapTop(&hp);
//		j++;
//		HeapPop(&hp);
//	}
//	HeapDestroy(&hp);
//}

//�������Ż�->ֱ�Ӷ����齨��
//ʱ�临�Ӷ�O(N*logN)�ռ临�Ӷ�O(1)
void HeapSort(int* a,int size)
{
	//���ϵ�������
	//�������Ǽ����Ӷ�ΪO(N*logN)
	//for (int i = 1;i<size;i++)
	//{
	//	up(a,i);
	//}
	//���µ�������
	//�������Ǽ����Ӷ�ΪO(N+logN)=O(N)

	//�ܽᣬһ��ȡ���µ�������Ч�ʸ���
	//���򽨴��
	//����С��
	for (int i = (size-1-1)/2; i>=0; i--)
	{
		Down(a,i, size);
	}
	//���һ�����ݵ��±�
	size_t end = size - 1;
	while (end>0)
	{
		swap(&a[0],&a[end]);
		Down(a,0,end);
		end--;
	}
}

//TOP-K����
void PrintTopK(int* a, int n, int k)
{
	// 1. ����--��a��ǰk��Ԫ�ؽ���
	int* kHeap = (int*)malloc(sizeof(int)*k);
	if (kHeap == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	//��ǰk������������kHeap��
	for (int i = 0;i<k;i++)
	{
		kHeap[i] = a[i];
	}

	//���������潨С��
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		Down(a, i, k);
	}

	// 2. ��ʣ��n-k��Ԫ��������Ѷ�Ԫ�ؽ����������������滻
	for (int i = k;i<n;i++)
	{
		if (a[i]>kHeap[0])
		{
			kHeap[0] = a[i];
			Down(kHeap,0,k);
		}
	}

	// 3. ����
	//���һ�����ݵ��±�
	size_t end = k - 1;
	while (end>0)
	{
		swap(&kHeap[0], &kHeap[end]);
		Down(kHeap, 0, end);
		end--;
	}

	// 4. ��ӡ������ǰk��
	for (int j = 0;j<k;j++)
	{
		printf("%d ",kHeap[j]);
	}
	printf("\n");


	free(kHeap);
}


//���Ժ���
void TestTopk()
{
	int n = 10000;
	int* a = (int*)malloc(sizeof(int)*n);
	srand(time(0));
	for (size_t i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;
	}
	a[5] = 1000000 + 1;
	a[1231] = 1000000 + 2;
	a[531] = 1000000 + 3;
	a[5121] = 1000000 + 4;
	a[115] = 1000000 + 5;
	a[2335] = 1000000 + 6;
	a[9999] = 1000000 + 7;
	a[76] = 1000000 + 8;
	a[423] = 1000000 + 9;
	a[3144] = 1000000 + 10;
	PrintTopK(a, n, 10);
}


int main()
{
	/*TestHeap();*/
	//int a[] = {0,8,3,6,5,9,7,21,900,80,30,145,4};
	//HeapSort(a,sizeof(a)/sizeof(int));
	//for (int i = 0; i<sizeof(a) / sizeof(int); i++)
	//{
	//	printf("%d ",a[i]);
	//}

	//PrintTopK(a,13, 6);
	TestTopk();
	return 0;
}