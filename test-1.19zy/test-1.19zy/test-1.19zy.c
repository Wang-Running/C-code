#define _CRT_SECURE_NO_WARNINGS

//�����ṹ���Ԫ�����ڴ��еĴ洢��ʽ
//#include <stdio.h>
//typedef struct{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//int main()
//{
//	printf("%d",sizeof(AA_t));   //12
//	return 0;
//}

//ģ��ʵ��strlen
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	//������
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//���ܴ�����ʱ����������-�ݹ�
//int my_strlen(const char * str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = {"abcdef"};
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//ָ��-ָ��ķ�ʽ
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//
//int main()
//{
//	char arr[] = {"abcdef"};
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//ģ��ʵ��strcpy
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
//	char arr1[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//	char arr2[20] = "xxxxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//ģ��ʵ��strcmp-�Ƚ϶�Ӧλ���ַ�����С
//ע��strcmp���ص��Ǵ��ڵ��ڻ�С��0������
//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char*str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		//����ȣ������+1�����Ƚ�
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[] = "degh";
//	char arr2[] = "bcdefx";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret<0)
//	{
//		printf("arr1<arr2");
//	}
//	else if (ret >0)
//	{
//		printf("arr1>arr2");
//	}
//	else
//	{
//		printf("arr1==arr2");
//	}
//	return 0;
//}


//ģ��ʵ��strcat
//׷��Ŀ��Ҫ�㹻��
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

//ģ��ʵ��strstr
//���ַ��������Ӵ��������ҵ��Ӵ�����ʼ��ַ
//�Ҳ������ؿ�ָ��
//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* str, const char* substr)
//{
//	const char* s1 = str;
//	const char* s2 = substr;
//	const char* cur = str;   //��¼�ַ�����ʼλ�ã��ڸı�
//
//	assert(str && substr);
//	if (*substr == '\0')
//	{
//		return (char*)str;
//	}
//	while (*cur)   //���*curΪ'\0'�����Ҳ��������ؿ�ָ��
//	{
//		s1 = cur;
//		s2 = substr;
//		while (*s1 &&  *s2 && *s1 == *s2) //*s1 *s2��Ϊ'\0'
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')    //�ҵ���
//			return (char*)cur;   //������ʼλ��
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbcq";
//
//	char* ret = my_strstr(arr1, arr2);
//
//	if (NULL == ret)
//		printf("û�ҵ�\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbcq";
//
//	char* ret = strstr(arr1, arr2);  //��Ϊ���ص��ǵ�ַ��Ҫ��ָ�����
//
//	if (NULL == ret)
//		printf("û�ҵ�\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	char arr2[20] = "xxxxxxxxxxxx";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	char arr1[30] = "hello";//ע���ʼ����ʽ������Ҫ����'\0'
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	char arr1[] = "degh";
//	char arr2[] = "bcdefx";
//	int ret = strcmp(arr1, arr2);
//	if (ret<0)
//	{
//		printf("arr1<arr2");
//	}
//	else if (ret >0)
//	{
//		printf("arr1>arr2");
//	}
//	else
//	{
//		printf("arr1==arr2");
//	}
//	return 0;
//}