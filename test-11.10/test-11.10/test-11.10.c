#define _CRT_SECURE_NO_WARNINGS
//��ŵ������
#include <stdio.h>

void Hanno(int n,char fir,char sec,char thi)
{
	if (1 == n)
		printf("%c->%c\n",fir,thi);      //һ������ֱ��ת��
	else
	{
		Hanno(n - 1, fir, thi, sec);     //һ������:  �������� ���������Ƶ��ڶ���
		printf("%c->%c\n", fir, thi);    //����ֱ��ת��
		Hanno(n - 1, sec, fir, thi);      //���ڶ����ϵĽ���ת��
	}
		return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);      //����������
	Hanno(n,'A','B','C');    //�ַ�ABC�ֱ�Ϊ������
	return 0;
}