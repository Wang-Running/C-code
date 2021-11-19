#define _CRT_SECURE_NO_WARNINGS
//汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//1.
#include<stdio.h>
struct Water
{
	int price;           //价格
	int num;           //数量
};

int Num(int s)         //求瓶数
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
	int n = 0;                  //钱
	scanf("%d",&n);
	struct Water w = { 0, 0 };
	w.price = n;
	w.num=Num(n);
	printf("%d",w.num);
	return 0;
}

//2.     
   //有问题
//#include<stdio.h>
//struct Water
//{
//	int price;           //价格
//	int num;           //数量
//};
//
//int Num(struct Water* s)         //求瓶数
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