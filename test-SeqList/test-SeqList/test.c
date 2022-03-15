#define _CRT_SECURE_NO_WARNINGS
#include "test-SeqList.h"

void menu()
{
	printf("******************************\n");
	printf("** 1.尾插数据 ** 2.头插数据 **\n");
	printf("** 3.尾删数据 ** 4.头删数据 **\n");
	printf("** 5.固定插入 ** 6.固定删除 **\n");
	printf("** 7.查找数据 ** 8.打印数据 **\n");
	printf("**         0.退出           **\n");
	printf("******************************\n");
}
int main()
{
	SL s;
	SLInit(&s);
	int input = 0;
	do
	{
		int val = 0;
		size_t pos = 0;
		menu();
		printf("请输入选项->:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入你要尾插的数据:");
			scanf("%d",&val);
			SLPushBack(&s,val);
			break;
		case 2:
			printf("请输入你要头插的数据:");
			scanf("%d", &val);
			SLPushFront(&s, val);
			break;
		case 3:
			SLPopBack(&s);
			break;
		case 4:
			SLPopFront(&s);
			break;
		case 5:
			printf("请输入你要插入的位置和数据:");
			scanf("%d %d",&pos ,&val);
			SLInsert(&s,pos,val);
			break;
		case 6:
			printf("请输入你要删除的位置:");
			scanf("%d", &pos);
			SLErase(&s, pos);
			break;
		case 7:
			printf("请输入要查找的数据:");
			scanf("%d",&val);
			int num=SLFind(&s,val);
			printf("%d\n",num);
			break;
		case 8:
			SLPrintf(&s);
			break;
		case 0:
			SLDestory(&s);
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}


////传址调用
//SLInit(&s);
//SLPushBack(&s, 1);
//SLPushBack(&s, 2);
//SLPushBack(&s, 3);
//SLPushBack(&s, 4);
//SLPushBack(&s, 5);
//SLPrintf(&s);
//SLPopBack(&s);
//SLPrintf(&s);
////断言，检查指针为空
////	SLPrintf(NULL);
//SLPushFront(&s, 10);
//SLPushFront(&s, 9);
//SLPrintf(&s);
//SLPopFront(&s);
//SLPrintf(&s);
//SLInsert(&s, 0, 5);
//SLPrintf(&s);
//SLErase(&s, 3);
//SLPrintf(&s);
//SLDestory(&s);