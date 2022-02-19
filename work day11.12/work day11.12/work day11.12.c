#define _CRT_SECURE_NO_WARNINGS

//day 11

// HJ56 完全数计算

//完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。
//它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。
//例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1 + 2 + 4 + 7 + 14 = 28。

//输入n，请输出n以内(含n)完全数的个数。

//#include <stdio.h>
//
//int Perfectnumber(int i)     //判断是否为完全数
//{
//	int sum = 0;
//	for (int j = 1; j<i; j++)  //从1开始<i,直接忽略i本身
//	{
//		if (i%j == 0)
//		{
//			sum += j;   //约数相加
//		}
//	}
//	if (sum == i)     //判断是否为完全数
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)  //多组输入
//	{
//		int count = 0;               //计数
//		for (int i = 1; i <= n; i++)  //大循环，判断从 1 到 n
//		{
//			int ret = Perfectnumber(i); //判断一个数是否为完全数，返回1或0
//			count += ret;               //是则计数+1
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}

//day 12

// HJ11 数字颠倒
//输入一个整数，将这个整数以字符串的形式逆序输出
//程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001

//输入一个int整数
//将这个整数以字符串的形式逆序输出
//#include <stdio.h>
//int main()
//{
//	int num;
//	while (~scanf("%d", &num)) 
//	{
//		if (num == 0) 
//		{
//			//0的情况特殊处理，因为0不会进入while循环计算余数，因此不会被打印
//			printf("%d", num % 10);
//			continue;
//		}
//			while(num > 0) 
//			{
//				printf("%d", num % 10);   //打印一个数字的个位数 129 % 10 得到9
//				num /= 10;   //通过除以10的方式去掉个位数 例如：129/10 得到12
//			}
//				printf("\n");
//	}
//		return 0;
//}

