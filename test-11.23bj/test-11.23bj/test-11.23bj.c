#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 8;
//	int b = 5;
//	int c = 0;
//	c = a%b;
//	printf("%d\n",c);
//	return 0;
//}

//移位操作符
//左移
//#include <stdio.h>
//int main()
//{
//	//int a = 3;
//	int a = -3;
//	int b=a << 1;
//	printf("%d\n",b);
//	return 0;
//}
//原码->反码符号位不变

//右移
//#include <stdio.h>
//int main()
//{
//	int a = -1;
//	int b=a >> 1;
//	printf("%d\n",b);
//	return 0;
//}


//按位操作符
//&  两1取1 有0取0
//#include <stdio.h>
//int main()
//{
//	int a = -3;
//	int b = 5;
//	int c = a&b;
//	printf("%d\n",c);
//	return 0;
//}

//| 有1取1，无1取0
//#include <stdio.h>
//int main()
//{
//	int a = -3;
//	int b = 5;
//	int c = a|b;
//	printf("%d\n", c);
//	return 0;
//}

// ^ 相同为0 相异为1
//#include <stdio.h>
//int main()
//{
//	int a = -3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//复合运算符
//#include <stdio.h>
//int main()
//{
//	int a = -3;
//	int b = 5;
//	a += b;
//	printf("%d\n", a);
//	return 0;
//}

//& 取地址
//#include <stdio.h>
//int main()
//{
//	int b = 5;
//	printf("%p\n",&b);
//	return 0;
//}

//sizeof  求字节大小
//#include <stdio.h>
//int main()
//{
//	int a = -10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);       //这样写行不行？
//	return 0;
//}

//前置++和--
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int x = ++a;
//	//先对a进行自增，然后对使用a，也就是表达式的值是a自增之后的值。x为11。
//	int y = --a;
//	//先对a进行自减，然后对使用a，也就是表达式的值是a自减之后的值。y为10;
//	return 0;
//}

//后置++和--
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int x = a++;
//	//先对a先使用，再增加，这样x的值是10；之后a变成11；
//	int y = a--;
//	//先对a先使用，再自减，这样y的值是11；之后a变成10；
//	return 0;
//}

//* 解引用操作符
//#include <stdio.h>
//int main()
//{
//	int a = -10;
//	int* p = &a;
//	*p = 5;
//	printf("%d\n",a);
//	return 0;
//}


//sizeof和数组
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//按位与，按位或
//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	if (a > 6 && a < 8)
//	{
//		printf("AA\n");
//	}
//	else
//		printf("BB\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	if (a > 1 || a < 3)
//	{
//		printf("AA\n");
//	}
//	else
//		printf("BB\n");
//	return 0;
//}

//条件操作符
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a>b?a:b);
//	printf("%d\n",max);
//	return 0;
//}

//逗号表达式
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//下标引用操作符
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
//	printf("%d\n", arr[2]);
//	return 0;
//}

//函数调用操作符
//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();            //（）为函数调用操作符。
//	return 0;
//}

//访问结构体成员
//#include <stdio.h>
//
//struct book
//{
//	int price;
//	char name[20];
//};
//
//int main()
//{
//	struct book b1 = {30,"c语言"};
//	struct book*p = &b1;
//	printf("%s\n",p->name);
//	return 0;
//}


//强制类型转换
//#include <stdio.h>
//int main()
//{
//	int a = 50;
//	int b = 14;
//	double ave = 0;
//	ave = (double)a / b;
//	printf("%lf\n",ave);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	while (~scanf("%d %d", &A, &B))
//	{
//		if (A<B)
//		{
//			int temp = 0;
//			temp = B;
//			B = A;
//			A = temp;
//		}
//		if (A%B)
//			printf("%d\n", A*B);
//		else
//		{
//			printf("%d\n", A);
//		}
//	}
//	return 0;
//}