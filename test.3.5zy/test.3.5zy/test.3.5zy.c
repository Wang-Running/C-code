#define _CRT_SECURE_NO_WARNINGS
//leetcode 面试题 17.04. 消失的数字

//方法一：映射
//#include <stdio.h>
//
//int missingNumber(int* nums, int numsSize){
//	//创建一个数组，初始化为-1
//	int arr[100000] = { 0 };
//	for (int k = 0; k<numsSize + 1; k++)
//	{
//		arr[k] = -1;
//	}
//	//将数放入对应下标处
//	for (int i = 0; i<numsSize; i++)
//	{
//		arr[nums[i]] = nums[i];
//	}
//	//遍历一遍，找出-1，返回下标
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

//方法二：异或
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

//leetcode 剑指 Offer 56 - I. 数组中数字出现的次数
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* singleNumbers(int* nums, int numsSize, int* returnSize){
	int* p = (int*)malloc(2 * sizeof(int));
	p[0] = p[1] = 0;
	//异或所有值，求出只出现一次的两数的异或
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
	//分组，根据二进制右向左移n位
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