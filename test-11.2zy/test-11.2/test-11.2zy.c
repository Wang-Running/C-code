#define _CRT_SECURE_NO_WARNINGS
//递归方式实现打印一个整数的每一位
#include <stdio.h>

int DY(int n)
{
	if (n > 9)
		DY(n / 10);
	printf("%d ",n%10);
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	DY(a);
	return 0;
}