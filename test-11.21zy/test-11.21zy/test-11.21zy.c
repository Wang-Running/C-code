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
//#include <stdio.h>
////#include <string.h>
//#include <assert.h>
////int main()
////{
////	char arr[] =  "abcdef" ;
////	printf("%d\n",strlen(arr));
////	return 0;
////}
//
//int my_strlen(const char* s)
//{
//	assert(s!=NULL);
//	int i = 0;
//	while (*s!= '\0')
//	{
//		i++;
//		s++;
//	}
//	return i;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
//#include <stdio.h>
//#include <assert.h>
////#include <string.h>
////
////int main()
////{
////	char arr1[] = "*********";
////	char arr2[] = "Hello boy";
////	strcpy(arr1,arr2);
////	printf("%s\n",arr1);
////	return 0;
////}
//
//char* my_strcpy(char* a,char* b)
//{
//	assert(a&&b);
//	char* p = a;              //while���ַ�ı䣬�ȱ�����ʼ��ַ
//	while (*a++ = *b++);          //�ı��ַ���ݺ�
//	return p;                    //����ʼ��ַ����
//}
//
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "Hello boy";
//	//my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));     //��ӡ��ʼ��ַ����ַ���
//	return 0;
//}


//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
#include <stdio.h>
#include <assert.h>

void my_array(int* const p,int s)
{
	assert(p!=NULL);
	int*left = p;
	int*right = p + s - 1;
	while (left < right)
	{
		while (*left % 2)        //��left��ż��ͣ
		{
			left++;
		}
		while ((*right + 1) % 2)              //��right������ͣ
		{
			right--;
		}
		int temp = 0;
		temp = *right;                  //��ż����
		*right = *left;
		*left = temp;
		left++;               //����
		right--;               //����
	}
}

int main()
{
	int arr[] = {1,5,6,8,4,7,9,11,13};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_array(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}