#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//nt arr[10] = { 1, 2, 3 };//����ȫ��ʼ��
//	//char arr2[5] = { 'a', 'b' };
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n",sizeof(arr4));//7
//	printf("%d\n",strlen(arr4));//6,����/0ֹͣ
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n",sizeof(arr1));  //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //�����
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n",arr[3]);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}

//����
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i=0;i<sz;i++)
//	{
//		printf("%p\n",&arr[i]);
//	}
//	return 0;
//}
//���ڴ���������ţ���ַ����ɵ͵���


//��ά����
//int main()
//{
//	//int arr[3][4] = {1,2,3,4,5};//��������  �������Զ����У������Ϊ0��1234  5000 0000
//	//int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };//��һ��1230���ڶ���4500��������0000
//	int arr[][6] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };  //�п�ʡ�ԣ��в���ʡ��
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j=0;j<4;j++)
//		{
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�洢
int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j<4; j++)
		{
			printf("&arr=[%d][%d]=%p\n",i,j, &arr[i][j]);
		}
	}
	return 0;
}
//�洢����