#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	char arr2[20] = "xxxxxxxxxxxx";
//	strncpy(arr2, arr1, 4);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	char arr1[] = "degh";
//	char arr2[] = "bcdefx";
//	int ret = strncmp(arr1, arr2, 3);
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

//strtok
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	const char* p = "*.-";
//	char arr[] = "sukabulie*wula.wushi-baga";
//	char buf[50] = { 0 };
//	strcpy(buf,arr);
//	char* str = strtok(buf, p);//sukabulie
//	printf("%s\n", str);
//	str = strtok(NULL, p);//wula
//	printf("%s\n", str);
//	str = strtok(NULL, p);//wushi
//	printf("%s\n", str);
//	str = strtok(NULL, p);//baga
//	printf("%s\n", str);
//	return 0;
//}

//�Ľ�
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	const char* p = "*.-";
//	char arr[] = "sukabulie*wula.wushi-baga";
//	char buf[50] = { 0 };
//	strcpy(buf, arr);
//	for (char* str = strtok(buf, p); str != NULL; str = strtok(NULL, p))
//	{
//		printf("%s\n",str);
//	}
//	return 0;
//}

//strerror ���ش�����Ĵ�����Ϣ
//#include <stdio.h>
//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}

//memcpy
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[5] = { 0 };
//	/*memcpy(arr2,arr1,5*sizeof(arr2[0]));*/
//	memcpy(arr1 + 2, arr1, 5 * sizeof(arr1[0]));
//	int i = 0;
//	for (i=0;i<9;i++)
//	{
//		printf("%d\n",arr1[i]);
//	}
//	return 0;
//}

//ģ��ʵ��memcpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void*src, size_t num)
//{
//	void* ret = dest;   //����Ҫ���ص���ʼ��ַ
//	assert(dest&&src);
//	while (num--)       //��ʹ�ú�--��һ���ֽ�һ���ֽڵĸ���
//	{
//		*(char*)dest = *(char*)src;//ǿ������ת������ʱ��
//		dest = (char*)dest+1;     //��˸ı��ַʱҲҪǿ������ת��
//		src = (char*)src+1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[5] = { 0 };
//	//my_memcpy(arr2, arr1, 5 * sizeof(arr2[0]));
//	my_memcpy(arr1+2, arr1, 5 * sizeof(arr1[0]));
//	int i = 0;
//	for (i = 0; i<9; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}


//memmove
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void* my_memmove(void* dest,const void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	if (dest < src) //ǰ���
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = *(char*)dest+1;
//			src = *(char*)src + 1;
//		}
//	}
//	else   //����ǰ
//	{
//		while (num--)
//		{
//			*((char*)dest+num)=*((char*)src + num);   //����ͼ������
//		}
//	}
//
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[5] = { 0 };
//	my_memmove(arr1 + 2, arr1, 5 * sizeof(arr1[0]));
//	int i = 0;
//	for (i = 0; i<9; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}

//memcmp

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1,2,7,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	int ret = memcmp(arr1, arr2, 9);
//
//	printf("%d\n", ret);
//	return 0;
//}

//memset
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[20] = { 0 };
	memset(arr, 'x', 10);
	return 0;
}