#define _CRT_SECURE_NO_WARNINGS
//Ԥ�������
//__FILE__ //���б����Դ�ļ�
//__LINE__ //�ļ���ǰ���к�
//__DATE__ //�ļ������������
//__TIME__ //�ļ��������ʱ��
//__STDC__ //�����������ѭANSI C����ֵΪ1������δ����
//#include <stdio.h>
//int main()
//{
//	printf("%s\n",__FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//#define�����ʶ��
//#define M 50
//#include <stdio.h>
//int main()
//{
//	printf("%d\n",M);
//	return 0;
//}

//#define M 5+2
//#include <stdio.h>
//int main()
//{
//	int ret = 3 * M;
//	printf("%d\n", ret);
//	return 0;
//}

//#define�����
//#define ���ư�����һ���涨������Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ�꣨macro����
//��꣨define macro����
//#define Max(x,y) x>y?x:y
//#include <stdio.h>
//int main()
//{
//	int max = Max(8,10);
//	printf("%d\n",max);
//	return 0;
//}

//#define �滻����
//�ַ����б�ʶ�����ᱻ����
#define N 100
#define Max(x,y) x>y?x:y
#include <stdio.h>
int main()
{
	int max = Max(8,10);
	printf("N=%d\n",max);
	return 0;
}