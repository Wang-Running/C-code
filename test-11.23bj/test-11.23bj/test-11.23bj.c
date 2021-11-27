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
#include <stdio.h>
int main()
{
	int a = -3;
	int b = 5;
	int c = a&b;
	printf("%d\n",c);
	return 0;
}