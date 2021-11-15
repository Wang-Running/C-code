#define _CRT_SECURE_NO_WARNINGS
//汉诺塔问题
#include <stdio.h>

void Hanno(int n,char fir,char sec,char thi)
{
	if (1 == n)
		printf("%c->%c\n",fir,thi);      //一个盘子直接转移
	else
	{
		Hanno(n - 1, fir, thi, sec);     //一个以上:  最大的留着 上面所有移到第二个
		printf("%c->%c\n", fir, thi);    //最大的直接转移
		Hanno(n - 1, sec, fir, thi);      //将第二个上的进行转移
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