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