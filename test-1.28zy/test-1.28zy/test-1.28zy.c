#define _CRT_SECURE_NO_WARNINGS
//ģ��ʵ��strncat

//ģ��ʵ��strncpy

//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

//���飺
//ֻ����һ�ε��������ֱַ�ֵ�һ����
//ÿ���鶼����һ�����ֳ���һ�Σ��������ֶ��ɶԳ���
#include <stdio.h>
int main()
{
	int ret = 0;
	int arr[] = { 1, 2, 3, 4, 5, 1,2,3,4,6 };
	//1.�������һ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0;i<sz;i++)
	{
		ret ^= arr[i];
	}
	//2.����ret�Ķ������еڼ�λ��һ
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret>>i)&1)==1)
		{
			pos = i;
			break;
		}
	}
	//����posλΪ0/1������
	int n = 0;
	int m = 0;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			n ^= arr[i];
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 0)
		{
			m ^= arr[i];
		}
	}
	printf("%d %d\n",m,n);
	return 0;
}