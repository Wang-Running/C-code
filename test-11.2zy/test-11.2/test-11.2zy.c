#define _CRT_SECURE_NO_WARNINGS
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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