#define _CRT_SECURE_NO_WARNINGS

//day 13


// HJ37 ͳ��ÿ�������ӵ�����
//��һֻ���ӣ��ӳ������3������ÿ���¶���һֻ���ӣ�
//С���ӳ����������º�ÿ��������һֻ���ӣ��������Ӷ�������
//�ʵ�n���µ���������Ϊ���٣�

//쳲���������
//#include <stdio.h>
//
//int fb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fb(n - 1) + fb(n - 2);
//}
//
//int main()
//{
//	int m = 0;
//	while (scanf("%d", &m) != EOF)
//	{
//		fb(m);
//		printf("%d\n", fb(m));
//	}
//	return 0;
//}

// ZJ16 ���еĺ�
//���еĵ�һ��Ϊn���Ժ����Ϊǰһ���ƽ�����������е�ǰm��ĺ͡�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double m, n;
//	while (~scanf("%lf %lf", &m, &n))
//	{
//		double sum = 0;
//		for (int i = 0; i<n; i++)
//		{
//			sum += m;
//			m = sqrt(m);
//		}
//		printf("%.2f\n", sum);
//	}
//	return 0;
//}

//day 14

//NC61 ����֮��

/**
* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
*
*
* @param numbers int����һά����
* @param numbersLen int numbers���鳤��
* @param target int����
* @return int����һά����
* @return int* returnSize ������������
*
* C������������ȫ�ֱ��������static����ֹ�ظ�����
*/
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
//	// write code here
//	int* ret = (int*)malloc(2 * sizeof(int));
//	*returnSize = 2;
//	for (int i = 0; i<numbersLen; i++)
//	{
//		if (numbers[i] > target)
//			continue;
//		for (int j = i + 1; j<numbersLen; j++)
//		{
//			if (target - numbers[i] == numbers[j])
//			{
//				ret[0] = i + 1;
//				ret[1] = j + 1;
//				return ret;
//			}
//		}
//	}
//	*returnSize = 0;
//	return 0;
//}