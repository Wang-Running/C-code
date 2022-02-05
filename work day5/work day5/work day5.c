#define _CRT_SECURE_NO_WARNINGS

//输入1abcedf2df
//#include <stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))   //ASCII是否为奇数，大写换小写
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	} 
//	printf("\n");
//	return 0;
//}

//JZ53 数字在升序数组中出现的次数
//暴力求解
//* @param data int整型一维数组
//* @param dataLen int data数组长度
//* @param k int整型
//* @return int整型
//*
//* C语言声明定义全局变量请加上static，防止重复定义
//* /
//int GetNumberOfK(int* data, int dataLen, int k) {
//	// write code here
//	int count = 0;
//	for (int i = 0; i<dataLen; i++)
//	{
//		if (*data == k)
//		{
//			count++;
//		}
//		data++;
//	}
//	return count;
//}