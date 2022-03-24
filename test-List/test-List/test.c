#define _CRT_SECURE_NO_WARNINGS
#include "List.h"

void test1()
{
	ListNode* List = NULL;
	ListInit(&List);
	ListPushBack(List,1);
	ListPushBack(List, 2);
	ListPushBack(List, 3);
	ListPushBack(List, 4);
	ListPopBack(List);
	ListNode* pos = ListFind(List,2);
	if (pos)
	{
		ListInsert(pos,20);
	}
	PrintList(List);
	printf("\n");
	if (pos)
	{
		ListErase(pos);
	}
	PrintList(List);
	printf("\n");
	ListPopFront(List);
	PrintList(List);
}



int main()
{
	test1();
	return 0;
}