#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//int main()
//{
//	//开辟10个整型空间
//	//int* p = (int*)malloc(40);
//	int* p = (int*)calloc(10,sizeof(int));
//	if (NULL==p)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		printf("%d ",p[i]);
//	}
//
//	//需要增容
//	int *ptr = (int*)realloc(p, 80);
//	if (NULL!=ptr)
//	{
//		p = ptr;
//	}
//	//p = (int*)realloc(p,80);
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//对空指针解引用
//void test()
//{
//	int *p = (int *)malloc(9999999999999);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//越界
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
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}


//对非动态开辟内存使用free释放
//void test()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);
//}

//3.4 使用free释放一块动态开辟内存的一部分
//void test()
//{
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}

//对同一块动态内存多次释放
//void test()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//重复释放
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
