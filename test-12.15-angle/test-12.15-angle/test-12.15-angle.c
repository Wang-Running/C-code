#define _CRT_SECURE_NO_WARNINGS

//实现角度的加减计算

#include <stdio.h>
void Add(int a, int b, int c, int d)
{
	int e = 0;
	int f = b + d;
	if (f >= 60)
	{
		e = a + c + 1;
		f -= 60;
	}
	else
	{
		e = a + c;
	}
	printf("角度和为: %d %d\n", e, f);
}

void Jian(int a, int b, int c, int d)
{
	int f = 0;
	int e = a - c;
		if (b < d)
		{
			e -= 1;
			f = b + 60 - d;
		}
		else
		{
			f = b - d;
		}

	printf("角度差为: %d %d\n", e, f);
}
int main()
{
	int a, b, c, d;
	char ch = 0;
	printf("请输入两个角度:>\n");
	while (~scanf("%d %d %d %d", &a, &b, &c, &d))
	{
		scanf("%c", &ch);
		Add(a, b, c, d);
		Jian(a, b, c, d);
	}
	return 0;
}