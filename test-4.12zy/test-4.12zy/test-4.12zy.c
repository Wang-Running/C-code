#define _CRT_SECURE_NO_WARNINGS
//���� 100���ж����������Ƿ����
//bool isSameTree(struct TreeNode* p, struct TreeNode* q){
//	//��Ϊ�գ����
//	if (p == NULL&&q == NULL)
//	{
//		return true;
//	}
//	//һ��Ϊ�գ�һ����Ϊ�գ������
//	if (p == NULL || q == NULL)
//	{
//		return false;
//	}
//	//����Ϊ��
//	if (p->val != q->val)
//	{
//		return false;
//	}
//	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}

//���� 101 �Գƶ�����
//bool _isSymmetric(struct TreeNode* p, struct TreeNode* q){
//	//������Ϊ�գ��Գ�
//	if (p == NULL&&q == NULL)
//	{
//		return true;
//	}
//	//һ��Ϊ��һ����Ϊ���򲻶Գ�
//	if (p == NULL || q == NULL)
//	{
//		return false;
//	}
//	//������Ϊ���Ҳ����
//	if (p->val != q->val)
//	{
//		return false;
//	}
//	//������Ϊ������ȣ��Ƚ���������������
//	return _isSymmetric(p->left, q->right)
//		&& _isSymmetric(p->right, q->left);
//}
//
//bool isSymmetric(struct TreeNode* root){
//	//�ȱȽϸ�
//	if (root == NULL)
//	{
//		return true;
//	}
//	//�ٱȽ���������������
//	return _isSymmetric(root->left, root->right);
//}

