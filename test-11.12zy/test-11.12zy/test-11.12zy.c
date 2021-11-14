#define _CRT_SECURE_NO_WARNINGS
//求两个数二进制中不同位的个数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int n = 0;
//	scanf("%d %d",&a,&b);
//	c = a^b;
//	while (c != 0)
//	{
//		n++;
//		c=c&(c - 1);
//	}
//	printf("%d",n);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d",(n>>i)&1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}



//写一个函数返回参数二进制中 1 的个数。
//#include <stdio.h>
//
//int NumberOf1(int n) {
//	int num = 0;
//	while (n)
//	{
//		num++;
//		n = n&(n - 1);
//	}
//	return num;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i=NumberOf1(n);
//	printf("%d\n",i);
//}




//不允许创建临时变量，交换两个整数的内容
//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 6;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d",a,b);
//	return 0;
//}

//判断整数奇偶
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	char ch = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		ch=i % 2 != 0 ? "Odd" : "Even";
//		printf("%s",ch);
//	}
//	return 0;
//}

//判断是元音还是辅音
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
//		{
//			printf("Vowel\n");
//		}
//		else
//			printf("Consonant\n");
//	}
//	return 0;
//}