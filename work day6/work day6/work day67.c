#define _CRT_SECURE_NO_WARNINGS
//ţ������ţ� HJ34 ͼƬ����
//����������Lilyʹ�õ�ͼƬ���� "A" �� "Z" �� "a" �� "z" �� "0" �� "9" ��������ĸ�����ָ��������� 1024 ��
//���������Lily������ͼƬ���մ�С����(ASCII��)��˳�����
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int cmp_int(void*e1, void*e2)
//{
//	return strcmp((char*)e1, (char*)e2);
//}
//int main()
//{
//	char arr[1000];
//	while (scanf("%s", arr) != EOF)
//	{
//		int ret = strlen(arr);
//		qsort(arr, ret, sizeof(arr[0]), cmp_int);
//		printf("%s", arr);
//	}
//	return 0;
//}

//�ݹ鵹���ӡ�ַ���
#include <stdio.h>

int main()
{
	char str[] = "Geneius";
	print(str);
	return 0;
}
print(char *s)
{
	if (*s)
	{
		print(++s);
		printf("%c", *s);
	}
}

//�����ӡ���ز�����һ��G��λ��