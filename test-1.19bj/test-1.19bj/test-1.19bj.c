#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = -10;
//
//	return 0;
//}

//判断编译器是大端存储还是小端存储
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	char* p= (char*)&a;
//	if (*p==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//分析浮点数在内存中的存储
//博客链接：https://blog.csdn.net/weixin_53316121/article/details/121707424
#include <stdio.h>
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}