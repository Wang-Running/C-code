#define _CRT_SECURE_NO_WARNINGS
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d \n", i);
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//#include <stdio.h>
//int main()
//{
//	float i = 0.0;
//	float a = 0.0;
//	float sum = 0;
//	int b = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		a = 1.0 / i*b;
//		sum += a;
//		b = -b;
//	}
//	printf("%.2f\n",sum);
//	return 0;
//}


//��10 �����������ֵ
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)       //��������10����
//	{
//		scanf("%d",&arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)         //�±���������αȽ�
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d",max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)               //�Ŵ���ѭ��
//	{
//		int j = 0;
//		int a = 0;
//		for (j=1;j<=i;j++)
//		{
//
//			printf("%d*%d=%2d ",j,i,i*j);
//		}
//		printf("\n");                    //һ�����˻���
//	}
//	return 0;
//}

//���ֲ��� Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 1;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < a)
		{
			left = mid+1;
		}
		else if (arr[mid]>a)
		{
			right = mid-1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}

