#define _CRT_SECURE_NO_WARNINGS
//返回链表中倒数第k个结点
//输入：
//1, { 1, 2, 3, 4, 5 }
//返回值：
//{ 5 }
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//	// write code here
//	struct ListNode* fast = pListHead;
//	struct ListNode* slow = pListHead;
//	for (int i = 0; i<k; i++)
//	{
//		if (fast == NULL)
//			return NULL;
//		fast = fast->next;
//	}
//	while (fast)
//	{
//		slow = slow->next;
//		fast = fast->next;
//	}
//	return slow;
//}


//力扣21. 合并两个有序链表
//无头结点
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
//	if (list1 == NULL)
//		return list2;
//	if (list2 == NULL)
//		return list1;
//	struct ListNode* newList = NULL;
//	struct ListNode* tail = NULL;
//	while (list1&&list2)
//	{
//		if (list1->val<list2->val)
//		{
//			if (tail == NULL)
//			{
//				newList = tail = list1;
//			}
//			else
//			{
//				struct ListNode* next1 = list1->next;
//				tail->next = list1;
//				tail = list1;
//				list1 = next1;
//			}
//		}
//		else
//		{
//			if (tail == NULL)
//			{
//				newList = tail = list2;
//			}
//			else
//			{
//				struct ListNode* next2 = list2->next;
//				tail->next = list2;
//				tail = list2;
//				list2 = next2;
//			}
//		}
//	}
//	if (list1 == NULL)
//	{
//		tail->next = list2;
//	}
//	if (list2 == NULL)
//	{
//		tail->next = list1;
//	}
//	return newList;
//}

//有头结点
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
//	struct ListNode* newList = (struct ListNode*)malloc(sizeof(struct ListNode));
//	newList->next = NULL;
//	struct ListNode* tail = newList;
//	while (list1&&list2)
//	{
//		if (list1->val<list2->val)
//		{
//			struct ListNode* next1 = list1->next;
//			tail->next = list1;
//			tail = list1;
//			list1 = next1;
//		}
//		else
//		{
//			struct ListNode* next2 = list2->next;
//			tail->next = list2;
//			tail = list2;
//			list2 = next2;
//		}
//	}
//	if (list1 == NULL)
//	{
//		tail->next = list2;
//	}
//	if (list2 == NULL)
//	{
//		tail->next = list1;
//	}
//	struct ListNode* head = newList->next;
//	free(newList);
//	return head;
//}


//CM11 链表分割
//现有一链表的头指针 ListNode* pHead，给一定值x，编写一段代码将所有
//小于x的结点排在其余结点之前，且不能改变原来的数据顺序，返回重新排列后的链表的头指针。

//带头结点
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
//class Partition {
//public:
//	ListNode* partition(ListNode* pHead, int x) {
//		// write code here
//		struct ListNode* n1, *n2, *tail1, *tail2;
//		n1 = tail1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//		n2 = tail2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//		n1->next = tail1->next = NULL;
//		n2->next = tail2->next = NULL;
//		struct ListNode* cur = pHead;
//		while (cur)
//		{
//			if (cur->val<x)
//			{
//				tail1->next = cur;
//				tail1 = cur;
//			}
//			else
//			{
//				tail2->next = cur;
//				tail2 = cur;
//			}
//			cur = cur->next;
//		}
//		tail1->next = n2->next;
//		tail2->next = NULL;
//		struct ListNode* newlist = n1->next;
//		free(n1);
//		free(n2);
//		return newlist;
//	};

//不带头结点
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
//class Partition {
//public:
//	ListNode* partition(ListNode* pHead, int x) {
//		// write code here
//		if (pHead == NULL)
//			return NULL;
//		ListNode* n1 = NULL;
//		ListNode* n2 = NULL;
//		ListNode* cur = pHead;
//		ListNode* tail1 = NULL;
//		ListNode* tail2 = NULL;
//		while (cur)
//		{
//			if (cur->val<x)
//			{
//				if (tail1 == NULL)
//				{
//					n1 = tail1 = cur;
//				}
//				else
//				{
//					tail1->next = cur;
//					tail1 = cur;
//				}
//			}
//			else
//			{
//				if (tail2 == NULL)
//				{
//					n2 = tail2 = cur;
//				}
//				else
//				{
//					tail2->next = cur;
//					tail2 = cur;
//				}
//			}
//			cur = cur->next;
//		}
//		tail1->next = n2;
//		n2->next = NULL;
//		return n1;
//	}
//};