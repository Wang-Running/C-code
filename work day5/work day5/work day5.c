#define _CRT_SECURE_NO_WARNINGS

//����1abcedf2df
//#include <stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))   //ASCII�Ƿ�Ϊ��������д��Сд
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	} 
//	printf("\n");
//	return 0;
//}

//JZ53 ���������������г��ֵĴ���
//�������
//* @param data int����һά����
//* @param dataLen int data���鳤��
//* @param k int����
//* @return int����
//*
//* C������������ȫ�ֱ��������static����ֹ�ظ�����
//* /
//int GetNumberOfK(int* data, int dataLen, int k) {
//	// write code here
//	int count = 0;
//	for (int i = 0; i<dataLen; i++)
//	{
//		if (*data == k)
//		{
//			count++;
//		}
//		data++;
//	}
//	return count;
//}