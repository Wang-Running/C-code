#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}
//  \\ ��ʾ�ַ�'\'��\123��ʾ�ַ�'{'��\t��ʾ�Ʊ������Щ����һ���ַ�



//#include <stdio.h>
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	printf("%d\n", NUM);    //8,��ֻ���滻���滻��NUM��������(2+1+1)*2+1/2�������8
//	return 0;
//}

//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);   //  7  ��̬�ֲ�����i
//}

//��֤��Ƴ�˹���������κ�һ������m������������д��m����������֮�͡�
//����һ��������m��m��100������m������д��m����������֮�͵���ʽ�����
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int m, sum, i;
//	while (scanf("%d", &m) != EOF)
//	{
//		sum = pow(m, 3);
//		for (i = 0; i<10000; i++)
//		{
//			//if (i == m*m + 1 - m)
//			if (i == (sum-m*m+m)/m)     //����������
//			{
//				int j = 0;
//				for (j = 0; j<m - 1; j++)
//				{
//					printf("%d+", i + 2 * j);
//				}
//				printf("%d\n", i + 2 * j);
//			}
//		}
//	}
//	return 0;
//}

//�Ȳ����� 2��5��8��11��14��������
//���� 2 ��ʼ�� 3 Ϊ����ĵȲ����У�
//�����Ȳ�����ǰn���
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n)!=EOF)
//	{
//		int d = 3;
//		int a1 = 2;
//		int sum = n*a1 + (n*(n - 1)*d) / 2;
//		printf("%d\n",sum);
//	}
//	return 0;
//}


