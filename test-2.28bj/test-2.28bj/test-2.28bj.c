#define _CRT_SECURE_NO_WARNINGS
//Ԥ�������
//__FILE__ //���б����Դ�ļ�
//__LINE__ //�ļ���ǰ���к�
//__DATE__ //�ļ������������
//__TIME__ //�ļ��������ʱ��
//__STDC__ //�����������ѭANSI C����ֵΪ1������δ����
//#include <stdio.h>
//int main()
//{
//	printf("%s\n",__FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//#define�����ʶ��
//#define M 50
//#include <stdio.h>
//int main()
//{
//	printf("%d\n",M);
//	return 0;
//}

//#define M 5+2
//#include <stdio.h>
//int main()
//{
//	int ret = 3 * M;
//	printf("%d\n", ret);
//	return 0;
//}

//#define�����
//#define ���ư�����һ���涨������Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ�꣨macro����
//��꣨define macro����
//#define Max(x,y) x>y?x:y
//#include <stdio.h>
//int main()
//{
//	int max = Max(8,10);
//	printf("%d\n",max);
//	return 0;
//}

//#define �滻����
//�ַ����б�ʶ�����ᱻ����
//#define N 100
//#define Max(x,y) x>y?x:y
//#include <stdio.h>
//int main()
//{
//	int max = Max(8,10);
//	printf("N=%d\n",max);
//	return 0;
//}

//#���÷�
//#define PRINT(n) printf("the value of "#n" is %d\n",n)
//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	PRINT(a);
//	int b = 50;
//	PRINT(b);
//	return 0;
//}

//##���÷�
//#define CAT(B,a) B##a
//#include <stdio.h>
//int main()
//{
//	int Bossage = 50;
//	printf("%d\n",CAT(Boss,age));
//	return 0;
//}

//�������õĺ����
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a+1;//b=2;a=1
//	int b = ++a;//b=2;a=2
//	return 0;
//}
//#define MAX(x,y) ((x)>(y)?(x):(y))
//#include <stdio.h>
//int main()
//{
//	int a = 4;
//	int b = 6;
//	int max = MAX(a++,b++);
//	printf("%d\n",max);
//	printf("%d %d\n",a,b);
//	return 0;
//}

//#undef�����Ƴ�һ���궨��
//#define MAX(x,y) ((x)>(y)?(x):(y))
//#include <stdio.h>
//int main()
//{
//	int a = 4;
//	int b = 6;
//#undef MAX
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//��������
//#define __DEBUG__ 0
//#include <stdio.h>
//int main()
//{
//#if __DEBUG__
//	printf("haha\n");
//#endif
//	return 0;
//}

//#define M 100
//#include <stdio.h>
//int main()
//{
//#if M<50
//	printf("haha\n");
//#elif m==50
//	printf("dalao\n");
//#else
//	printf("cuowu\n");
//#endif
//	return 0;
//}

//�ж��Ƿ񱻱���
//#define M 100
//#include <stdio.h>
//int main()
//{
//#if !defined(M)
//	printf("haha\n");
//#endif
//	return 0;
//}

//Ƕ��ָ��
//#if defined(OS_UNIX)
//   #ifdef OPTION1
//     unix_version_option1();
//   #endif
//   #ifdef OPTION2
//     unix_version_option2();
//   #endif
//#elif defined(OS_MSDOS)
//   #ifdef OPTION2
//     msdos_version_option2();
//   #endif
//#endif

//������
//int isPalindrome(int x){
//	if (x >= 0)
//	{
//		int count = 0;
//		int arr[10000] = { 0 };
//		while (x)
//		{
//			arr[count] = x % 10;
//			x /= 10;
//			count++;
//		}
//		int left = 0;
//		int right = count - 1;
//		while (left < right)
//		{
//			if (arr[left] != arr[right])
//			{
//				return 0;
//			}
//			left++;
//			right--;
//		}
//		return 1;
//	}
//	else
//		return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", isPalindrome(n));
//	return 0;
//}