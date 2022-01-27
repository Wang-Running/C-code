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


int FindByname(Contact*pc, char name[])
{
	int i = 0;
	for (i = 0;i<pc->sz;i++)
	{
		if (strcmp(pc->data[i].name, name)==0)
		{
			int put = 0;
			printf("%-10s\t%-5d\t%-5s\t%-15s\t%-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].addr, pc->data[i].phone);
			printf("������\n��ѡ���Ƿ��޸ģ�1.��   0.��\n");
			scanf("%d",&put);
			if (1 == put)
			{
				Modify(pc->data,i);
			}
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


//name����
int cmp_int(const void*e1,const void*e2)
{
	return (strcmp(((Peoinfo*)e1)->name, ((Peoinfo*)e2)->name));
}

void Sortname(Contact* pc)
{
	qsort(pc->data,pc->sz,sizeof(pc->data[0]),cmp_int);
	ShowContact(pc);
}

//�޸�
void Modify(Contact* pc,int i)
{
	int bud = 0;
	do
	{
		printf("��ѡ����Ҫ�޸ĵ�����\n1.����     2.����     3.�Ա�     4.��ַ     5.�绰     0.ȡ��\n�����룺");
		scanf("%d", &bud);
		switch (bud)
		{
			char chars[30] = { 0 };
		case 1:
		{
				  printf("����������->");
				  scanf("%s", chars);
				  strcpy(pc->data[i].name , chars);
		}
			break;
		case 2:
		{
				  int num = 0;
				  printf("����������->");
				  scanf("%d", &num);
				  pc->data[i].age = num;
		}
			break;
		case 3:
		{
				  printf("����������->");
				  scanf("%s", chars);
				  strcpy(pc->data[i].sex , chars);
		}
			break;
		case 4:
				  printf("����������->");
				  scanf("%s", chars);
				  strcpy(pc->data[i].addr , chars);
			break;
		case 5:
		{
				  printf("����������->");
				  scanf("%s", chars);
				  strcpy(pc->data[i].phone , chars);
		}
			break;
		dafault:
			break;
		}
	} while (bud);
}

//���������ϵ��
void Clear(Contact* pc)
{
	InitContact(pc);
}