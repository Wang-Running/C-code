#define _CRT_SECURE_NO_WARNINGS
//leetcode ��ţ�728. �Գ���
//���������е�ÿ��Ԫ�أ��ж��Ƿ����Գ������ɣ����������뵽����������
int* selfDividingNumbers(int left, int right, int* returnSize){
	int *ret = (int *)calloc(1000, sizeof(int));//��̬�����㹻��Ŀռ����ڴ�ŷ��ص��Գ���
	*returnSize = 0;
	for (int i = left; i <= right; i++) 
	{
		int num = i;
		while (num) 
		{
			int remainder = num % 10;//��������
			if (remainder == 0 || (i % remainder) != 0) 
			{//�ж�i����������ȡģ�Ƿ�Ϊ0
				break;
			}
			num /= 10;
		}
		//���num==0��ʾͨ����ÿһλ����ȡģ�жϣ���i�����Գ���
		if (num == 0) 
			ret[(*returnSize)++] = i;
	}
	return ret;
}