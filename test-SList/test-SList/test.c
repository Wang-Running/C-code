#define _CRT_SECURE_NO_WARNINGS
#include "test-SList.h"


//手动构建单链表
void TestSList1()
{
	SListNode* slist = NULL;
	SListNode* n1 = malloc(sizeof(SListNode));
	SListNode* n2 = malloc(sizeof(SListNode));
	SListNode* n3 = malloc(sizeof(SListNode));
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n1->next = n3;
	n3->next = n2;
	n2->next = NULL;
	slist = n1;

	SListPrint(slist);
}

void TestSList2()
{
	SListNode* slist = NULL;
	for (int i = 0;i<4;i++)
	{
		SListPushBack(&slist, i);
	}
	SListPrint(slist);
}
int main()
{
//	TestSList1();
	TestSList2();
	return 0;
}