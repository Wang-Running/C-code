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
//#define N 100
//#define Max(x,y) x>y?x:y
//#include <stdio.h>
//int main()
//{
//	int max = Max(8,10);
//	printf("N=%d\n",max);
//	return 0;
//}

//#的用法
//#define PRINT(n) printf("the value of "#n" is %d\n",n)
//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	PRINT(a);
//	int b = 50;
//	PRINT(b);
//	return 0;
//}

//##的用法
//#define CAT(B,a) B##a
//#include <stdio.h>
//int main()
//{
//	int Bossage = 50;
//	printf("%d\n",CAT(Boss,age));
//	return 0;
//}

//带副作用的宏参数
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a+1;//b=2;a=1
//	int b = ++a;//b=2;a=2
//	return 0;
//}
//#define MAX(x,y) ((x)>(y)?(x):(y))
//#include <stdio.h>
//int main()
//{
//	int a = 4;
//	int b = 6;
//	int max = MAX(a++,b++);
//	printf("%d\n",max);
//	printf("%d %d\n",a,b);
//	return 0;
//}

//#undef用于移除一个宏定义
//#define MAX(x,y) ((x)>(y)?(x):(y))
//#include <stdio.h>
//int main()
//{
//	int a = 4;
//	int b = 6;
//#undef MAX
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//条件编译
//#define __DEBUG__ 0
//#include <stdio.h>
//int main()
//{
//#if __DEBUG__
//	printf("haha\n");
//#endif
//	return 0;
//}

//#define M 100
//#include <stdio.h>
//int main()
//{
//#if M<50
//	printf("haha\n");
//#elif m==50
//	printf("dalao\n");
//#else
//	printf("cuowu\n");
//#endif
//	return 0;
//}

//判断是否被编译
//#define M 100
//#include <stdio.h>
//int main()
//{
//#if !defined(M)
//	printf("haha\n");
//#endif
//	return 0;
//}

//嵌套指令
//#if defined(OS_UNIX)
//   #ifdef OPTION1
//     unix_version_option1();
//   #endif
//   #ifdef OPTION2
//     unix_version_option2();
//   #endif
//#elif defined(OS_MSDOS)
//   #ifdef OPTION2
//     msdos_version_option2();
//   #endif
//#endif

//回文数
//int isPalindrome(int x){
//	if (x >= 0)
//	{
//		int count = 0;
//		int arr[10000] = { 0 };
//		while (x)
//		{
//			arr[count] = x % 10;
//			x /= 10;
//			count++;
//		}
//		int left = 0;
//		int right = count - 1;
//		while (left < right)
//		{
//			if (arr[left] != arr[right])
//			{
//				return 0;
//			}
//			left++;
//			right--;
//		}
//		return 1;
//	}
//	else
//		return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", isPalindrome(n));
//	return 0;
//}