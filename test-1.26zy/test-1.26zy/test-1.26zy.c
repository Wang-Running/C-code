#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//int main()
//{
//	//����10�����Ϳռ�
//	//int* p = (int*)malloc(40);
//	int* p = (int*)calloc(10,sizeof(int));
//	if (NULL==p)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		printf("%d ",p[i]);
//	}
//
//	//��Ҫ����
//	int *ptr = (int*)realloc(p, 80);
//	if (NULL!=ptr)
//	{
//		p = ptr;
//	}
//	//p = (int*)realloc(p,80);
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//�Կ�ָ�������
//void test()
//{
//	int *p = (int *)malloc(9999999999999);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	free(p);
//}

//Խ��
//void test()
//{
//	int i = 0;
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//}


//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//void test()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);
//}

//3.4 ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//void test()
//{
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}

//��ͬһ�鶯̬�ڴ����ͷ�
//void test()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}
//
//int main()
//{
//	test();
//	return 0;
//}

void test()
{
	int *p = (int *)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}
int main()
{
	test();
	while (1);
}
