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
//int main()
//{
//	int i = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d",&i);
//	for (i=0;i<10;i++)
//	{
//		int j = 0;
//		for (j = 0; j<=i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i>1&&j>0)
//				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

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
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int j = 0;
//	char a = 65;
//	for (j=0;j<4;j++)
//	{
//		printf("%c:",a);
//		char b=0;
//		scanf("%c",&b);
//		getchar();
//		if (b == 'a')          //a��ʾ��A
//			arr[j] = 1;
//		else if (b == 'C')
//			arr[j] = 1;
//		else if (b == 'D')
//			arr[j] = 1;
//		else if (b == 'd')   //d��ʾ��D
//		{
//			arr[j] = 1;
//			arr[j - 1] = 0;
//		}
//		a++;
//	}
//	int i=0;
//	while (arr[i])        //�ж�i���ڼ�ʱ����Ϊ0
//	{
//		i++;
//	}
//	switch (i)
//	{
//		case 0:
//			printf("AΪ����\n");
//			break;
//		case 1:
//			printf("BΪ����\n");
//			break;
//		case 2:
//			printf("CΪ����\n");
//			break;
//		case 3:
//			printf("DΪ����\n");
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	char *arr[] = { &A, &B, &C, &D };
//	int j = 0;
//	char a = 65;
//	for (j = 0; j<4; j++)
//	{
//		printf("%c:", a);
//		int b = 0;
//		scanf("%d", &b);     //  1:������  2:��C   3:��D  4:C�ں�˵
//		if (b == 1)
//			*arr[j] = 1;
//		else if (b == 2)
//			*arr[j] = 1;
//		else if (b == 3)
//			*arr[j] = 1;
//		else if (b == 4)
//		{
//			*arr[j] = 1;
//			*arr[j - 1] = 0;
//		}
//		a++;
//	}
//	int i = 0;
//	while (*arr[i])        //�ж�i���ڼ�ʱ����Ϊ0
//	{
//		i++;
//	}
//	switch (i)
//	{
//	case 0:
//		printf("AΪ����\n");
//		break;
//	case 1:
//		printf("BΪ����\n");
//		break;
//	case 2:
//		printf("CΪ����\n");
//		break;
//	case 3:
//		printf("DΪ����\n");
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int killer = 0;
//	//�ֱ����������a,b,c,d,��˭������ʱ����3����˵���滰��һ����˵�˼ٻ�
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("�����ǣ�%c", killer);
//	}
//	return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
		{
			for (c = 1;c<=5;c++)
			{
				for (d=1;d<=5;d++)
				{
					for (e = 1;e<=5;e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1)
							)
						{
							if (a*b*c*d*e==120)                             //���ظ�
							printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
						}
					}
				}
			}
		}
	}
	return 0;
}


//С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
//���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�
//��λ��i
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d",&n);
//	while (n)
//	{
//		m = n % 10;
//		n /= 10;
//		if (m % 2)
//			m = 1;
//		else
//			m = 0;
//		sum = sum + m*pow(10,i);
//		i++;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
//#include <stdio.h>
//
//int step(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return step(n-1)+step(n-2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n", step(n));
//	return 0;
//}