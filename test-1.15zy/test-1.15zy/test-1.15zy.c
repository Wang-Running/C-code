#define _CRT_SECURE_NO_WARNINGS

//�ַ�������
//
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB

//#include <stdio.h>
//#include <string.h>
//
//void leftRound(char arr[],int time,int sz)
//{
//	for (int i = 0;i<time;i++)   //��ת����  һ����תһ����ĸ
//	{
//		int j = 0;
//		char p;
//		for (j = 0; j < sz-1; j++)  //��תһ����ĸ
//		{
//			p = arr[j];
//			arr[j] = arr[j+1];
//			arr[j + 1] = p;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[] = {'A','B','C','D'};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int time = 0;
//	scanf("%d", &time);
//	time %= sz;       //Ҫ��ת���ַ�����
//	leftRound(arr,time,sz);
//	for (i = 0;i<sz;i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}


//���Ͼ���
//
//��ҵ����
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//Ҫ��ʱ�临�Ӷ�С��O(N);

//#include <stdio.h>
//
//int findnum(int a[][3], int x, int y, int f) //��һ��������������Ҫ����
//{
//	int i = 0, j = x - 1; //�����Ͻǿ�ʼ����
//
//	while (j >= 0 && i < y)
//	{
//		if (a[i][j] < f) //���Ҵ������
//		{
//			i++;
//		}
//		else if (a[i][j] > f) //����С������
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a[][3] = { { 1, 3, 5 },
//	               { 3, 5, 7 },
//	               { 5, 7, 9 } }; //һ��ʾ��
//
//	if (findnum(a, 3, 3, 8))
//	{
//		printf("It has been found!\n");
//	}
//	else
//	{
//		printf("It hasn't been found!\n");
//	}
//
//	return 0;
//}

//�ַ�����ת���
//
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC


#include <stdio.h>
#include <assert.h>
char* findRound(const char * src, char * find)
{
	assert(src);
	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
	strcpy(tmp, src); //�ȿ���һ��
	strcat(tmp, src); //������һ��
	return (char*)strstr(tmp, find); //�����Ҳ��ҵõ�
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	scanf("%s %s",arr1,arr2);
	char* p;
	p = findRound(arr1, arr2);
	if (p!=NULL)
		printf("1\n");
	else
	{
		printf("0\n");
	}
	return 0;
}