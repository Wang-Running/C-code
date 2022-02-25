#define _CRT_SECURE_NO_WARNINGS
//ģ��ʵ��strncat
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//char* my_strncat(char* dest, const char* src, int n, int srclen)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while (*dest)
//	{
//		dest++;
//	}
//
//	if (n > srclen)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return ret;
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			*dest++ = *src++;
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	char arr1[30] = "hello";
//	char arr2[] = "word";
//	int srclen = strlen(arr2);
//	printf("%s\n",my_strncat(arr1,arr2,n,srclen));
//	return 0;
//}

//ģ��strcat
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//������ʼ��ַ�������һش�ӡ
//	assert(dest && src);
//	//1. ��Ŀ��ռ��е�\0����ӡ�����
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. ׷�����ݵ�Ŀ��ռ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";//ע���ʼ����ʽ������Ҫ����'\0'
//	char arr2[] = "world";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

//ģ��ʵ��strncpy
//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* dest, const char* src,int n)
//{
//	char* ret = dest;
//	//������ʼ��ַ
//	assert(dest && src);
//	for (int i = 0;i<n;i++)
//	{
//		*dest++ = *src++;
//	}
//}
//
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	char arr2[20] = "xxxxxxxxxxxx";
//	int n = 0;
//	scanf("%d",&n);
//	my_strncpy(arr2, arr1,n);
//	printf("%s\n", arr2);
//	return 0;
//}

//ģ��strcpy
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//������ʼ��ַ
//	assert(dest && src);
//	while (*dest++ = *src++)  //���ﲻ��ӡ'\0'֮���
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	char arr2[20] = "xxxxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//ģ��ʵ��atoi-�ַ���ת����
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
//int main()
//{
//	int ret = atoi("123");
//	printf("%d\n",ret);
//	return 0;
//}

//��ָ��
//���ַ���
//�հ��ַ�
//+-��
//�������ַ�
//��������

enum State
{
	INVALID,//�Ƿ�
	VALID  //�Ϸ�
};
enum State staue= INVALID;
int my_atoi(const char* str)
{
	assert(str);
	//���ַ���
	if (*str == '\0')
		return 0;

	//�հ��ַ�
	while (isspace(*str))
	{
		str++;
	}

	int flag = 1;
	//+-��
	if (*str=='+')
	{
		str++;
		flag = 1;
	}
	else if (*str == '-')
	{
		str++;
		flag = -1;
	}

	long long n = 0;
	while (isdigit(*str))
	{
		n =n * 10 + flag * (*str - '0');
		if ((n > INT_MAX) || (n < INT_MIN))
		{
			return 0;
		}
		str++;
	}

	//while (isdigit(*str))
	//{
	//	n = n * 10 + flag*(*str - '0');//�������ŵ�Ӱ��

	//	str++;
	//}
	if (*str=='\0')
	{
		staue = VALID;
		return (int)n;
	}
	return n;
}
int main()
{
	int ret = my_atoi("-100");
	if (staue == VALID)
		printf("%d\n", ret);
	else
		printf("�Ƿ�����\n");
	return 0;
}

//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

//���飺
//ֻ����һ�ε��������ֱַ�ֵ�һ����
//ÿ���鶼����һ�����ֳ���һ�Σ��������ֶ��ɶԳ���
//#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 1,2,3,4,6 };
//	//1.�������һ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i<sz;i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.����ret�Ķ������еڼ�λ��һ
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret>>i)&1)==1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//����posλΪ0/1������
//	int n = 0;
//	int m = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			n ^= arr[i];
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 0)
//		{
//			m ^= arr[i];
//		}
//	}
//	printf("%d %d\n",m,n);
//	return 0;
//}