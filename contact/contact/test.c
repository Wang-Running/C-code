#define _CRT_SECURE_NO_WARNINGS
//通讯录
//可以存放1000个人信息
//人的信息：性别名字年龄电话住址
//菜单打印
//1.增加联系人
//2.删除联系人
//3.查找联系人(修改)
//4.名字排序联系人
//5.展示
//6.清空



#include "contact.h"

enum Oprion
{
	Exit,
	Add,
	Del,
	Serch,
	Sort,
	Show,
	Clear
};

void menu()
{
	printf("***************************\n");
	printf("***  1.add    2.del     ***\n");
	printf("***  3.serch  (modify)  ***\n");
	printf("***  4.sort   5.show    ***\n");
	printf("***  0.exit   6.clear   ***\n");
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
		case Add:
			//增加信息
			AddContact(&con);
			break;
		case Del:
			//删除
			DeletContact(&con);
			break;
		case Serch:
			printf("请输入要查找人的名字：");
			scanf("%s", name);
			FindByname(&con,name);
			break;
		//case 4:
		//	//修改
		//	Modify(&con);
		//	break;
		case Sort:
			Sortname(&con);
			break;
		case Show:
			//显示
			ShowContact(&con);
			break;
		case Clear:
			ClearContact(&con);
			break;
		case Exit:
			printf("退出通讯录\n");
			break;
		dafault:
			break;
		}
	} while (input);
}