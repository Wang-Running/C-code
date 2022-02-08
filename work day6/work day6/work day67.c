#define _CRT_SECURE_NO_WARNINGS
//牛客网题号： HJ34 图片整理
//输入描述：Lily使用的图片包括 "A" 到 "Z" 、 "a" 到 "z" 、 "0" 到 "9" 。输入字母或数字个数不超过 1024 。
//输出描述：Lily的所有图片按照从小到大(ASCII码)的顺序输出
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int cmp_int(void*e1, void*e2)
//{
//	return strcmp((char*)e1, (char*)e2);
//}
//int main()
//{
//	char arr[1000];
//	while (scanf("%s", arr) != EOF)
//	{
//		int ret = strlen(arr);
//		qsort(arr, ret, sizeof(arr[0]), cmp_int);
//		printf("%s", arr);
//	}
//	return 0;
//}

//递归倒序打印字符串
#include <stdio.h>

int main()
{
	char str[] = "Geneius";
	print(str);
	return 0;
}
print(char *s)
{
	if (*s)
	{
		print(++s);
		printf("%c", *s);
	}
}

//倒序打印，回不到第一个G的位置