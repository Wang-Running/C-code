#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������
void InsertSort(int* a,int n);

// ������
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);

// ð������
void BubbleSort(int* a, int n);

//ϣ������-�Ż��Ĳ�������
//1.Ԥ����  �ӽ�����
//2.ֱ�Ӳ�������
void ShellSort(int* a,int n);