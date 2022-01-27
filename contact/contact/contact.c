#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

//初始化通讯录
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data,0,sizeof(pc->data));   //将数组初始化为0
}

//增加信息
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz==Max)
	{
		printf("通讯录满了，无法添加\n");
		return 0;
	}
	//输入信息
	printf("请输入名字：");
	scanf("%s",pc->data[pc->sz].name);  //增加的信息应该在原有效信息位置后，用pc->sz指向对应位置
	printf("请输入年龄：");
	scanf("%d", &(pc->data[pc->sz].age)); //age是个变量，注意需要取地址
	printf("请输入性别：");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入地址：");
	scanf("%s", pc->data[pc->sz].addr);
	printf("请输入电话：");
	scanf("%s", pc->data[pc->sz].phone);

	pc->sz++;    //元素个数加一
	printf("添加成功\n");
}

//展示信息
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-15s\t%-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].addr, pc->data[i].phone);
		//加负号左对齐，加/t统一每个元素间的距离
	}
}


int FindByname(const Contact*pc, char name[])
{
	int i = 0;
	for (i = 0;i<pc->sz;i++)
	{
		if (strcmp(pc->data[i].name, name)==0)
		{
			printf("%-10s\t%-5d\t%-5s\t%-15s\t%-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].addr, pc->data[i].phone);
			printf("找着了\n");
			return i;
		}
	}
	printf("没找到\n");
	return -1;
}

//删除信息
void DeletContact(Contact* pc)
{
	char name[name_Max];
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
	}
	printf("请输入要删除人的名字：");
	scanf("%s",name);
	//实现查找函数
	int pos=FindByname(pc,name); //若找到返回下标，找不到则返回-1
	if (pos==-1)
	{
		printf("无此人\n");
	}
	else
	{
		//删除--要删除元素后面的元素依次向前覆盖
		int j = 0;
		for (j = pos;j<pc->sz-1;j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}


//排序
int cmp_int(const void*e1,const void*e2)
{
	return (strcmp(((Peoinfo*)e1)->name, ((Peoinfo*)e2)->name));
}

void sortname(Contact* pc)
{
	qsort(pc->data,pc->sz,sizeof(pc->data[0]),cmp_int);
	ShowContact(pc);
}