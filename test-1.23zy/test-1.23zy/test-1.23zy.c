#define _CRT_SECURE_NO_WARNINGS
//BC100-�������кϲ�
//���������������е����У����������кϲ�Ϊһ���������в������

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = {0};
//	int arr2[1000] = {0};
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i<m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = 0;
//	i = 0;
//	while (i<n&&j<m)
//	{
//		if (arr1[i]<arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (j == m)
//	{
//		for (; i<n; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	else
//	{
//		for (; j<m; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	return 0;
//}

//BC38 ����ˮ�ɻ�
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//��� 5λ���е����� Lily Number��
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 10000; i<=99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j = 1; j<=4; j++)
		{
			int m = i % (int)pow(10, j);
			int n = i / pow(10, j);
			sum += m*n;
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}