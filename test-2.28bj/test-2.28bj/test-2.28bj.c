#define _CRT_SECURE_NO_WARNINGS
//预定义符号
//__FILE__ //进行编译的源文件
//__LINE__ //文件当前的行号
//__DATE__ //文件被编译的日期
//__TIME__ //文件被编译的时间
//__STDC__ //如果编译器遵循ANSI C，其值为1，否则未定义
//#include <stdio.h>
//int main()
//{
//	printf("%s\n",__FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//#define定义标识符
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

//#define定义宏
//#define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定
//义宏（define macro）。
//#define Max(x,y) x>y?x:y
//#include <stdio.h>
//int main()
//{
//	int max = Max(8,10);
//	printf("%d\n",max);
//	return 0;
//}

//#define 替换规则
//字符串中标识符不会被搜索
#define N 100
#define Max(x,y) x>y?x:y
#include <stdio.h>
int main()
{
	int max = Max(8,10);
	printf("N=%d\n",max);
	return 0;
}