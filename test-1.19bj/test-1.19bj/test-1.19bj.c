#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = -10;
//
//	return 0;
//}

//�жϱ������Ǵ�˴洢����С�˴洢
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	char* p= (char*)&a;
//	if (*p==1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//�������������ڴ��еĴ洢
//�������ӣ�https://blog.csdn.net/weixin_53316121/article/details/121707424
#include <stdio.h>
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}