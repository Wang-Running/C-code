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
#include <stdio.h>

void Reverse(char* str)
{
	char* left = str;
	char* right = (str+(sizeof(str) / sizeof(str[0])-1));
	while (left < right)
	{
		char n = *left;
		*left = *right;
		*right = n;
		left++;
		right--;
	}

}

int main()
{
	int i = 0;
	char str[50] = {0};
	while (getchar(str))
	{
		Reverse(str);
		printf("%s", str);
	}
	return 0;
}