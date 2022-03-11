#define _CRT_SECURE_NO_WARNINGS
//��ת���� leetcode 189. ��ת����

//��β�����棬����ֵ��ǰ��󸲸�
//ʱ�临�Ӷ�ΪO(ret*num)��������O(n^2)
//�ռ临�Ӷ�ΪO(1)
//���������ʱ�����ƣ�leetcode������
//#include <stdio.h>
//void rotate(int* nums, int numsSize, int k){
//	k = k%numsSize;
//	for (int i = 0; i<k; i++)
//	{
//		int num = nums[numsSize - 1];
//		for (int j = numsSize - 1; j>0; j--)
//		{
//			nums[j] = nums[j - 1];
//		}
//		nums[0] = num;
//	}
//
//}
//int main()
//{
//	int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = 7;
//	int k = 0;
//	scanf("%d",&k);
//	rotate(nums,sz,k);
//	return 0;
//}

//2.���⿪����
//ʱ�临�Ӷ�ΪO(n)
//�ռ临�Ӷ�ΪO(n)
//leetcode�����ܹ�ȥ

//void rotate(int* nums, int numsSize, int k){
//	//����һ������
//	int*nums1 = (int*)malloc(numsSize*sizeof(int));
//	k = k%numsSize;
//	//����k��ֱֵ�ӷ����������ǰk����
//	int a = k;
//	for (int i = numsSize; i>numsSize - k; i--)
//	{
//		nums1[a - 1] = nums[i - 1];
//		a--;
//	}
//	//��ǰ���ֵ����������ĺ���
//	int b = 0;
//	for (int j = k; j<numsSize; j++)
//	{
//		nums1[j] = nums[b];
//		b++;
//	}
//	//���������滻Ϊԭ����
//	for (int c = 0; c<numsSize; c++)
//	{
//		nums[c] = nums1[c];
//	}
//}

//3.��������
//1.��n-k������
//2.�Ժ�k������
//3.����������
//ʱ�临�Ӷ�O(n)
//�ռ临�Ӷ�o(1)
//leetcode�����ܹ�ȥ
//void rotate(int* nums, int numsSize, int k){
//	k = k%numsSize;
//	//��n-k����������
//	int left = 0;
//	int right = numsSize - k - 1;
//	while (left<right)
//	{
//		int temp = nums[right];
//		nums[right] = nums[left];
//		nums[left] = temp;
//		left++;
//		right--;
//	}
//	//�Ժ�k����������
//	left = numsSize - k;
//	right = numsSize - 1;
//	while (left<right)
//	{
//		int temp = nums[right];
//		nums[right] = nums[left];
//		nums[left] = temp;
//		left++;
//		right--;
//	}
//	//�������������
//	left = 0;
//	right = numsSize - 1;
//	while (left<right)
//	{
//		int temp = nums[right];
//		nums[right] = nums[left];
//		nums[left] = temp;
//		left++;
//		right--;
//	}
//}


//leetcode 27. �Ƴ�Ԫ��
int removeElement(int* nums, int numsSize, int val){
	for (int i = 0; i<numsSize; i++)
	{
		if (nums[i] == val)
		{
			//������ǰ����
			for (int j = i; j<numsSize - 1; j++)
			{
				nums[j] = nums[j + 1];
			}
			//������i--���أ���ֹ��һλ�����ŵ�����ȥ
			//Ӧ��ԭ�����
			i--;
			//���һλ'\0'�滻,���鳤�Ⱦ�-1
			nums[numsSize - 1] = '\0';
			numsSize--;
		}


	}
	return numsSize;
	return nums;
}

//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}

//�ռ临�Ӷ�ΪO(1)

//long long Fib(int N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}

//�ռ临�Ӷ�ΪO(n)