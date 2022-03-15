#define _CRT_SECURE_NO_WARNINGS
//leetcode 88. 合并两个有序数组
//1.
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	//先合并
//	for (int i = 0; i<n; i++)
//	{
//		nums1[m] = nums2[i];
//		m++;
//	}
//	//再排序
//	for (int j = 0; j<m - 1; j++)
//	{
//		for (int a = 0; a<m - j - 1; a++)
//		{
//			if (nums1[a]>nums1[a + 1])
//			{
//				int temp = nums1[a];
//				nums1[a] = nums1[a + 1];
//				nums1[a + 1] = temp;
//			}
//		}
//	}
//}

//2.优解
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	//end1:nums1的末尾
//	//end2:nums2的末尾
//	//end:合并之后整个数组的末尾
//	int end1 = m - 1;
//	int end2 = n - 1;
//	int end = m + n - 1;
//
//	while (end1 >= 0 && end2 >= 0)
//	{   //选出尾最大的元素，存放到整个数组的末尾
//		//每存放一个元素，尾向前移动一个位置
//		if (nums1[end1] > nums2[end2])
//		{
//			nums1[end--] = nums1[end1--];
//		}
//		else
//		{
//			nums1[end--] = nums2[end2--];
//		}
//	}
//	//剩余元素依次向末尾存放
//	while (end1 >= 0)
//	{
//		nums1[end--] = nums1[end1--];
//	}
//
//	while (end2 >= 0)
//	{
//		nums1[end--] = nums2[end2--];
//	}
//}

//leetcode 26. 删除有序数组中的重复项
//int removeDuplicates(int* nums, int numsSize){
//	for (int i = 0; i<numsSize - 1; i++)
//	{
//		if (nums[i] == nums[i + 1])
//		{
//			for (int j = i; j<numsSize - 1; j++)
//			{
//				nums[j] = nums[j + 1];
//			}
//			numsSize--;
//			i--;
//		}
//	}
//	return numsSize;
//}