#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include "Stack.h"

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


void Swap(int* pa, int* pb)
{
	int num = *pa;
	*pa = *pb;
	*pb = num;
}

// ������
void AdjustDown(int* a, int root, int n)
{
	int child = root * 2 + 1;
	while (child < n)
	{
		if (child + 1 <n && a[child + 1] < a[child])
		{
			child++;
		}
		if (a[child] < a[root])
		{
			Swap(&a[child], &a[root]);
			root = child;
			child = root * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
//�������Ż�->ֱ�Ӷ����齨��
//ʱ�临�Ӷ�O(N*logN)�ռ临�Ӷ�O(1)
void HeapSort(int* a, int n)
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
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, i, n);
	}
	//���һ�����ݵ��±�
	size_t end = n - 1;
	while (end>0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, 0, end);
		end--;
	}
}



// ð������
//����Ϊ��
void BubbleSort(int* a, int n)
{
	//��ѭ��
	for (int i = 0;i<n-1;i++)
	{
		//�Ż������޽���������ֱ�ӽ����Ƚ�
		int flag = 0;
		//����ѭ��
		for (int j = 0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				flag = 1;
				Swap(&a[j],&a[j+1]);
			}
		}
		if (flag==0)
		{
			break;
		}
	}
}
//ʱ�临�Ӷ�O(N^2)
//���O(N)

//ϣ������-�Ż��Ĳ�������
//1.Ԥ����  �ӽ�����
//2.ֱ�Ӳ�������

//����ѭ��,Ԥ����
//void ShellSort(int* a, int n)
//{
//	int gap = 3;
//	//����gap��
//	for (int j = 0;j<gap;j++)
//	{
//		//���Ƽ��Ϊgap��һ������
//		for (int i = j; i<n - gap; i += gap)
//		{
//			int end = i;
//			int num = a[end + gap];
//			while (end >= 0)
//			{
//				if (num<a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = num;
//		}
//	}
//
//}

//����ѭ����Ԥ����
void ShellSort(int* a, int n)
{
	//gap���ǹ̶���ֵ
	//int gap = 3;
	int gap = n;
	//һ��ѭ������gap,����1Ԥ����
	//gap����1ʱֱ�Ӳ�������
	while (gap>1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i<n - gap; i++)
		{
			int end = i;
			int num = a[end + gap];
			while (end >= 0)
			{
				if (num<a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = num;
		}
	}
	//���õ��ò�������
	//InsertSort(a, n);
}


//ֱ��ѡ������
//ÿ�����ŵ��̶��Ķ�Ӧλ��
void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;
	while (left<right)
	{
		int mini = left;
		int maxi = left;
		//����һ��ѡ�����������С���±�
		for (int i = left;i<=right;i++)
		{
			if (a[i]<a[mini])
			{
				mini = i;
			}
			if (a[i]>a[maxi])
			{
				maxi = i;
			}
		}
		//�����ֵ����Сֵ��������ߺ����ұ�
		//Ҫע�⵱left=maxiʱ��ֵ�ᱻ����

		Swap(&a[left],&a[mini]);

		//�����������left��maxi�ص�������maxi
		if (left==maxi)
		{
			maxi = mini;
		}

		Swap(&a[right], &a[maxi]);
		//�����±�
		left++;
		right--;
	}
}




