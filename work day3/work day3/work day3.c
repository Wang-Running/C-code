#define _CRT_SECURE_NO_WARNINGS

//HJ97 �Ǹ�����
//�����ж�������������
//��������һ��������n��
//Ȼ������n��������
//
//���������
//��������ĸ�������������������ƽ��ֵ��
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
//		int cont1 = 0;   //��¼��������
//		int cont2 = 0;   //��¼��������
//		double ave = 0;  //������
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

//JZ11 ��ת�������С����

//��������С���������
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

//���ַ�
//1. �м�����ұ�[3, 4, 5, 1, 2]����������£���С��һ�����ұߣ���left = middle + 1
//2. �м�����ұ�[1, 0, 1, 1, 1], �����[0, 1, 1, 1, 1] ��ת�����ģ���ʱ����Ҫ��С��Χ right--; ��ע�ⲻ����
//left++����Ϊ�Ƿǽ������飬����Ҫ��С�ұ߷�Χ���ѽ�Сֵ�����ƣ��������ǵ��жϹ���
//3. �м�С���ұ�[5, 1, 2, 3, 4], ��������£���С�����������ߣ���right = middle
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