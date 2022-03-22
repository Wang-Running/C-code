#define _CRT_SECURE_NO_WARNINGS

//力扣 160. 相交链表

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
//	//遍历得到两个链表长度
//	struct ListNode *len1 = headA;
//	struct ListNode *len2 = headB;
//	int i, j;
//	i = j = 0;
//	while (len1)
//	{
//		i++;
//		len1 = len1->next;
//	}
//	while (len2)
//	{
//		j++;
//		len2 = len2->next;
//	}
//	//判断谁长谁短
//	struct ListNode* len = headA;
//	struct ListNode* sht = headB;
//	if (i<j)
//	{
//		len = headB;
//		sht = headA;
//	}
//	//长的先走相差的步数
//	int dif = abs(i - j);
//	while (dif--)
//	{
//		len = len->next;
//	}
//	//一起走
//	while (len != sht)
//	{
//		len = len->next;
//		sht = sht->next;
//	}
//	return len;
//}



//力扣 141. 环形链表
//判断是否有环

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//bool hasCycle(struct ListNode *head) {
//	struct ListNode* first, *slow;
//	first = slow = head;
//	//没环不可能死循环
//	while (first&&first->next)
//	{
//		slow = slow->next;
//		first = first->next->next;
//		if (slow == first)
//		{
//			return true;
//		}
//	}
//	return false;
//}


//力扣 142. 环形链表 II
//给定一个链表的头节点  head ，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
//1.公式证明：L=N*C+X
//struct ListNode *detectCycle(struct ListNode *head) {
//	struct ListNode* first, *slow;
//	first = slow = head;
//	//没环不可能死循环
//	while (first&&first->next)
//	{
//		slow = slow->next;
//		first = first->next->next;
//		if (slow == first)
//		{
//			//相遇点
//			struct ListNode* meet = slow;
//			while (meet != head)
//			{
//				head = head->next;
//				meet = meet->next;
//			}
//			return meet;
//		}
//	}
//	return NULL;
//}

//2.相交链表
//struct ListNode *detectCycle(struct ListNode *head) {
//	struct ListNode* first, *slow;
//	first = slow = head;
//	//没环不可能死循环
//	while (first&&first->next)
//	{
//		slow = slow->next;
//		first = first->next->next;
//		if (slow == first)
//		{
//			//相遇点
//			struct ListNode* meet = slow;
//			//新链表
//			struct ListNode* newlist = meet->next;
//			meet->next = NULL;
//			//求出从head开始和newlist开始到共同结尾meet的长度
//			struct ListNode* n1 = head;
//			struct ListNode* n2 = newlist;
//			int i, j;
//			i = j = 0;
//			while (n1)
//			{
//				i++;
//				n1 = n1->next;
//			}
//			while (n2)
//			{
//				j++;
//				n2 = n2->next;
//			}
//			struct ListNode* len = head;
//			struct ListNode* sht = newlist;
//			if (i<j)
//			{
//				len = newlist;
//				sht = head;
//			}
//			//长的链表先走差步
//			int dis = abs(i - j);
//			while (dis--)
//			{
//				len = len->next;
//			}
//			//一起走
//			while (len != sht)
//			{
//				len = len->next;
//				sht = sht->next;
//			}
//			return len;
//		}
//
//	}
//	return NULL;
//}



//力扣 138. 复制带随机指针的链表
/**
* Definition for a Node.
* struct Node {
*     int val;
*     struct Node *next;
*     struct Node *random;
* };
*/

struct Node* copyRandomList(struct Node* head) {
	//在每个结点后面复制一个结点
	struct Node* cur = head;
	while (cur)
	{
		struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
		copy->val = cur->val;
		copy->next = cur->next;
		cur->next = copy;
		cur = cur->next->next;
	}
	//复制结点的random更新
	struct Node* cur1 = head;
	while (cur1)
	{
		struct Node* copynode = cur1->next;
		if (cur1->random == NULL)
		{
			copynode->random = NULL;
		}
		else
		{
			copynode->random = cur1->random->next;
		}
		cur1 = cur1->next->next;
	}
	//将复制节点连接起来,原链表恢复
	//注意是尾插
	struct Node* cur2 = head;
	struct Node* tail = NULL;
	struct Node* newnode = NULL;
	while (cur2)
	{
		struct Node* next1 = cur2->next;
		struct Node* next2 = next1->next;
		cur2->next = next2;
		if (tail == NULL)
		{
			newnode = tail = next1;
		}
		else
		{
			tail->next = next1;
			tail = next1;
		}
		cur2 = next2;
	}
	return newnode;
}