#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	//int arr[10] = {0};
//	//arr[4];// []-下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);// ()函数调用操作符
//	printf("%d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
	//auto int a = 10;//局部变量-自动变量，int前省略auto
	//register int a = 10;// register寄存器变量
	//int 定义的变量是有符号的
	//int=signed int
	//unsigned int 无符号变量，都算正数
	//struct-结构体关键字
	//union-联合体/共用体
	//typedef-类型定义-类型重定义
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//typedef-类型定义-类型重定义(改名卡)
//	typedef unsigned int u;
//	unsigned int num = 20;
//	u num2= 20;
//	return 0;
//}

#include <stdio.h>
//#include <string.h>
//结构体
//char int double……
//人=3.14
//‘w’
//书-复杂对象
//
//名字+身高+年龄+身份证……
//书名+作者+出版社+定价……
//复杂对象-结构体-我们自己创造出的一种类型
//struct-结构体关键字
//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型-创建一个该类型的变量
	struct Book b1 = {"C语言程序设计",55};
	 struct Book* pb=&b1;
	 strcpy (b1.name,"C++");//strcpy-srring copy 字符串拷贝
	 printf("%s\n",b1.name);
//.	 结构体变量.成员
//->	结构体指针->成员
	 //printf("%s\n",pb->name);
	 //printf("%d\n",pb->price);
	 //printf("书名=%s\n",(*pb).name);
	 //printf("%d\n",(*pb).price);
	//printf("书名：%s\n",b1.name);
	//printf("价格：%d\n",b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d\n",b1.price);
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char *pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char *pc = &ch;
//	int a = 10;//4个字节
//	int* p=&a;//取出a的地址
//	//printf("%p\n",&a);
//	//printf("%p\n",p);
//	*p=20;//*解引用操作符
//	printf("%d\n",a);
//	//有一种变量是用来存放地址的-指针变量
//	//printf("%p\n",&a);
//	return 0;
//}
//define 定义标识符常量
//#define MAX 100
//define 定义宏-带参数
//函数的实现
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数方式
//	int max = MAX(a, b);
//	printf("max=%d\n",max);
//	//宏的方式
//	max = MAX(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}

//1.static 修饰局部变量
//局部变量生命周期变长
//2.static 修饰全局变量
//改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用
//3.static 修饰函数
//也是改变了函数的作用域--说法不准确
//static 修饰函数改变了函数的链接属性
//外部链接属性->内部链接属性

//int main()
//{
//	//extern 申明外部符号
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//	return 0;
//}

//声明外部函数
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d",sum);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static 静态 a变为静态局部变量
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

