#define _CRT_SECURE_NO_WARNINGS
//通讯录
//1.可以存放1000个人信息
//2.人的信息：性别名字年龄电话住址
//3.增加联系人
//4.删除联系人
//5.查找联系人
//6.修改联系人
//7.排序（名字/年龄）

//菜单打印


#include "contact.h"
void menu()
{
	printf("***************************\n");
	printf("***  1.add    2.del     ***\n");
	printf("***  3.serch  4.modify  ***\n");
	printf("***  5.sort   6.show    ***\n");
	printf("***      0.exit         ***\n");
	printf("***************************\n");
}

int main()
{
	int input = 0;
	Contact con;//通讯录
	InitContact(&con);//初始化通讯录
	do
	{
		char name[name_Max];
		menu();
		printf("请选择->");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			//增加信息
			AddContact(&con);
			break;
		case 2:
			//删除
			DeletContact(&con);
			break;
		case 3:
			printf("请输入要查找人的名字：");
			scanf("%s", name);
			FindByname(&con,name);
			break;
		case 4:
			break;
		case 5:
			sortname(&con);
			break;
		case 6:
			//显示
			ShowContact(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		dafault:
			break;
		}
	} while (input);
}