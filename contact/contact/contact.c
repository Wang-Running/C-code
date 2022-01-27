#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

//��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data,0,sizeof(pc->data));   //�������ʼ��Ϊ0
}

//������Ϣ
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz==Max)
	{
		printf("ͨѶ¼���ˣ��޷����\n");
		return 0;
	}
	//������Ϣ
	printf("���������֣�");
	scanf("%s",pc->data[pc->sz].name);  //���ӵ���ϢӦ����ԭ��Ч��Ϣλ�ú���pc->szָ���Ӧλ��
	printf("���������䣺");
	scanf("%d", &(pc->data[pc->sz].age)); //age�Ǹ�������ע����Ҫȡ��ַ
	printf("�������Ա�");
	scanf("%s", pc->data[pc->sz].sex);
	printf("�������ַ��");
	scanf("%s", pc->data[pc->sz].addr);
	printf("������绰��");
	scanf("%s", pc->data[pc->sz].phone);

	pc->sz++;    //Ԫ�ظ�����һ
	printf("��ӳɹ�\n");
}

//չʾ��Ϣ
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-15s\t%-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].addr, pc->data[i].phone);
		//�Ӹ�������룬��/tͳһÿ��Ԫ�ؼ�ľ���
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
			printf("������\n");
			return i;
		}
	}
	printf("û�ҵ�\n");
	return -1;
}

//ɾ����Ϣ
void DeletContact(Contact* pc)
{
	char name[name_Max];
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	printf("������Ҫɾ���˵����֣�");
	scanf("%s",name);
	//ʵ�ֲ��Һ���
	int pos=FindByname(pc,name); //���ҵ������±꣬�Ҳ����򷵻�-1
	if (pos==-1)
	{
		printf("�޴���\n");
	}
	else
	{
		//ɾ��--Ҫɾ��Ԫ�غ����Ԫ��������ǰ����
		int j = 0;
		for (j = pos;j<pc->sz-1;j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}


//����
int cmp_int(const void*e1,const void*e2)
{
	return (strcmp(((Peoinfo*)e1)->name, ((Peoinfo*)e2)->name));
}

void sortname(Contact* pc)
{
	qsort(pc->data,pc->sz,sizeof(pc->data[0]),cmp_int);
	ShowContact(pc);
}