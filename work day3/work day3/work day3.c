#define _CRT_SECURE_NO_WARNINGS

//HJ97 记负均正
//本题有多组输入用例。
//首先输入一个正整数n，
//然后输入n个整数。
//
//输出描述：
//输出负数的个数，和所有正整数的平均值。
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int arr[2001] = { 0 };
//		for (i = 0; i<n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int j = 0;
//		int cont1 = 0;   //记录负数个数
//		int cont2 = 0;   //记录正数个数
//		double ave = 0;  //正数和
//		for (j = 0; j<n; j++)
//		{
//			if (arr[j]<0)
//			cont1++;
//			else if (arr[j]>0)
//			{
//				ave += arr[j];
//				cont2++;
//			}
//		}
//		printf("%d %.1lf\n", cont1, ave/cont2);
//	}
//	return 0;
//}

//JZ11 旋转数组的最小数字

//遍历找最小，暴力求解
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//	// write code here
//	if (rotateArrayLen == 0)
//		return 0;
//	int min = rotateArray[0];
//	for (int i = 0; i < rotateArrayLen; i++)
//	{
//		if (min > rotateArray[i])
//			min = rotateArray[i];
//	}
//	return min;
//}

//二分法
//1. 中间大于右边[3, 4, 5, 1, 2]，这种情况下，最小数一定在右边；则left = middle + 1
//2. 中间等于右边[1, 0, 1, 1, 1], 这个是[0, 1, 1, 1, 1] 旋转过来的，这时候需要缩小范围 right--; ，注意不能是
//left++，因为是非降序数组，所以要缩小右边范围，把较小值向右推，符合我们的判断规则。
//3. 中间小于右边[5, 1, 2, 3, 4], 这种情况下，最小数字则在左半边；则right = middle
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//	if (rotateArrayLen == 0) return 0;
//	int left = 0, right = rotateArrayLen - 1, mid;
//	if (rotateArray[right] > rotateArray[left]) return rotateArray[0];
//	while (left < right) {
//		mid = left + (right - left) / 2;
//		if (rotateArray[mid] > rotateArray[right]) left = mid + 1;
//		else if (rotateArray[mid] == rotateArray[right]) right--;
//		else right = mid;
//	}
//	return rotateArray[left];
//}