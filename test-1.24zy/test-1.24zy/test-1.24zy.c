#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}*ps;
//
//int main()
//{
//	ps = &x;
//	return 0;
//}

//#include <stdio.h>
//
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//#include <stdio.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	struct S1 s1;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//#include <stdio.h>
//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));  // 6
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 20;
//	int _d : 25;
//};
//int main()
//{
//	struct S s = {0};
//	s._a = 10;
//	//printf("%d\n", sizeof(struct S));
//	return 0;
//}

//#include <stdio.h>
//enum Day  //星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri=6,
//	Sat,
//	Sun
//};
//int main()
//{
//	//enum Day d = Mon;   //定义一个变量，赋予{}内可能的取值。
//	enum Day d = Fri;
//	enum Day b = Sun;
//	b = 9;
//	printf("%d\n",d);
//	printf("%d\n", b);
//	return 0;
//}

//联合体共用同一块空间
//union Un
//{
//	int i;
//	char c;
//};
//union Un un;
//
//int main()
//{
//	//printf("%d\n", &(un.i));
//	//printf("%d\n", &(un.c));
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}

union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
//下面输出的结果是什么？
int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}