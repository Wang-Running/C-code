//声明
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define Max 1000
#define name_Max 20
#define sex_Max 5
#define addr_Max 30
#define phone_Max 12

//结构体人的信息
typedef struct Peoinfo
{
	char name[name_Max];
	int age;
	char sex[sex_Max];
	char addr[addr_Max];
	char phone[phone_Max];
}Peoinfo;

//结构体通讯录的信息
typedef struct Contact
{
	Peoinfo data[1000]; //存放数据
	int sz;  //通讯录中有效信息的个数（里面有几个人）
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加信息到通讯录
void AddContact(Contact* pc);

//展示信息
void ShowContact(const Contact* pc);

//删除
void DeletContact(Contact* pc);

//查找
int FindByname(const Contact*pc, char name[]);

//名字排序
void Sortname(Contact* pc);


//修改
void Modify(Contact* pc, int i);

//清空所有联系人
void ClearContact(Contact* pc);