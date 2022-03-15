#define _CRT_SECURE_NO_WARNINGS
#include "test-SeqList.h"

void menu()
{
	printf("******************************\n");
	printf("** 1.β������ ** 2.ͷ������ **\n");
	printf("** 3.βɾ���� ** 4.ͷɾ���� **\n");
	printf("** 5.�̶����� ** 6.�̶�ɾ�� **\n");
	printf("** 7.�������� ** 8.��ӡ���� **\n");
	printf("**         0.�˳�           **\n");
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
		printf("������ѡ��->:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ҫβ�������:");
			scanf("%d",&val);
			SLPushBack(&s,val);
			break;
		case 2:
			printf("��������Ҫͷ�������:");
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
			printf("��������Ҫ�����λ�ú�����:");
			scanf("%d %d",&pos ,&val);
			SLInsert(&s,pos,val);
			break;
		case 6:
			printf("��������Ҫɾ����λ��:");
			scanf("%d", &pos);
			SLErase(&s, pos);
			break;
		case 7:
			printf("������Ҫ���ҵ�����:");
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
			printf("����������\n");
			break;
		}
	} while (input);
	return 0;
}


////��ַ����
//SLInit(&s);
//SLPushBack(&s, 1);
//SLPushBack(&s, 2);
//SLPushBack(&s, 3);
//SLPushBack(&s, 4);
//SLPushBack(&s, 5);
//SLPrintf(&s);
//SLPopBack(&s);
//SLPrintf(&s);
////���ԣ����ָ��Ϊ��
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