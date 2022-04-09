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