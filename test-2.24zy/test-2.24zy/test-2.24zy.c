#define _CRT_SECURE_NO_WARNINGS
//交换奇偶位
//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//#define Swap(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)
//以5为例

//5 00000000 00000000 00000000 00000101
//& 01010101 01010101 01010101 01010101
//奇00000000 00000000 00000000 00000101
//左移变偶数位
//  00000000 00000000 00000000 00001010
//
//5 00000000 00000000 00000000 00000101
//& 10101010 10101010 10101010 10101010
//偶00000000 00000000 00000000 00000000
//右移变奇数位
//  00000000 00000000 00000000 00000000
//
//  00000000 00000000 00000000 00000000
//或|
//  00000000 00000000 00000000 00001010
//
//  00000000 00000000 00000000 00001010
//交换成功=10
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


//offsetof宏
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
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