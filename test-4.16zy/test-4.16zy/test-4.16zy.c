#define _CRT_SECURE_NO_WARNINGS

//int PartSort3(int* a, int left, int right)
//{
//	int keyi = left;
//	int prev = left, cur = left + 1;
//	while (cur<=right)
//	{
//		if (a[cur] < a[keyi] && a[++prev] != a[cur])
//			Swap(&a[prev], &a[cur]);
//		cur++;
//	}
//	Swap(&a[prev],&a[keyi]);
//	return prev;
//}

//����912 ��������

//1.ð�ݳ�ʱ
//void swap(int *a, int *b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int* sortArray(int* nums, int numsSize, int* returnSize){
//	*returnSize = numsSize;
//
//	for (int i = 0; i < numsSize; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < numsSize - i - 1; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				swap(&nums[j], &nums[j + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//
//	return nums;
//}

//2.qsort����
//int cmpare(const void *a, const void *b){
//	return (*(int*)a - *(int*)b);
//}
//
//int* sortArray(int* nums, int numsSize, int* returnSize){
//	qsort(nums, numsSize, sizeof(nums[0]), cmpare);
//	*returnSize = numsSize;
//	return nums;
//}

//3.������
void Swap(int*pa, int*pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//4.�����
//void AdjustDown(int* nums, int i, int numsSize)
//{
//	int child = i * 2 + 1;
//	while (child < numsSize)
//	{
//		//�ҵ���ĺ���
//		if (child + 1 <numsSize && nums[child + 1] > nums[child])
//		{
//			child++;
//		}
//		//��������Ϸţ������
//		if (nums[child] > nums[i])
//		{
//			Swap(&nums[child], &nums[i]);
//			i = child;
//			child = i * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//int* sortArray(int* nums, int numsSize, int* returnSize){
//	//ֱ�Ӳ�������-����ʱ������
//	//ϣ������-����ʱ������
//	//������
//	//���µ�������-���򽨴��
//	for (int i = (numsSize - 1 - 1) / 2; i >= 0; i++)
//	{
//		AdjustDown(nums, i, numsSize);
//	}
//	//���һ�����ݵ��±�
//	int end = numsSize - 1;
//	while (end>0)
//	{
//		Swap(&nums[0], &nums[end]);
//		AdjustDown(nums, 0, end);
//		end--;
//	}
//	*returnSize = numsSize;
//	return nums;
//}

//��������
void Swap(int* a, int* b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}


int GetMid(int* nums, int left, int right)
{
	int mid = left + (right - left) / 2;
	if (nums[left]<nums[right])
	{
		if (nums[mid]<nums[right])
		{
			return mid;
		}

		else if (nums[left]>nums[right])
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
		if (nums[mid]>nums[right])
		{
			return mid;
		}

		else if (nums[left]>nums[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}


int PartSort(int* nums, int left, int right)
{
	int mid = GetMid(nums, left, right);
	Swap(&nums[mid], &nums[left]);
	int keyi = left;
	while (left<right)
	{
		while (left<right&&nums[right] >= nums[keyi])
		{
			right--;
		}
		while (left<right&&nums[left] <= nums[keyi])
		{
			left++;
		}
		Swap(&nums[left], &nums[right]);
	}
	Swap(&nums[keyi], &nums[right]);
	return left;
}
void QuickSort(int* nums, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int keyi = PartSort(nums, begin, end);
	QuickSort(nums, begin, keyi - 1);
	QuickSort(nums, keyi + 1, end);
}


int* sortArray(int* nums, int numsSize, int* returnSize){
	int begin = 0, end = numsSize - 1;
	QuickSort(nums, begin, end);
	*returnSize = numsSize;
	return nums;
}