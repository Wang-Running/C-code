#define _CRT_SECURE_NO_WARNINGS
//�Ӵ�С���
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������
//#include <stdio.h>
//int main()
//{
//	int i = 100;
//	while (i > 0)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i--;
//	}
//	return 0;
//}

//���������������������������Լ��
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	int r = 0;
//	int n = 0;
//	scanf("%d %d",&a,&b);
//	if (b < a)
//	{
//		temp = b;
//		b = a;
//		a = temp;      //�Ŵ�С
//	}
//	while (a != 0)     //�ж������Ƿ�Ϊ0
//	{
//		r = b%a;      //������շת�����
//		n = a;
//		a = r; 
//	}
//	printf("%d\n",n);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//1.�ܱ�4�����Ҳ��ܱ�100����Ϊ����
//2.�ܱ�400����Ϊ����
//#include <stdio.h>
//int main()
//{
//	int i = 1000;
//	while (i <= 2000)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;      //��������������������� 
		}
		if (j >= i)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}
