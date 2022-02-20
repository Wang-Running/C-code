//����
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <stdlib.h>

#define Max 1000
#define name_Max 20
#define sex_Max 5
#define addr_Max 30
#define phone_Max 12

#define DEFAULT_SZ 3

//�ṹ���˵���Ϣ
typedef struct Peoinfo
{
	char name[name_Max];
	int age;
	char sex[sex_Max];
	char addr[addr_Max];
	char phone[phone_Max];
}Peoinfo;

//�ṹ��ͨѶ¼����Ϣ
typedef struct Contact
{
	//Peoinfo data[MAX]; 
	Peoinfo* data;//�������
	int sz;  //ͨѶ¼����Ч��Ϣ�ĸ����������м����ˣ�
	int capacity;//��ǰͨѶ¼���������
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//����ͨѶ¼
void DestoryContact(Contact* pc);

//������Ϣ��ͨѶ¼
void AddContact(Contact* pc);

//չʾ��Ϣ
void ShowContact(const Contact* pc);

//ɾ��
void DeletContact(Contact* pc);

//����
int FindByname(const Contact*pc, char name[]);

//��������
void Sortname(Contact* pc);


//�޸�
void Modify(Contact* pc, int i);

//���������ϵ��
void ClearContact(Contact* pc);