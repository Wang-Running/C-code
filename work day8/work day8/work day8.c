#define _CRT_SECURE_NO_WARNINGS
// HJ10 �ַ�����ͳ��
//����һ��û�пո���ַ�����
//��� �����ַ��� �з�Χ��(0~127������0��127)�ַ���������
//ʾ����
//���룺abc ���룺aaa
//�����3 �����1


//����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[500] = { 0 };
//	scanf("%s", arr);
//	int ret = strlen(arr);
//	int count = 0;
//	for (int i = 0;i<ret;i++)
//	{
//		for (int j = 0;j<ret;j++)
//		{
//			if (arr[j] != arr[j + 1] && arr[i] != arr[j+1])  //���ڱȽϣ�ÿһ���������Ƚϡ�����ͬ��һ
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d",count);
//	return 0;
//}

//��������ȥ��
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(void* e1, void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
int main()
{
	char arr[500] = { 0 };
	int i = 0;
	int j = 0;
	scanf("%s", arr);
	int len = strlen(arr);
	//����
	qsort(arr, len, 1, cmp);
	//ȥ��
	for (i = 0; i<len - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			for (j = 0; j<len - 1; j++)    //�ظ�����ǰ����
			{
				arr[j] = arr[j + 1];
			}
			i--;    //i�Լ���++����ԭλ�������±Ƚ�
			len--;  //���Ǻ󳤶ȼ�һ
		}
	}
	printf("%d", len);
	return 0;
}