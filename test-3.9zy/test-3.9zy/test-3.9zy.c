#define _CRT_SECURE_NO_WARNINGS
//leetcode 88. �ϲ�������������
//1.
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	//�Ⱥϲ�
//	for (int i = 0; i<n; i++)
//	{
//		nums1[m] = nums2[i];
//		m++;
//	}
//	//������
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

//2.�Ž�
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	//end1:nums1��ĩβ
//	//end2:nums2��ĩβ
//	//end:�ϲ�֮�����������ĩβ
//	int end1 = m - 1;
//	int end2 = n - 1;
//	int end = m + n - 1;
//
//	while (end1 >= 0 && end2 >= 0)
//	{   //ѡ��β����Ԫ�أ���ŵ����������ĩβ
//		//ÿ���һ��Ԫ�أ�β��ǰ�ƶ�һ��λ��
//		if (nums1[end1] > nums2[end2])
//		{
//			nums1[end--] = nums1[end1--];
//		}
//		else
//		{
//			nums1[end--] = nums2[end2--];
//		}
//	}
//	//ʣ��Ԫ��������ĩβ���
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

//leetcode 26. ɾ�����������е��ظ���
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