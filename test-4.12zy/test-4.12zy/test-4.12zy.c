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

//���� 144 ��������ǰ�����
//��ǰ������Ľ���С
//int TreeSize(struct TreeNode* root)
//{
//	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void _preorderTraversal(struct TreeNode* root, int* a, int* i)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	//�����ݷ���������
//	a[(*i)++] = root->val;
//	_preorderTraversal(root->left, a, i);
//	_preorderTraversal(root->right, a, i);
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize){
//	//���ٳ���Ӧ�Ŀռ�
//	int* a = malloc(sizeof(int)*TreeSize(root));
//	//�����ظ����ٿռ䣬�����Ӻ���
//	*returnSize = TreeSize(root);
//	int i = 0;
//	_preorderTraversal(root, a, &i);
//	return a;
//}

//���� 94 ���������������
//��ǰ������Ľ���С
//int TreeSize(struct TreeNode* root)
//{
//	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//
//void _inorderTraversal(struct TreeNode* root, int* a, int* i)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	_inorderTraversal(root->left, a, i);
//	//�����ݷ���������
//	a[(*i)++] = root->val;
//	_inorderTraversal(root->right, a, i);
//}
//
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize){
//	//���ٳ���Ӧ�Ŀռ�
//	int* a = malloc(sizeof(int)*TreeSize(root));
//	//�����ظ����ٿռ䣬�����Ӻ���
//	*returnSize = TreeSize(root);
//	int i = 0;
//	_inorderTraversal(root, a, &i);
//	return a;
//}

//���� 145 �������ĺ������
//��ǰ������Ľ���С
//int TreeSize(struct TreeNode* root)
//{
//	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//
//void _postorderTraversal(struct TreeNode* root, int* a, int* i)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	_postorderTraversal(root->left, a, i);
//	_postorderTraversal(root->right, a, i);
//	//�����ݷ���������
//	a[(*i)++] = root->val;
//}
//
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize){
//	//���ٳ���Ӧ�Ŀռ�
//	int* a = malloc(sizeof(int)*TreeSize(root));
//	//�����ظ����ٿռ䣬�����Ӻ���
//	*returnSize = TreeSize(root);
//	int i = 0;
//	_postorderTraversal(root, a, &i);
//	return a;
//}