#define _CRT_SECURE_NO_WARNINGS


//���� 203. �Ƴ�����Ԫ��
//#include <stdio.h>

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


//struct ListNode* removeElements(struct ListNode* head, int val){
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//	while (cur)
//	{
//		if (cur->val != val)
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//		else
//		{
//			struct ListNode* next = cur->next;
//			if (prev == NULL)
//			{
//				free(cur);
//				head = next;
//				cur = next;
//			}
//			else
//			{
//				free(cur);
//				cur = next;
//				prev->next = cur;
//			}
//		}
//	}
//	return head;
//}




//struct ListNode* removeElements(struct ListNode* head, int val) {
	//if (head == NULL)
	//	return NULL;
//
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//
//	while (cur)
//	{
//		//�����ǰ�ڵ�����Ҫɾ���Ľڵ�
//		if (cur->val == val)
//		{
//			//���ȱ�����һ���ڵ�
//			struct ListNode* next = cur->next;
//			//���ɾ����Ϊͷ�ڵ㣬����ͷ�ڵ�
//			//�����õ�ǰ�ڵ��ǰ���ڵ�����next�ڵ�
//			if (prev == NULL)
//			{
//				head = cur->next;
//			}
//			else
//			{
//				prev->next = cur->next;
//			}
//			//�ͷŵ�ǰ�ڵ㣬��curָ��next
//			free(cur);
//			cur = next;
//		}
//		else
//		{
//			//���cur������Ҫɾ���Ľڵ㣬�����prev,cur
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//
//	return head;
//}


//���� 206. ��ת����

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

//struct ListNode* reverseList(struct ListNode* head){
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;

//  �ı�����������ӷ���

//	while (cur)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	head = prev;
//	return head;
//}

//���� 876. ������м���

//1.����
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

//struct ListNode* middleNode(struct ListNode* head){
//	struct ListNode* cur = head;
//	int count = 0;
//	while (cur)
//	{
//		count++;
//		cur = cur->next;
//	}
//	struct ListNode* prev = head;
//	if (prev && (prev->next))
//	{
//		for (int i = 0; i<(count / 2); i++)
//		{
//			struct ListNode* next = prev->next;
//			prev = next;
//		}
//	}
//	return prev;
//}

//2.
/*
����˼·��
ͨ������ָ���ҵ��м�ڵ㣬��ָ��ÿ������������ָ��ÿ����һ��������ָ���ߵ���β��ʱ��
��ָ�������ߵ��м�λ��
*/
//typedef struct ListNode Node;
//struct ListNode* middleNode(struct ListNode* head){
//	Node* slow = head;
//	Node* fast = head;
//
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//
//	return slow;
//}


