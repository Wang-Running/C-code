#define _CRT_SECURE_NO_WARNINGS
//leetcode 题号：728. 自除数
//遍历数组中的每个元素，判断是否是自除数即可，如果是则加入到返回数组中
int* selfDividingNumbers(int left, int right, int* returnSize){
	int *ret = (int *)calloc(1000, sizeof(int));//动态申请足够大的空间用于存放返回的自除数
	*returnSize = 0;
	for (int i = left; i <= right; i++) 
	{
		int num = i;
		while (num) 
		{
			int remainder = num % 10;//计算余数
			if (remainder == 0 || (i % remainder) != 0) 
			{//判断i自身与余数取模是否为0
				break;
			}
			num /= 10;
		}
		//如果num==0表示通过了每一位数的取模判断，则i就是自除数
		if (num == 0) 
			ret[(*returnSize)++] = i;
	}
	return ret;
}