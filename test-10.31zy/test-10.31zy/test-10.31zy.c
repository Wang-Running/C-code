#define _CRT_SECURE_NO_WARNINGS
//�ж�����
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������

//#include <stdio.h>
//#include <math.h>
//int is_prime(int i)
//{
//	int n = 0;
//	for (n = 2; n <=sqrt(i); n++)
//	{
//		if (i % n == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}

//ʵ�ֺ����ж�year�ǲ������ꡣ
//#include <stdio.h>
//int is_leap_y(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((is_leap_y(y)) == 1)
//			printf("%d ",y);
//	}
//	return 0;
//}

//ʵ��һ�������������������������ݡ�
//#include <stdio.h>
//void swap(int* x, int* y)    //�޷���ֵ��ַ����
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	swap(&a, &b);
//	printf("%d %d",a,b);
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
#include <stdio.h>
//int L = 0;
//for (L = 1; L <= H; L++)
//{
//	printf("%d*%d=%2d ", L, H, L*H);
//}
void BG(int* n)
{
	int H = 0;
	for (H = 1; H < *n + 1; H++)
	{
		int L = 0;
		for (L = 1; L <= H; L++)
		{
			printf("%d*%d=%2d ", L, H, L*H);
		}
		printf("\n");
	}
}

int main()
{
	int a = 0;
	scanf("%d",&a);
	BG(&a);
	return 0;
}