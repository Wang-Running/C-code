#define _CRT_SECURE_NO_WARNINGS
//BC29 ��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨 << ��ʵ��2��n�η��ļ��㡣
//#include<stdio.h>
//int main()
//{
//	int num;
//	while (scanf("%d", &num) != EOF)
//		printf("%d\n", 1<<num);
//	return 0;
//}


//BC70  KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)        //����
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (j == 0 || i == j||i==n-1)   // i��ʾ�У����һ��ȫ����ӡ
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//BC76 ����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[7] = {0};
//	int max=-1;
//	int min = 101;
//	double sum = 0;
//	for (i=0;i<7;i++)
//	{
//		scanf("%d",&arr[i]);
//		if (arr[i]>max)
//			max = arr[i];
//		if (arr[i]<min)
//			min = arr[i];
//		sum += arr[i];
//	}
//	sum = sum - max - min;
//	sum = sum / 5;
//	printf("%.2lf",sum);
//	return 0;
//}

//BC60 KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵĴ��ո�ֱ��������ͼ����
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = n-1; j>i; j--)
			{
				printf("  ");
			}
			for (j = 0; j<=i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}