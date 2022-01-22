#define _CRT_SECURE_NO_WARNINGS

//测试qsort排序整型
//#include <stdio.h>
//#include <stdlib.h>
//
////比较e1 和e2指向的元素
//int cmp_int(const void*e1,const void*e2)
//{
//	return *(int*)e2 - *(int*)e1;
//
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}
//
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//}
//int main()
//{
//	int arr[] = {1,2,53,4,7,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print_arr(arr,sz);
//
//	return 0;
//}


//测试qsort排序结构体

//struct stu
//{
//	int age;
//	char name[20];
//	float score;
//};
//
//int cmp_int(const void*e1, const void*e2)
//{
//	//浮点数不能相减
//	/*return ((struct stu*)e1)->score - ((struct stu*)e2)->score;*/
//	if (((struct stu*)e1)->score > ((struct stu*)e2)->score)
//		return 1;
//	else if (((struct stu*)e1)->score < ((struct stu*)e2)->score)
//		return -1;
//	else
//		return 0;
//}
//
//void print_arr(struct stu arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d %s %f", arr[i].age, arr[i].name, arr[i].score);
//		printf("\n");
//	}
//}
//
//void test1()
//{
//	struct stu arr[] = { { 22, "zhangsan", 68.5f }, { 13, "lisi", 81.5f }, { 18, "wangwu", 90 } };
//	//按照成绩来排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int cmp_name(const void*e1, const void*e2)
//{
//	return (strcmp(((struct stu*)e2)->name, ((struct stu*)e1)->name));
//}
//
//void test2()
//{
//	struct stu arr[] = { { 22, "zhangsan", 68.5f }, { 13, "lisi", 81.5f }, { 18, "wangwu", 90 } };
//	//按照名字来排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_name);
//	print_arr(arr, sz);
//}
//int main()
//{
//	test2();
//	return 0;
//}


//冒泡模拟实现qsort
#include <stdio.h>
#include <stdlib.h>
//比较e1 和e2指向的元素
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e2 - *(int*)e1;
}

void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void my_qsort(void* base, int sz, int width, int(*p)(const void*e1, const void*e2))
{
	int i = 0;
	for (i = 0;i<sz-1;i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (p((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//两元素交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
int main()
{
	int arr[] = { 1, 2, 53, 4, 7, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);

	return 0;
}