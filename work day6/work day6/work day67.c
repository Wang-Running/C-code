#define _CRT_SECURE_NO_WARNINGS
//ţ������ţ� HJ34 ͼƬ����
//����������Lilyʹ�õ�ͼƬ���� "A" �� "Z" �� "a" �� "z" �� "0" �� "9" ��������ĸ�����ָ��������� 1024 ��
//���������Lily������ͼƬ���մ�С����(ASCII��)��˳�����
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp_int(void*e1, void*e2)
{
	return strcmp((char*)e1, (char*)e2);
}
int main()
{
	char arr[1000];
	while (scanf("%s", arr) != EOF)
	{
		int ret = strlen(arr);
		qsort(arr, ret, sizeof(arr[0]), cmp_int);
		printf("%s", arr);
	}
	return 0;
}