#define _CRT_SECURE_NO_WARNINGS

//ʵ�ֽǶȵļӼ�����

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
	printf("�ǶȺ�Ϊ: %d %d\n", e, f);
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

	printf("�ǶȲ�Ϊ: %d %d\n", e, f);
}
int main()
{
	int a, b, c, d;
	char ch = 0;
	printf("�����������Ƕ�:>\n");
	while (~scanf("%d %d %d %d", &a, &b, &c, &d))
	{
		scanf("%c", &ch);
		Add(a, b, c, d);
		Jian(a, b, c, d);
	}
	return 0;
}