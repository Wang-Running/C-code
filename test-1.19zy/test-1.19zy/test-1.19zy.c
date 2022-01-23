#define _CRT_SECURE_NO_WARNINGS

//分析结构体各元素在内存中的存储方式
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

//模拟实现strlen
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	//计数法
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

//不能创建临时变量计数器-递归
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

//指针-指针的方式
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


//模拟实现strcpy
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//保留起始地址
//	assert(dest && src);
//	while (*dest++ = *src++)  //这里不打印'\0'之后的
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

//模拟实现strcmp-比较对应位置字符串大小
//注意strcmp返回的是大于等于或小于0的整型
//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char*str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		//若相等，各向后+1继续比较
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


//模拟实现strcat
//追加目标要足够大
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//保留起始地址，方便找回打印
//	assert(dest && src);
//	//1. 找目标空间中的\0，打印的起点
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 追加内容到目标空间
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";//注意初始化方式，必须要包含'\0'
//	char arr2[] = "world";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

//模拟实现strstr
//在字符串里找子串，返回找到子串的起始地址
//找不到返回空指针
//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* str, const char* substr)
//{
//	const char* s1 = str;
//	const char* s2 = substr;
//	const char* cur = str;   //记录字符串起始位置，在改变
//
//	assert(str && substr);
//	if (*substr == '\0')
//	{
//		return (char*)str;
//	}
//	while (*cur)   //如果*cur为'\0'，则找不到，返回空指针
//	{
//		s1 = cur;
//		s2 = substr;
//		while (*s1 &&  *s2 && *s1 == *s2) //*s1 *s2不为'\0'
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')    //找到了
//			return (char*)cur;   //返回起始位置
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
//		printf("没找到\n");
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
//	char* ret = strstr(arr1, arr2);  //因为返回的是地址，要用指针接收
//
//	if (NULL == ret)
//		printf("没找到\n");
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
//	char arr1[30] = "hello";//注意初始化方式，必须要包含'\0'
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