//ע��:�����������ݽ��п��ţ�ѡ��keyΪ
//������С����ôʱ�临�Ӷ�ΪO(N^2)
//ջ֡�����
//�Դ˽����Ż�
//1.���ѡkey
//2.����ȡ��(ѡ�������Ҳ������С)
int GetMid(int* a, int left, int right)
{
	//���ܻ����
	/*int mid = (left+right) / 2;*/
	int mid = left + (right - left) / 2;
	if (a[left]<a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left]>a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else
	{
		if (a[mid]>a[right])
		{
			return mid;
		}
		else if (a[left]>a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}




//hoare��������-����
int PartSort1(int* a,int left,int right)
{
	//ѡ����������λ��
	int mid = GetMid(a,left,right);
	Swap(&a[mid],&a[left]);

	//key����ߵ�����Ϊѡ������
	int keyi = left;
	while (left<right)
	{
		//=�Ƿ�ֹ��ѭ��
		//left<right�Ƿ�ֹԽ��

		//�ұ�����С
		while (left<right&&a[right]>=a[keyi])
		{
			right--;
		}
		//������Ҵ�
		while (left<right&&a[left] <= a[keyi])
		{
			left++;
		}
		//��������
		Swap(&a[left],&a[right]);
	}

	//��Ƚ�������������λ�ú�keyi�ϵ�ֵ
	Swap(&a[keyi],&a[right]);
	return left;
}

//��������-��������
void QuickSort1(int* a,int begin,int end)
{
	if (begin>=end)
	{
		return;
	}
	//hoare��һ���ҳ��м�
	int keyi = PartSort1(a,begin,end);
	//�ڿӷ���
	/*int keyi = PartSort2(a, begin, end);*/
	//ǰ��ָ�뷨
	/*int keyi = PartSort3(a, begin, end);*/
	//�����������������
	QuickSort1(a,begin,keyi-1);
	QuickSort1(a,keyi+1,end);
}

//�ڿӷ���������-����
//��߻��ұ���һ���ӣ��ұ���С����ߣ�����Ҵ����ұ�
int PartSort2(int* a, int left, int right)
{
	int key = a[left];
	int pit = left;
	while (left<right)
	{
		//�ұ����ߣ���С
		while (left<right&&a[right]>=key)
		{
			right--;
		}
		//���Ͽ�
		a[pit] = a[right];
		//���¿�
		pit = right;
		//��ߺ��ߣ��Ҵ�
		while (left<right&&a[left] <= key)
		{
			left++;
		}
		a[pit] = a[left];
		pit = left;
	}
	a[pit] = key;
	return pit;
}


//ǰ��ָ�뷨��ָ����С
//key����
//int PartSort3(int* a, int left, int right)
//{
//	int key = a[left];
//	int prev = left;
//	int cur = left + 1;
//	/*while (cur<=right)
//	{
//		if (a[cur]<key)
//		{
//			prev++;
//			Swap(&a[prev],&a[cur]);
//		}
//		cur++;*/
//	while (cur <= right)
//	{
//		if (a[cur]<=key && a[++prev]!=a[cur])
//		{
//			Swap(&a[prev], &a[cur]);
//		}
//		cur++;
//	}
//	Swap(&a[prev],&a[left]);
//
//	return prev;
//}

//ǰ��ָ�뷨��ָ����С
//key����
int PartSort3(int* a, int left, int right)
{
	int key = a[right];
	int prev = left-1;
	int cur = left;
	while (cur < right)
	{
		if (a[cur]<=key && a[++prev] != a[cur])
		{
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}

	Swap(&a[++prev], &a[right]);

	return prev;
}


//С�����Ż�
//�����Сʱ������ʹ�õݹ�˼·����
//ֱ��ʹ�ò��������С��������
//���ٵݹ����

void QuickSort2(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}

	if (end - begin<10)
	{
		InsertSort(a+begin,end-begin+1);
	}
	else
	{
		//hoare��һ���ҳ��м�
		int keyi = PartSort1(a, begin, end);
		//�ڿӷ���
		/*int keyi = PartSort2(a, begin, end);*/
		//ǰ��ָ�뷨
		/*int keyi = PartSort3(a, begin, end);*/
		//�����������������
		QuickSort2(a, begin, keyi - 1);
		QuickSort2(a, keyi + 1, end);
	}
}

//��������---�ǵݹ�
//��ջʵ��
void QuickSort3(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	//�����ǵ��±���ջ
	StackPush(&st,begin);
	StackPush(&st,end);

	while (!StackEmpty(&st))
	{
		//����ȳ�
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);

		//ѡһ�ֿ��ŷ���
		int keyi = PartSort3(a, left, right);

		//���������������ջ[left,keyi-1][keyi+1,right]
		if (left<keyi-1)
		{
			StackPush(&st,left);
			StackPush(&st,keyi-1);
		}
		if (keyi+1<right)
		{
			StackPush(&st, keyi+1);
			StackPush(&st, right);
		}

	}

}


void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin>=end)
	{
		return;
	}
	int mid=(begin+end)/2;
	//����ָ�
	//������[begin,mid-1]��[mid,end],�������ѭ��
	_MergeSort(a, begin, mid,tmp);
	_MergeSort(a, mid+1, end, tmp);

	//����鲢
	//printf("[%d %d] [%d %d]\n",begin,mid,mid+1,end);
	int begin1 = begin, end1 = mid;
	int begin2 = mid+1, end2 = end;
	//ȷ���鲢ʱ������ݵ���ʼλ��
	int index = begin;
	//д���Ǽ���������
	//һ�αȽ����������ݵĴ�С��һ������д���
	//��Ҫ��û�����������е�ʣ������д��������
	while (begin1<=end1 && begin2<=end2)
	{
		if (a[begin1]<a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}
	//û����������ֱ�ӹ鲢����ʱ������
	while (begin1<=end1)
	{
		tmp[index++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}

	//���ź�������ݿ�����ԭ�ռ�
	memcpy(a+begin,tmp+begin,(end-begin+1)*sizeof(int));
}

//�鲢����
void MergeSort(int* a, int n)
{
	//Ҫ�õ���ʱ����
	int* tmp = (int*)malloc(sizeof(int)*n);
	assert(tmp);
	//�����Ӻ�����������ķָ�
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}




//�鲢����ǵݹ�
//ֱ�ӿ��Ƽ����������鲢
//���ע�ⲻ�ܰ�2�ı����㣬���������Ϊ����������Խ������
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	int gap = 1;

	//ͨ���������gap�����й鲢����
	//����鲢�����Ϊgap����һ��
	while (gap<n)
	{
		//��������߽磬�Գ�ʼ�����������
		for (int i = 0; i<n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			//Խ�磬������±�

			//end1Խ�磬����
			if (end1 >= n)
				end1 = n - 1;

			//begin2Խ�磬�ұ����䲻����
			//�޸ĳɲ����ڵ�����
			if (begin2 >= n)
			{
				begin2 = 0;
				end2 = -1;
			}

			//end2Խ��,����
			if (begin2<n && end2 >= n)
				end2 = n - 1;

			//****�����ϵ�*****
			if (begin1==8&&end1==9
				&&begin2==9&&end2==9)
			{
				int x = 0;
			}

			//ֱ�ӽ��й鲢
			int index = i;
			//д���Ǽ���������
			//һ�αȽ����������ݵĴ�С��һ������д���
			//��Ҫ��û�����������е�ʣ������д��������
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1]<a[begin2])
				{
					tmp[index++] = a[begin1++];
				}
				else
				{
					tmp[index++] = a[begin2++];
				}
			}
			//û����������ֱ�ӹ鲢����ʱ������
			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}

		}

		//���ź�������ݿ�����ԭ�ռ�
		memcpy(a, tmp, n*sizeof(int));

		//���¼��gap
		gap *= 2;
	}

		
	free(tmp);
}