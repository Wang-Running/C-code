#define _CRT_SECURE_NO_WARNINGS
//strcpy  string-copy�ַ�������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

//memset
//memory - �ڴ� set - ����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	return 0;
//}

//�Զ��庯��

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max=%d\n",max);
//	return 0;
//}

//#include <stdio.h>
//Swap1�����������
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�

//void Swap1(int x,int y)
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//}
//
//void Swap2(int *pa, int *pb)
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tem = 0;
//	printf("a=%d b=%d\n",a,b);
//	//Swap1(a, b);
//	//���ú���
//	Swap2(&a,&b);
//	//tem = a;
//	//a = b;
//	//b = tem;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//Swap2()Ҫ�õ����£�
//int main()
//{
//	int a = 10;
//	int *pa=&a;//pa��ָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n",a);
//	return 0;
//}
//����������1��������������0

//1.дһ�������ж�һ�����ǲ�������

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1) //�ж�i�Ƿ�Ϊ����
//		printf("%d ", i);
//	}
//	return 0;
//}

//2.дһ�������ж�һ���ǲ�������

//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if(is_leap_year(year)==1)
//		printf("%d ",year);
//	}
//}

//3.дһ��������ʵ��һ��������������Ķ��ֲ���

//#include<stdio.h>
//                 //������arr��һ��ָ��
//int binary_search(int arr[],int k,int sz)
//{
//
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;           //arr����Ԫ�ص�ַ
//	int ret=binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
//	}
//	return 0;
//}

//4.дһ��������ÿ����һ�Σ��ͻὫnum��ֵ����һ
//#include<stdio.h>
//void Add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//num=1
//	printf("%d\n",num);
//	Add(&num);//num=2
//	printf("%d\n", num);
//	Add(&num);//num=3
//	printf("%d\n", num);
//	Add(&num);//num=4
//	printf("%d\n", num);
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("%d",printf("%d",printf("%d",43)));//4321
	return 0;
}