#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	//int arr[10] = {0};
//	//arr[4];// []-�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);// ()�������ò�����
//	printf("%d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
	//auto int a = 10;//�ֲ�����-�Զ�������intǰʡ��auto
	//register int a = 10;// register�Ĵ�������
	//int ����ı������з��ŵ�
	//int=signed int
	//unsigned int �޷��ű�������������
	//struct-�ṹ��ؼ���
	//union-������/������
	//typedef-���Ͷ���-�����ض���
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//typedef-���Ͷ���-�����ض���(������)
//	typedef unsigned int u;
//	unsigned int num = 20;
//	u num2= 20;
//	return 0;
//}

#include <stdio.h>
//#include <string.h>
//�ṹ��
//char int double����
//��=3.14
//��w��
//��-���Ӷ���
//
//����+���+����+���֤����
//����+����+������+���ۡ���
//���Ӷ���-�ṹ��-�����Լ��������һ������
//struct-�ṹ��ؼ���
//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	//���ýṹ������-����һ�������͵ı���
	struct Book b1 = {"C���Գ������",55};
	 struct Book* pb=&b1;
	 strcpy (b1.name,"C++");//strcpy-srring copy �ַ�������
	 printf("%s\n",b1.name);
//.	 �ṹ�����.��Ա
//->	�ṹ��ָ��->��Ա
	 //printf("%s\n",pb->name);
	 //printf("%d\n",pb->price);
	 //printf("����=%s\n",(*pb).name);
	 //printf("%d\n",(*pb).price);
	//printf("������%s\n",b1.name);
	//printf("�۸�%d\n",b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%d\n",b1.price);
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char *pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char *pc = &ch;
//	int a = 10;//4���ֽ�
//	int* p=&a;//ȡ��a�ĵ�ַ
//	//printf("%p\n",&a);
//	//printf("%p\n",p);
//	*p=20;//*�����ò�����
//	printf("%d\n",a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//printf("%p\n",&a);
//	return 0;
//}
//define �����ʶ������
//#define MAX 100
//define �����-������
//������ʵ��
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//������ʽ
//	int max = MAX(a, b);
//	printf("max=%d\n",max);
//	//��ķ�ʽ
//	max = MAX(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}

//1.static ���ξֲ�����
//�ֲ������������ڱ䳤
//2.static ����ȫ�ֱ���
//�ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ��
//3.static ���κ���
//Ҳ�Ǹı��˺�����������--˵����׼ȷ
//static ���κ����ı��˺�������������
//�ⲿ��������->�ڲ���������

//int main()
//{
//	//extern �����ⲿ����
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//	return 0;
//}

//�����ⲿ����
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d",sum);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static ��̬ a��Ϊ��̬�ֲ�����
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

