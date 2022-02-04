#define _CRT_SECURE_NO_WARNINGS
//OR141 密码检查
//1. 密码只能由大写字母，小写字母，数字构成；
//
//2. 密码不能以数字开头；
//
//3. 密码中至少出现大写字母，小写字母和数字这三种字符类型中的两种；
//
//4. 密码长度至少为8

//输入一个数n，接下来有n(n≤100)行，每行一个字符串，表示一个密码，输入保证字符串中只出现大写字母，小写字母和数字，字符串长度不超过100。
//
//输入n行，如果密码合法，输出YES，不合法输出NO
#include <stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n)) 
	{
		for (int i = 0; i < n; i++) 
		{
			char password[101] = { 0 };
			int upper = 0, lower = 0, digit = 0, other = 0;
			scanf("%s", password);//捕捉输入的密码
			if (strlen(password) < 8) 
			{//密码长度小于8
				printf("NO\n");
				continue;
			}
			if (password[0] >= '0' && password[0] <= '9') 
			{//密码以数字开头
				printf("NO\n");
				continue;
			}
			char *ptr = password;
			while (*ptr != '\0') 
			{ //统计各种字符个数
				if (*ptr >= 'a' && *ptr <= 'z') lower++;
				else if (*ptr >= 'A' && *ptr <= 'Z') upper++;
				else if (*ptr >= '0' && *ptr <= '9') digit++;
				else other++;
					ptr++;
			}
			if (other > 0) 
			{ // 有其他字符（注意：密码只能由数字和字母组成）
				printf("NO\n");
				continue;
			}
			//大写，小写，数字，必须具有两种以上，而比较运算真则1，假则0
			if ((upper>0) + (lower>0) + (digit>0) < 2) 
			{ // 密码只有一种字符
				printf("NO\n");
				continue;
			}
			printf("YES\n");
		}
	}
	return 0;
}