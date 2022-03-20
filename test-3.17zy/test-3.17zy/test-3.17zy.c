#define _CRT_SECURE_NO_WARNINGS
//���������е�����k�����
//���룺
//1, { 1, 2, 3, 4, 5 }
//����ֵ��
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


//����21. �ϲ�������������
//��ͷ���
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

//��ͷ���
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


//CM11 ����ָ�
//����һ�����ͷָ�� ListNode* pHead����һ��ֵx����дһ�δ��뽫����
//С��x�Ľ������������֮ǰ���Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣

//��ͷ���
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
//    }
//	};

//����ͷ���
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
//class Partition {
//public:
//	ListNode* partition(ListNode* pHead, int x) {
//		if (pHead == NULL)
//			return NULL;
//		struct ListNode* n1 = NULL;
//		struct ListNode* n2 = NULL;
//		struct ListNode* cur = pHead;
//		struct ListNode* tail1 = NULL;
//		struct ListNode* tail2 = NULL;
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
//		if (n1)
//		{
//			tail1->next = n2;
//			if (n2)
//			{
//				tail2->next = NULL;
//			}
//			return n1;
//		}
//		else
//		{
//			return n2;
//		}
//		return NULL;
//	}
//};




//OR36 ����Ļ��Ľṹ

/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
//class PalindromeList {
//public:
//	bool chkPalindrome(ListNode* A) {
//		// write code here
//		//���м���
//		struct ListNode* fast, *slow;
//		fast = slow = A;
//		while (fast&&fast->next)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//		}
//		struct ListNode* mid = slow;
//		//���м��㿪ʼ����벿����������
//		struct ListNode* cur, *prev;
//		cur = slow; prev = NULL;
//		while (cur)
//		{
//			struct ListNode* next = cur->next;
//			cur->next = prev;
//			prev = cur;
//			cur = next;
//		}
//		//prevΪ���ú�����ͷ
//		//�Ƚ�
//		while (prev)
//		{
//			if (prev->val == A->val)
//			{
//				prev = prev->next;
//				A = A->next;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//};