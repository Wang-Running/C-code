#define _CRT_SECURE_NO_WARNINGS
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include <stdio.h>

int DY(int n)
{
	if (n > 9)
		DY(n / 10);
	printf("%d ",n%10);
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	DY(a);
	return 0;
}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int z = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		z = z*i;
//	}
//	printf("%d",z);
//	return 0;
//}

//#include <stdio.h>
//int JC(int i)
//{
//	if (i > 1)
//		return i*JC(i - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=JC(n);
//	printf("%d",ret);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[] = "abc";
//	int z = 0;
//	z = strlen(ch);   //strlen�����ַ�������
//	printf("%d",z);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch[] = "abcdjnfsdj";
//	int count=0;
//	int i = 0;
//	while (ch[i] != '\0')   //�±��0��ʼ
//	{
//		i++;                 //û����'\0'�������±�����1
//		count++;              //count���������±�ͬ��
//	}
//	printf("%d",count);
//	return 0;
//}

//������ʽ
//#include <stdio.h>
//int is_strlen(char *ch)
//{
//	int count=0;
//	while (*ch != '\0')   //�±��0��ʼ
//	{
//		ch++;                 //û����'\0'�������±�����1
//		count++;              //count���������±�ͬ��
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdjnfsdj";
//	int len=is_strlen(ch);
//	printf("%d", len);
//	return 0;
//}

//�����ݹ�
//#include <stdio.h>
//int is_strlen(char *ch)
//{
//	if (*ch == '\0')
//		return 0;
//	else
//		return 1 + is_strlen(ch + 1);
//}
//int main()
//{
//	char ch[] = "abcdjnfsdj";
//	int len = is_strlen(ch);
//	printf("%d", len);
//	return 0;
//}




//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�

//ʵ�֣��������ַ����е��ַ��������У����������ӡ��

//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//�ǵݹ�
//#include <stdio.h>
//void reverse_string(char * arr)
//{
//	char *left = arr;
//	char *right = arr+strlen(arr) - 1;
//	while (left < right)
//	{
//		char temp = 0;
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s",arr);
//	return 0;
//}


//�ݹ�д��
#include <stdio.h>
void reverse_string(char * arr)
{
	char left = *arr;
	char *right = arr + strlen(arr) - 1;
	char temp = *arr;
	*arr = *right;
	*right = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	*right = temp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

//���룺1729�������19
//#include <stdio.h>
//int DigitSum(unsigned n)
//{
//	int ret = 0;
//	if (n > 1)
//	{
//		ret = n % 10;
//		return ret + DigitSum(n / 10);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	unsigned n = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	sum=DigitSum(n);
//	printf("%d",sum);
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//#include <stdio.h>
//#include <math.h>
//int CF(int n,int k)
//{
//	if (k > 1)
//		return n*pow(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d %d",&n,&k);
//	sum=CF(n,k);
//	printf("%d",sum);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

//���磺

//���룺5  �����5

//���룺10�� �����55

//���룺2�� �����1

//1 1 2 3 5 8 13 21 34 55......

//�ǵݹ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	if (i < 3)
//		printf("1");
//	else
//
//	return 0;
//}

//�ݹ�

//#include <stdio.h>
//int fib(n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d",&i);
//	ret = fib(i);
//	printf("%d",ret);
//	return 0;
//}

//����
#include <stdio.h>
int fib(n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int i = 0;
	int ret = 0;
	scanf("%d", &i);
	ret = fib(i);
	printf("%d", ret);
	return 0;
}