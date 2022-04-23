#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//插直接入排序
void InsertSort(int* a,int n);

//希尔排序-优化的插入排序
//1.预排序  接近有序
//2.直接插入排序
void ShellSort(int* a, int n);

// 堆排序
//向下调整建堆
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);

// 冒泡排序
void BubbleSort(int* a, int n);

//直接选择排序
void SelectSort(int* a, int n);

//快速排序
void QuickSort1(int* a, int begin, int end);

//快速排序
void QuickSort2(int* a, int begin, int end);

//快速排序--非递归
void QuickSort3(int* a, int begin, int end);

//归并排序
void MergeSort(int* a, int n);

//归并排序非递归
void MergeSortNonR(int* a,int n);