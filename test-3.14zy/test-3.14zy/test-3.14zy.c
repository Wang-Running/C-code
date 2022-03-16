#define _CRT_SECURE_NO_WARNINGS


//力扣 203. 移除链表元素
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
//		//如果当前节点是需要删除的节点
//		if (cur->val == val)
//		{
//			//首先保存下一个节点
//			struct ListNode* next = cur->next;
//			//如果删除的为头节点，更新头节点
//			//否则让当前节点的前趋节点链接next节点
//			if (prev == NULL)
//			{
//				head = cur->next;
//			}
//			else
//			{
//				prev->next = cur->next;
//			}
//			//释放当前节点，让cur指向next
//			free(cur);
//			cur = next;
//		}
//		else
//		{
//			//如果cur不是需要删除的节点，则更新prev,cur
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//
//	return head;
//}


//力扣 206. 反转链表

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

//  改变两结点间的链接方向

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

//力扣 876. 链表的中间结点

//1.遍历
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
解题思路：
通过快慢指针找到中间节点，快指针每次走两步，慢指针每次走一步，当快指针走到结尾的时候
慢指针正好走到中间位置
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


