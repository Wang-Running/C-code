#define _CRT_SECURE_NO_WARNINGS
//旋转数组 leetcode 189. 轮转数组

//将尾数保存，所有值从前向后覆盖
//时间复杂度为O(ret*num)，最坏情况下O(n^2)
//空间复杂度为O(1)
//结果：超出时间限制，leetcode过不了
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

//2.额外开数组
//时间复杂度为O(n)
//空间复杂度为O(n)
//leetcode可以跑过去

//void rotate(int* nums, int numsSize, int k){
//	//创建一个数组
//	int*nums1 = (int*)malloc(numsSize*sizeof(int));
//	k = k%numsSize;
//	//将后k个值直接放入新数组的前k个中
//	int a = k;
//	for (int i = numsSize; i>numsSize - k; i--)
//	{
//		nums1[a - 1] = nums[i - 1];
//		a--;
//	}
//	//将前面的值放入新数组的后面
//	int b = 0;
//	for (int j = k; j<numsSize; j++)
//	{
//		nums1[j] = nums[b];
//		b++;
//	}
//	//将新数组替换为原数组
//	for (int c = 0; c<numsSize; c++)
//	{
//		nums[c] = nums1[c];
//	}
//}

//3.三趟逆置
//1.对n-k个逆置
//2.对后k个逆置
//3.对整体逆置
//时间复杂度O(n)
//空间复杂度o(1)
//leetcode可以跑过去
//void rotate(int* nums, int numsSize, int k){
//	k = k%numsSize;
//	//对n-k个进行逆置
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
//	//对后k个进行逆置
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
//	//对整体进行逆置
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


//leetcode 27. 移除元素
int removeElement(int* nums, int numsSize, int val){
	for (int i = 0; i<numsSize; i++)
	{
		if (nums[i] == val)
		{
			//依次向前覆盖
			for (int j = i; j<numsSize - 1; j++)
			{
				nums[j] = nums[j + 1];
			}
			//这里是i--查重，防止下一位紧挨着的跳过去
			//应从原起点起步
			i--;
			//最后一位'\0'替换,数组长度就-1
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

//空间复杂度为O(1)

//long long Fib(int N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}

//空间复杂度为O(n)