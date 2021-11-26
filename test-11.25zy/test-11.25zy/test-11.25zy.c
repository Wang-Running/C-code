#define _CRT_SECURE_NO_WARNINGS

//序列中删除指定数字
#include<stdio.h>
void Dal(int *arr,int n,int b)
{
	int i = 0;
	int j = 0;
	for (i = 0,j=0; i<n,j<n-1; i++, j++)
	{
		if (arr[i] == b)
		{
			for (j; j < n; j++, i++)
			{
				arr[i] = arr[j + 1];
			}
			i = 0;
			j = 0;
		}
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[30];
	int b = 0;
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &b);
	Dal(arr,n,b);
	for (i = 0; i<n - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}