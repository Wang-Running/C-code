#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}

////变种1
//#include <stdio.h>
//int main()
//{
//	for (;;)
//		printf("hehe\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i <3; i++)
	{
		printf("请输入密码 ");
		scanf("%s", &password);
		if (strcmp(password ,"123456")==0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("登陆成功\n ");
			break;
		}
		else
			printf("登陆失败\n");
	}
	if (i == 3)
		printf("三次均登陆失败，请退出程序\n");
	return 0;
}