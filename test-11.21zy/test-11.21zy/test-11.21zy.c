#define _CRT_SECURE_NO_WARNINGS
//����������ѭ��  ���е��Ʊʼ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strlen
#include <stdio.h>
//#include <string.h>
#include <assert.h>
//int main()
//{
//	char arr[] =  "abcdef" ;
//	printf("%d\n",strlen(arr));
//	return 0;
//}

int my_strlen(const char* s)
{
	assert(s!=NULL);
	int i = 0;
	while (*s!= '\0')
	{
		i++;
		s++;
	}
	return i;
}

int main()
{
	char arr[] = "abcdef";
	printf("%d\n",my_strlen(arr));
	return 0;
}