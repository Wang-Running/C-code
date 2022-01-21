#define _CRT_SECURE_NO_WARNINGS

//字符串左旋
//
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB

//#include <stdio.h>
//#include <string.h>
//
//void leftRound(char arr[],int time,int sz)
//{
//	for (int i = 0;i<time;i++)   //旋转次数  一次旋转一个字母
//	{
//		int j = 0;
//		char p;
//		for (j = 0; j < sz-1; j++)  //旋转一个字母
//		{
//			p = arr[j];
//			arr[j] = arr[j+1];
//			arr[j + 1] = p;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[] = {'A','B','C','D'};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int time = 0;
//	scanf("%d", &time);
//	time %= sz;       //要旋转的字符个数
//	leftRound(arr,time,sz);
//	for (i = 0;i<sz;i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}


//杨氏矩阵
//
//作业内容
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//要求：时间复杂度小于O(N);

//#include <stdio.h>
//
//int findnum(int a[][3], int x, int y, int f) //第一个参数的类型需要调整
//{
//	int i = 0, j = x - 1; //从右上角开始遍历
//
//	while (j >= 0 && i < y)
//	{
//		if (a[i][j] < f) //比我大就向下
//		{
//			i++;
//		}
//		else if (a[i][j] > f) //比我小就向左
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a[][3] = { { 1, 3, 5 },
//	               { 3, 5, 7 },
//	               { 5, 7, 9 } }; //一个示例
//
//	if (findnum(a, 3, 3, 8))
//	{
//		printf("It has been found!\n");
//	}
//	else
//	{
//		printf("It hasn't been found!\n");
//	}
//
//	return 0;
//}

//字符串旋转结果
//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC


#include <stdio.h>
#include <assert.h>
char* findRound(const char * src, char * find)
{
	assert(src);
	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src); //先拷贝一遍
	strcat(tmp, src); //再连接一遍
	return (char*)strstr(tmp, find); //看看找不找得到
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	scanf("%s %s",arr1,arr2);
	char* p;
	p = findRound(arr1, arr2);
	if (p!=NULL)
		printf("1\n");
	else
	{
		printf("0\n");
	}
	return 0;
}