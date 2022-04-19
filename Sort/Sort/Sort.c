#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

void PrintArr(int* a,int n)
{
	for (int i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}


//��������:��һ���������䣬����һ��������Ȼ��֤������
//��֤�������򣬴ӵ�һ������ʼ�������
//����Ϊ��
void InsertSort(int* a, int n)
{
	for (int i = 0;i<n-1;i++)
	{
		//endΪ�����±꣬��0��ʼ
		int end=i;
		//�ȶ���һ������������Ҫ�����ֵ�����㸲��
		int num = a[end + 1];
		//һ������
		while (end >= 0)
		{
			//��������ֵ��ǰһ��ֵС�������end��ʼ��󸲸�
			if (num<a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			//���򣬿�λend+1=Ҫ�����ֵ
			else
			{
				//���ǵ��߽�������ⲽ��ֱ��ʡ��
				/*a[end+1] = num;*/
				break;
			}
		}
		//�߽����:������ֵ��С��endС��0��while����������ֵδ����������
		//���ֶ�����
		a[end + 1] = num;
	}
	
}
//ʱ�临�Ӷ��O(N^2)�����O(N)

// ������
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);


void Swap(int* pa,int* pb)
{
	int num = *pa;
	*pa = *pb;
	*pb = num;
}

// ð������
//����Ϊ��
void BubbleSort(int* a, int n)
{
	//��ѭ��
	for (int i = 0;i<n-1;i++)
	{
		//����ѭ��
		for (int j = 0;j<n-i-1;j++)
		{
			if (a[j]<a[j+1])
			{
				Swap(&a[j],&a[j+1]);
			}
		}
	}
}