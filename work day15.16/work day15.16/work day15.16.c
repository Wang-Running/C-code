#define _CRT_SECURE_NO_WARNINGS

//day 15


//#include <stdio.h>

//int fun(int n)
//{
//	int prod = 1, i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		prod *= i;
//	}
//		return prod;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=fun(n);
//	printf("%d\n",ret);
//	return 0;
//}


// KS33 Ѱ������

//������������һ�У�һ������n����ʾ���еĳ��ȡ��ڶ��У�n��������ai���������м��Կո������
//���������һ����������������Ψһ���������ε���ֵ��

//���룺5
//2 1 2 3 1
//�����3

//�����

//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	scanf("%ld", &n);
//	long long x = 0;
//	long long max = 0;
//	while (~scanf("%ld", &x))
//	{
//		max ^= x;      //����ֱ����򣬲���������
//	}
//	printf("%ld\n", max);
//	return 0;
//}


//NC107 Ѱ�ҷ�ֵ

/**
* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
*
*
* @param nums int����һά����
* @param numsLen int nums���鳤��
* @return int����
*
* C������������ȫ�ֱ��������static����ֹ�ظ�����
*/
//int findPeakElement(int* nums, int numsLen) {
//	// write code here
//	int left = 0, right = numsLen - 1, mid;
//	while (left<right)
//	{
//		mid = left + (right - left) / 2;
//		if (nums[mid]<nums[mid + 1])
//			left = mid + 1;
//		else
//			right = mid;
//	}
//	return left;
//}


//day 16

// WY49 ����
//#include <stdio.h>
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int count = 0;
//	for (int x = 1; x <= n; x++)
//	{
//		for (int y = 1; y <= n; y++)
//		{
//			if ((x % y) >= k)
//				count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	long n, k;
//	scanf("%d %d", &n, &k);
//	long count = 0;
//	for (long x = 1; x <= n; x++)
//	{
//		for (long y = 1; y <= n; y++)
//		{
//			if ((x%y) >= k)
//				count++;
//		}
//	}
//	printf("%ld\n", count);
//	return 0;
//}


// HJ46 ��ȡ�ַ���
//����һ���ַ�����һ������ k ����ȡ�ַ�����ǰk���ַ������

//���룺
//abABCcDEF
//6
//�����
//abABCc

//#include <stdio.h>
//int main()
//{
//	char arr[101] = { 0 };
//	while (~scanf("%s", arr))
//	{
//		int n;
//		scanf("%d", &n);
//		arr[n] = '\0';
//		printf("%s\n", arr);
//	}
//	return 0;
//}