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

