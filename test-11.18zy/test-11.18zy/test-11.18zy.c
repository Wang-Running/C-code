#define _CRT_SECURE_NO_WARNINGS
//��ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//1.
#include<stdio.h>
struct Water
{
	int price;           //�۸�
	int num;           //����
};

int Num(int s)         //��ƿ��
{
	if (s < 2)
		return s;
	else
	{
		if (s % 2!=0)
		{
			return s += Num(s / 2)+1;
		}
		else
			return s += Num(s / 2);
	}
}

int main()
{
	int n = 0;                  //Ǯ
	scanf("%d",&n);
	struct Water w = { 0, 0 };
	w.price = n;
	w.num=Num(n);
	printf("%d",w.num);
	return 0;
}

//2.     
   //������
//#include<stdio.h>
//struct Water
//{
//	int price;           //�۸�
//	int num;           //����
//};
//
//int Num(struct Water* s)         //��ƿ��
//{
//	if (s->price < 2)
//	{
//		s->num = s->price;
//		return s->num;
//	}
//	else
//	{
//		s->num = s->price;
//		if (s->price % 2 != 0)
//		{
//			s->price = (s->price) / 2;
//			s->num += Num(&s)+1;
//			return s->num;
//		}
//		else
//		{
//			s->price = (s->price) / 2;
//			s->num += Num(&s);
//		}
//		return s->num;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct Water w = { 0, 0 };
//	w.price = n;
//	w.num=Num(&w);
//	printf("%d",w.num);
//	return 0;
//}