#define _CRT_SECURE_NO_WARNINGS
//ͨѶ¼
//���Դ��1000������Ϣ
//�˵���Ϣ���Ա���������绰סַ
//�˵���ӡ
//1.������ϵ��
//2.ɾ����ϵ��
//3.������ϵ��(�޸�)
//4.����������ϵ��
//5.չʾ
//6.���



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
	Contact con;//ͨѶ¼
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		char name[name_Max];
		menu();
		printf("��ѡ��->");
		scanf("%d",&input);
		switch (input)
		{
		case Add:
			//������Ϣ
			AddContact(&con);
			break;
		case Del:
			//ɾ��
			DeletContact(&con);
			break;
		case Serch:
			printf("������Ҫ�����˵����֣�");
			scanf("%s", name);
			FindByname(&con,name);
			break;
		//case 4:
		//	//�޸�
		//	Modify(&con);
		//	break;
		case Sort:
			Sortname(&con);
			break;
		case Show:
			//��ʾ
			ShowContact(&con);
			break;
		case Clear:
			ClearContact(&con);
			break;
		case Exit:
			printf("�˳�ͨѶ¼\n");
			break;
		dafault:
			break;
		}
	} while (input);
}