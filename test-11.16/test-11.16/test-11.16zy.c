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

