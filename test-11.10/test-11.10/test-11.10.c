#define _CRT_SECURE_NO_WARNINGS
//汉诺塔问题
#include <stdio.h>

void Hanno(int n,char fir,char sec,char thi)
{
	if (1 == n)
		printf("%c->%c\n",fir,thi);
	else
	{
		Hanno(n - 1, fir, thi, sec);
		printf("%c->%c\n", fir, thi);
		Hanno(n - 1, sec, fir, thi);
	}
		return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);      //输入盘子数
	Hanno(n,'A','B','C');    //字符ABC分别为三个塔
	return 0;
}