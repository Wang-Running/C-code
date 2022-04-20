#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//插入排序
void InsertSort(int* a,int n);

// 堆排序
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);

// 冒泡排序
void BubbleSort(int* a, int n);

//希尔排序-优化的插入排序
//1.预排序  接近有序
//2.直接插入排序
void ShellSort(int* a,int n);