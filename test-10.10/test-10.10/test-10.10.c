#define _CRT_SECURE_NO_WARNINGS
//�����
//ð������
//��10 9 8 7 6 5 4 3 2 1 ����������
//�Զ��庯��bubble_sort()

void bubble_sort(int *arr,int sz)
{
	int n = 0;
	for (n = 0; n < sz-1; n++) //��ѭ������
	{
		int j = 0;
		int flag = 1;//�������
		for (j = 0; j<sz-1-n; j++)
		{
			if (arr[j]> arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1) //������ѭ��
			break;
	}

}

int main()
{
	int arr[] = { 10,9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(&arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("arr[i]=%d\n",arr[i]);
	}
	return 0;
}