#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);    //300 44
//	return 0;
//}

//��С�˴洢
//#include <stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	return 0;
//}

//�������
//1

//1 1

//1 2 1

//1 3 3 1

//1 4 6 4 1

//����

//#include <stdio.h>
//
//void yangHuiTriangle(int n)
//{
//	int data[30] = { 1 };
//
//	int i, j;
//	printf("1\n"); //��һ�о�ֱ�Ӵ�ӡ��
//	for (i = 1; i < n; i++) //�ӵڶ��п�ʼ
//	{
//		for (j = i; j > 0; j--) //�Ӻ���ǰ�������һ�е�������ʹ��ǰ�ͱ�����
//		{
//			data[j] += data[j - 1]; //��ʽͬ�ϣ����ڱ����һά����ʽҲ����ˡ�
//		}
//
//		for (j = 0; j <= i; j++) //��һ�������ֱ�Ӵ�ӡ�ˡ�
//		{
//			printf("%d ", data[j]);
//		}
//		putchar('\n');
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	yangHuiTriangle(n);
//	return 0;
//}


//������
//����Ϊ4�����ɷ��Ĺ���:

//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
#include <stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	char *arr[] = {&A,&B,&C,&D};
	int j = 0;
	char a = 65;
	for (j=0;j<4;j++)
	{
		printf("%c:",a);
		int b=0;
		scanf("%d",&b);     //  1:������  2:��C   3:��D  4:C�ں�˵
		if (b == 1)
			*arr[j] = 1;
		else if (b == 2)
			*arr[j] = 1;
		else if (b == 3)
			*arr[j] = 1;
		else if (b == 4)
		{
			*arr[j] = 1;
			*arr[j - 1] = 0;
		}
		a++;
	}
	int i=0;
	while (*arr[i])        //�ж�i���ڼ�ʱ����Ϊ0
	{
		i++;
	}
	switch (i)
	{
		case 0:
			printf("AΪ����\n");
			break;
		case 1:
			printf("BΪ����\n");
			break;
		case 2:
			printf("CΪ����\n");
			break;
		case 3:
			printf("DΪ����\n");
			break;
	}
	return 0;
}