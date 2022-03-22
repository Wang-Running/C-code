#define _CRT_SECURE_NO_WARNINGS

//���� 160. �ཻ����

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
//	//�����õ�����������
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
//	//�ж�˭��˭��
//	struct ListNode* len = headA;
//	struct ListNode* sht = headB;
//	if (i<j)
//	{
//		len = headB;
//		sht = headA;
//	}
//	//�����������Ĳ���
//	int dif = abs(i - j);
//	while (dif--)
//	{
//		len = len->next;
//	}
//	//һ����
//	while (len != sht)
//	{
//		len = len->next;
//		sht = sht->next;
//	}
//	return len;
//}



//���� 141. ��������
//�ж��Ƿ��л�

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
//	//û����������ѭ��
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


//���� 142. �������� II
//����һ�������ͷ�ڵ�  head ����������ʼ�뻷�ĵ�һ���ڵ㡣 ��������޻����򷵻� null��
//1.��ʽ֤����L=N*C+X
//struct ListNode *detectCycle(struct ListNode *head) {
//	struct ListNode* first, *slow;
//	first = slow = head;
//	//û����������ѭ��
//	while (first&&first->next)
//	{
//		slow = slow->next;
//		first = first->next->next;
//		if (slow == first)
//		{
//			//������
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

//2.�ཻ����
//struct ListNode *detectCycle(struct ListNode *head) {
//	struct ListNode* first, *slow;
//	first = slow = head;
//	//û����������ѭ��
//	while (first&&first->next)
//	{
//		slow = slow->next;
//		first = first->next->next;
//		if (slow == first)
//		{
//			//������
//			struct ListNode* meet = slow;
//			//������
//			struct ListNode* newlist = meet->next;
//			meet->next = NULL;
//			//�����head��ʼ��newlist��ʼ����ͬ��βmeet�ĳ���
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
//			//�����������߲
//			int dis = abs(i - j);
//			while (dis--)
//			{
//				len = len->next;
//			}
//			//һ����
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



//���� 138. ���ƴ����ָ�������
/**
* Definition for a Node.
* struct Node {
*     int val;
*     struct Node *next;
*     struct Node *random;
* };
*/

struct Node* copyRandomList(struct Node* head) {
	//��ÿ�������渴��һ�����
	struct Node* cur = head;
	while (cur)
	{
		struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
		copy->val = cur->val;
		copy->next = cur->next;
		cur->next = copy;
		cur = cur->next->next;
	}
	//���ƽ���random����
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
	//�����ƽڵ���������,ԭ����ָ�
	//ע����β��
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