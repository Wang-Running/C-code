#define _CRT_SECURE_NO_WARNINGS
//ͨѶ¼
//1.���Դ��1000������Ϣ
//2.�˵���Ϣ���Ա���������绰סַ
//3.������ϵ��
//4.ɾ����ϵ��
//5.������ϵ��(�޸�)
//6.����������ϵ��
//7.չʾ
//8.���
//�˵���ӡ


#include "contact.h"
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
		case 1:
			//������Ϣ
			AddContact(&con);
			break;
		case 2:
			//ɾ��
			DeletContact(&con);
			break;
		case 3:
			printf("������Ҫ�����˵����֣�");
			scanf("%s", name);
			FindByname(&con,name);
			break;
		//case 4:
		//	//�޸�
		//	Modify(&con);
		//	break;
		case 4:
			Sortname(&con);
			break;
		case 5:
			//��ʾ
			ShowContact(&con);
			break;
		case 6:
			Clear(&con);
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		dafault:
			break;
		}
	} while (input);
}