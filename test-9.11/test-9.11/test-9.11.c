#define _CRT_SECURE_NO_WARNINGS
//��֧���
//if
//switch
//ѭ�����
//while
//for
//do while

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		//if else �������ʱӦʹ�ô�����
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//
//	}
	//int age = 15;
	//if (age < 18)
	//	printf("δ����");
	//else
	//	printf("����");
	//if (age < 18)
	//	printf("δ����\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (1 == a % 2)
//		printf("����\n");
//	else
//		printf("ż��\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i%2==1)
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//switch (���ͱ��ʽ)
//	//case ���ͳ������ʽ��
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������"); 
//		break;
//	default:
//		printf("�������\n");
//		break;
//
//
//	}
	//scanf("%d",&day);
	//if (1 == day)
	//	printf("����һ");
	//else if (2 == day)
	//	printf("���ڶ�");
	//else if (3 == day)
	//	printf("������");
	//else if (4 == day)
	//	printf("������");

//	return 0;
//}

#include<stdio.h>
int main()
{
	char ch=0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
