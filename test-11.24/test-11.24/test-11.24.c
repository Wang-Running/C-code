#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);    //300 44
//	return 0;
//}

//大小端存储
//#include <stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	return 0;
//}

//杨辉三角
//1

//1 1

//1 2 1

//1 3 3 1

//1 4 6 4 1

//……

//#include <stdio.h>
//
//void yangHuiTriangle(int n)
//{
//	int data[30] = { 1 };
//
//	int i, j;
//	printf("1\n"); //第一行就直接打印了
//	for (i = 1; i < n; i++) //从第二行开始
//	{
//		for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
//		{
//			data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
//		}
//
//		for (j = 0; j <= i; j++) //这一行填完就直接打印了。
//		{
//			printf("%d ", data[j]);
//		}
//		putchar('\n');
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	yangHuiTriangle(n);
//	return 0;
//}


//猜凶手
//以下为4个嫌疑犯的供词:

//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
#include <stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	char *arr[] = {&A,&B,&C,&D};
	int j = 0;
	char a = 65;
	for (j=0;j<4;j++)
	{
		printf("%c:",a);
		int b=0;
		scanf("%d",&b);     //  1:不是我  2:是C   3:是D  4:C在胡说
		if (b == 1)
			*arr[j] = 1;
		else if (b == 2)
			*arr[j] = 1;
		else if (b == 3)
			*arr[j] = 1;
		else if (b == 4)
		{
			*arr[j] = 1;
			*arr[j - 1] = 0;
		}
		a++;
	}
	int i=0;
	while (*arr[i])        //判断i等于几时数组为0
	{
		i++;
	}
	switch (i)
	{
		case 0:
			printf("A为凶手\n");
			break;
		case 1:
			printf("B为凶手\n");
			break;
		case 2:
			printf("C为凶手\n");
			break;
		case 3:
			printf("D为凶手\n");
			break;
	}
	return 0;
}