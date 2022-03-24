#define _CRT_SECURE_NO_WARNINGS
#include "test-SList.h"


//手动构建单链表
void TestSList1()
{
	SListNode* slist = NULL;
	SListNode* n1 = (SListNode*)malloc(sizeof(SListNode));
	SListNode* n2 = (SListNode*)malloc(sizeof(SListNode));
	SListNode* n3 = (SListNode*)malloc(sizeof(SListNode));
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n1->next = n3;
	n3->next = n2;
	n2->next = NULL;
	slist = n1;

	SListPrint(slist);
	SListNode* pos = SListFind(slist, 3);
	if (pos)
	{
		SListInsert(&slist,pos,30);
	}
	SListPrint(slist);
	SListErase(&slist,pos);
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
	SListNode* pos = SListFind(slist,3);
	if (pos)
	{
		printf("找到了:%p\n",pos);
		//修改
		pos->data *= 10;
	}
	SListPrint(slist);
}

void TestSList3()
{
	SListNode* slist = NULL;
	SListNode* n1 = (SListNode*)malloc(sizeof(SListNode));
	SListNode* n2 = (SListNode*)malloc(sizeof(SListNode));
	SListNode* n3 = (SListNode*)malloc(sizeof(SListNode));
	SListNode* n4 = (SListNode*)malloc(sizeof(SListNode));
	SListNode* n5 = (SListNode*)malloc(sizeof(SListNode));
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;
	n5->data = 5;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;
	slist = n1;
    //middleNode(slist);
	//SListPrint(slist);

}





struct ListNode* partition(struct ListNode* pHead, int x)
{
	if (pHead == NULL)
		return NULL;
	struct ListNode* n1 = NULL;
	struct ListNode* n2 = NULL;
	struct ListNode* cur = pHead;
	struct ListNode* tail1 = NULL;
	struct ListNode* tail2 = NULL;
	while (cur)
	{
		if (cur->val<x)
		{
			if (tail1 == NULL)
			{
				n1 = tail1 = cur;
			}
			else
			{
				tail1->next = cur;
				tail1 = cur;
			}
		}
		else
		{
			if (tail2 == NULL)
			{
				n2 = tail2 = cur;
			}
			else
			{
				tail2->next = cur;
				tail2 = cur;
			}
		}
		cur = cur->next;
	}
	if (n1)
	{
		tail1->next = n2;
		if (n2)
		{
			tail2->next = NULL;
		}
		return n1;
	}
	else
	{
		return n2;
	}
	return NULL;
}


void TestSList6()
{
	struct ListNode *newlist = NULL;
	struct ListNode * n1 = (struct ListNode *)malloc(sizeof(struct ListNode));
	struct ListNode * n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n1->val = 1;
	n2->val = 4;
	n3->val = 2;
	n4->val = 9;
	n5->val = 3;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;
	newlist = n1;
	struct ListNode* ans = partition(newlist,9);
	SListPrint(ans);
}


//struct SListNode* middleNode(struct SListNode* head){
//	struct SListNode* cur = head;
//	int count = 0;
//	while (cur)
//	{
//		count++;
//		cur = cur->next;
//	}
//	if (cur && (cur->next))
//	{
//		for (int i = 0; i<(count / 2 - 1); i++)
//		{
//			struct SListNode* next = cur->next;
//			cur = next;
//		}
//	}
//	return cur;
//}

int main()
{
//	TestSList1();
//	TestSList2();
//	TestSList3();
	TestSList6();
	
	return 0;
}