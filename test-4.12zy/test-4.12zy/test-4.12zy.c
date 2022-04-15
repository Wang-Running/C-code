#define _CRT_SECURE_NO_WARNINGS
//力扣 100，判断两二叉树是否相等
//bool isSameTree(struct TreeNode* p, struct TreeNode* q){
//	//都为空，相等
//	if (p == NULL&&q == NULL)
//	{
//		return true;
//	}
//	//一个为空，一个不为空，不相等
//	if (p == NULL || q == NULL)
//	{
//		return false;
//	}
//	//都不为空
//	if (p->val != q->val)
//	{
//		return false;
//	}
//	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}

//力扣 101 对称二叉树
//bool _isSymmetric(struct TreeNode* p, struct TreeNode* q){
//	//调到都为空，对称
//	if (p == NULL&&q == NULL)
//	{
//		return true;
//	}
//	//一个为空一个不为空则不对称
//	if (p == NULL || q == NULL)
//	{
//		return false;
//	}
//	//两个不为空且不相等
//	if (p->val != q->val)
//	{
//		return false;
//	}
//	//两个不为空且相等，比较左子树和右子树
//	return _isSymmetric(p->left, q->right)
//		&& _isSymmetric(p->right, q->left);
//}
//
//bool isSymmetric(struct TreeNode* root){
//	//先比较根
//	if (root == NULL)
//	{
//		return true;
//	}
//	//再比较左子树和右子树
//	return _isSymmetric(root->left, root->right);
//}

//力扣 144 二叉树的前序遍历
//提前算出树的结点大小
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
//	//将数据放入数组中
//	a[(*i)++] = root->val;
//	_preorderTraversal(root->left, a, i);
//	_preorderTraversal(root->right, a, i);
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize){
//	//开辟出对应的空间
//	int* a = malloc(sizeof(int)*TreeSize(root));
//	//避免重复开辟空间，定义子函数
//	*returnSize = TreeSize(root);
//	int i = 0;
//	_preorderTraversal(root, a, &i);
//	return a;
//}

//力扣 94 二叉树的中序遍历
//提前算出树的结点大小
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
//	//将数据放入数组中
//	a[(*i)++] = root->val;
//	_inorderTraversal(root->right, a, i);
//}
//
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize){
//	//开辟出对应的空间
//	int* a = malloc(sizeof(int)*TreeSize(root));
//	//避免重复开辟空间，定义子函数
//	*returnSize = TreeSize(root);
//	int i = 0;
//	_inorderTraversal(root, a, &i);
//	return a;
//}

//力扣 145 二叉树的后序遍历
//提前算出树的结点大小
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
//	//将数据放入数组中
//	a[(*i)++] = root->val;
//}
//
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize){
//	//开辟出对应的空间
//	int* a = malloc(sizeof(int)*TreeSize(root));
//	//避免重复开辟空间，定义子函数
//	*returnSize = TreeSize(root);
//	int i = 0;
//	_postorderTraversal(root, a, &i);
//	return a;
//}