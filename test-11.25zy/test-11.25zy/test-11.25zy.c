#define _CRT_SECURE_NO_WARNINGS

//BC118
//��ʦ����С����һ�����������У�Ҫ��С���ְ��������ȥ�غ󰴴�С��������
//1.���г�ʱ
#include <stdio.h>
int main()
{
	//��������
	int n = 0;
	scanf("%d",&n);
	int i = 0;
	int arr1[100001] = {0};
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	//����
	for (i=0;i<n;i++)
	{
		if (arr1[i] == arr1[i + 1])
		{
			for (i; i < n; i++)        //���һλ���������� ��Խ��
			{
				arr1[i] = arr1[i + 1];
			}
			i = 0;
			i--;
		}
		if (arr1[i+1]==0)                //��ֹarr1[i]=arr1[i+1]=0,��ѭ��
			break;
	}
	//����       ð������
	for (i = 0;i<n;i++)
	{
		int j = 0;
		for (j = 0; j < n-1; j++)       //��Խ�绥��ֵ
		{
			if (arr1[j]>arr1[j + 1])
			{
				int temp = 0;
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j+1] = temp;
			}
		}
	}
	//��ӡ
	for (i = 0; i < n; i++)
	{
		if (arr1[i]!=0)
		printf("%d ", arr1[i]);
	}
	return 0;
}

//BC114-С�����ŵ���
//#include <stdio.h>
//
//void Wait(int x)
//{
//	int i = 0;        // 12�ĸ���
//	int time = 2;
//	if (x < 12)
//		printf("%d\n",time);
//	else
//	{
//		while (x / 12)
//		{
//			i += i+ x / 12;
//			x %= 12;
//		}
//		time = i * 4 + time;
//		printf("%d\n", time);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	Wait(n);
//	return 0;
//}

//#include <stdio.h>
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n / 12 * 4 + 2);
//
//	return 0;
//}

//BC107-����ת��
//#include <stdio.h>
//int main()
//{
//	int row, col;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &row, &col);
//	//����
//	for (int i=0;i<row;i++)
//	{
//		for (int j = 0;j<col;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	//���
//	for (int i = 0; i<col; i++)                //����������
//	{
//		for (int j = 0; j<row; j++)
//		{
//			printf("%d ",arr[j][i]);           //���껥��
//		}
//		printf("\n");
//	}
//	return 0;
//}

//������ɾ��ָ������
//#include<stdio.h>
//void Dal(int *arr,int n,int b)
//{
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		if (arr[i] == b)
//		{
//			for (i; i < n; i++)
//			{
//				arr[i] = arr[i + 1];
//			}
//			i = 0;
//			i--;            //����һλ��ȷ��i��0��ʼ�����²���
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30] = {0};
//	int b = 0;
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &b);
//	Dal(arr,n,b);
//	for (i = 0; i<n ; i++)
//	{
//		if (arr[i]!=0)           //����ӡ0
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}