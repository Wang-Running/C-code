#define _CRT_SECURE_NO_WARNINGS
//������żλ
//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
//#define Swap(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)
//��5Ϊ��

//5 00000000 00000000 00000000 00000101
//& 01010101 01010101 01010101 01010101
//��00000000 00000000 00000000 00000101
//���Ʊ�ż��λ
//  00000000 00000000 00000000 00001010
//
//5 00000000 00000000 00000000 00000101
//& 10101010 10101010 10101010 10101010
//ż00000000 00000000 00000000 00000000
//���Ʊ�����λ
//  00000000 00000000 00000000 00000000
//
//  00000000 00000000 00000000 00000000
//��|
//  00000000 00000000 00000000 00001010
//
//  00000000 00000000 00000000 00001010
//�����ɹ�=10
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int ret=Swap(n);
//		printf("%d",ret);
//	}
//	return 0;
//}


//offsetof��
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//���죺offsetof���ʵ��
#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
#include <stdio.h>
struct book
{
	int age;
	char name;
	double price;
	float bna;
};

int main()
{
	offsetof(struct book,price);
	printf("%d\n", offsetof(struct book, price));
	return 0;
}