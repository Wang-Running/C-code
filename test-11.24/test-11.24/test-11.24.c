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
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int j = 0;
//	char a = 65;
//	for (j=0;j<4;j++)
//	{
//		printf("%c:",a);
//		char b=0;
//		scanf("%c",&b);
//		getchar();
//		if (b == 'a')          //a表示非A
//			arr[j] = 1;
//		else if (b == 'C')
//			arr[j] = 1;
//		else if (b == 'D')
//			arr[j] = 1;
//		else if (b == 'd')   //d表示非D
//		{
//			arr[j] = 1;
//			arr[j - 1] = 0;
//		}
//		a++;
//	}
//	int i=0;
//	while (arr[i])        //判断i等于几时数组为0
//	{
//		i++;
//	}
//	switch (i)
//	{
//		case 0:
//			printf("A为凶手\n");
//			break;
//		case 1:
//			printf("B为凶手\n");
//			break;
//		case 2:
//			printf("C为凶手\n");
//			break;
//		case 3:
//			printf("D为凶手\n");
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	char *arr[] = { &A, &B, &C, &D };
//	int j = 0;
//	char a = 65;
//	for (j = 0; j<4; j++)
//	{
//		printf("%c:", a);
//		int b = 0;
//		scanf("%d", &b);     //  1:不是我  2:是C   3:是D  4:C在胡说
//		if (b == 1)
//			*arr[j] = 1;
//		else if (b == 2)
//			*arr[j] = 1;
//		else if (b == 3)
//			*arr[j] = 1;
//		else if (b == 4)
//		{
//			*arr[j] = 1;
//			*arr[j - 1] = 0;
//		}
//		a++;
//	}
//	int i = 0;
//	while (*arr[i])        //判断i等于几时数组为0
//	{
//		i++;
//	}
//	switch (i)
//	{
//	case 0:
//		printf("A为凶手\n");
//		break;
//	case 1:
//		printf("B为凶手\n");
//		break;
//	case 2:
//		printf("C为凶手\n");
//		break;
//	case 3:
//		printf("D为凶手\n");
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int killer = 0;
//	//分别假设凶手是a,b,c,d,看谁是凶手时满足3个人说了真话，一个人说了假话
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("凶手是：%c", killer);
//	}
//	return 0;
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#include <stdio.h>
int main()
{

	return 0;
}


//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//求位数i
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d",&n);
//	while (n)
//	{
//		m = n % 10;
//		n /= 10;
//		if (m % 2)
//			m = 1;
//		else
//			m = 0;
//		sum = sum + m*pow(10,i);
//		i++;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//#include <stdio.h>
//
//int step(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return step(n-1)+step(n-2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n", step(n));
//	return 0;
//}