#define _CRT_SECURE_NO_WARNINGS
//leetcode ������ 17.04. ��ʧ������

//����һ��ӳ��
//#include <stdio.h>
//
//int missingNumber(int* nums, int numsSize){
//	//����һ�����飬��ʼ��Ϊ-1
//	int arr[100000] = { 0 };
//	for (int k = 0; k<numsSize + 1; k++)
//	{
//		arr[k] = -1;
//	}
//	//���������Ӧ�±괦
//	for (int i = 0; i<numsSize; i++)
//	{
//		arr[nums[i]] = nums[i];
//	}
//	//����һ�飬�ҳ�-1�������±�
//	int j = 0;
//	for (j = 0; j<numsSize + 1; j++)
//	{
//		if (arr[j] == -1)
//			break;
//	}
//	return j;
//}
//
//int main()
//{
//	int nums[3] = { 3, 1, 0 };
//	int ret = missingNumber(nums,3);
//	printf("%d\n",ret);
//	return 0;
//}

//�����������
//#include <stdio.h>
//int missingNumber(int* nums,int numsSize)
//{
//	int ret = 0;
//	for (int i = 0; i <= numsSize ;i++)
//	{
//		ret ^= i;
//	}
//	for (int j = 0; j < numsSize; j++)
//	{
//		ret ^= nums[j];
//	}
//	return ret;
//}
//int main()
//{
//	int nums[3] = { 3, 1, 0 };
//	int ret = missingNumber(nums, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//leetcode ��ָ Offer 56 - I. ���������ֳ��ֵĴ���
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* singleNumbers(int* nums, int numsSize, int* returnSize){
	int* p = (int*)malloc(2 * sizeof(int));
	p[0] = p[1] = 0;
	//�������ֵ�����ֻ����һ�ε����������
	int ret = 0;
	for (int i = 0; i<numsSize; i++)
	{
		ret ^= nums[i];
	}
	int n = 0;
	while ((ret & 1) == 0)
	{
		n++;
		ret >>= 1;
	}
	//���飬���ݶ�������������nλ
	for (int j = 0; j<numsSize; j++)
	{
		if ((nums[j] >> n) & 1 == 1)
		{
			p[0] ^= nums[j];
		}
		else
		{
			p[1] ^= nums[j];
		}
	}
	*returnSize = 2;
	return p;
}