#define _CRT_SECURE_NO_WARNINGS
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

//arr��һ������һά���顣
//#include <stdio.h>
//
//void my_printf(int* arr,int x)
//{
//	int i = 0;
//	for (i=0;i<x;i++)
//	{
//		printf("%d ",*(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_printf(arr,sz);
//	return 0;
//}

//дһ����������������һ���ַ��������ݡ�
//��һ���ַ���str�����ݵߵ��������������
//#include <stdio.h>
//#include <string.h>
//
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = (str + strlen(str) - 1);
//	while (left < right)
//	{
//		char n = *left;
//		*left = *right;
//		*right = n;
//		left++;
//		right--;
//	}
//
//}

//int main()
//{
//	int i = 0;
//	char str[10000] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		for (i = 0; i < strlen(str); i++)
//		{
//			printf("%c", str[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char str[10000] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n",str);
//	}
//	return 0;
//}


//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

//���磺2 + 22 + 222 + 2222 + 22222

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int num = 0;
//	int i= 0;
//	int n = 0;
//	scanf("%d %d",&n,&a);
//	for (i=0;i<n;i++)
//	{
//		num = num * 10 + a;
//		sum += num;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include <stdio.h>
//#include <math.h>
//
//int Sum(int x, int y)
//{
//	int k = 0;
//	int num = 0;
//	int sum = 0;
//	for (k=0;k<y;k++)
//	{
//		num = pow(x % 10, y);
//		sum += num;
//		x/=10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;                //λ��
//		int z = i;                //����while��i�ı䣬iδ��ǰ��ֵ��z,����ԭֵi���к���ļ���
//		while (z / 10 != 0)          //����տ�ʼֱ����i��������  ��ѭ��
//		{
//			n++;
//			z=z / 10;                //��i����Ļ�����i=10ʱ i=i/10 ֱ�ӵ���1 ����ѭ��    �������ñ���z����i
//		}
//		if (i == Sum(i, n))        //�ж�
//			printf("%d ",i);
//	}
//	return 0;
//}


//��ӡ����
//#include <stdio.h>
//int main()
//{
//	char ch = '*';
//	int i = 0;
//	for (i = 0; i < 6; i++)                 //��ӡ����
//	{
//		int c = 0;
//		for (c = 0; c < 6-i; c++)          //��ӡ�ո�
//		{
//			printf(" ");
//		}
//		if (i != 0)
//		{
//			int j = 0;
//			int z = 0;
//			for (j = 0; j<i + 1; j++)        //��ӡÿ��1 2 3 4 6
//			{
//				printf("%c", ch);
//			}
//
//			for (z=0;z<i;z++)               //���м�1�����м�2�����м�3
//			{
//				printf("%c",ch);
//			}
//			printf("\n");
//		}
//		else                                 //��һ��
//		{
//			printf("%c", ch);
//			printf("\n");
//		}
//	}
//
//	for (i;i>=0;i--)                                //��ӡ����   ��һ��Ϊ�
//	{
//		int c = 0;
//		for (c = 0; c < 6-i; c++)
//		{
//			printf(" ");
//		}
//		if (i != 0)
//		{
//			int j = 0;
//			int z = 0;
//			for (j = 0; j<i + 1; j++)        //��ӡÿ��1 2 3 4 6
//			{
//				printf("%c", ch);
//			}
//
//			for (z = 0; z<i; z++)               //���м�1�����м�2�����м�3
//			{
//				printf("%c", ch);
//			}
//			printf("\n");
//		}
//		else                                 //���һ��
//		{
//			printf("%c", ch);
//			printf("\n");
//		}
//	}
//	return 0;
//}