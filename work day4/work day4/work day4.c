#define _CRT_SECURE_NO_WARNINGS
//OR141 ������
//1. ����ֻ���ɴ�д��ĸ��Сд��ĸ�����ֹ��ɣ�
//
//2. ���벻�������ֿ�ͷ��
//
//3. ���������ٳ��ִ�д��ĸ��Сд��ĸ�������������ַ������е����֣�
//
//4. ���볤������Ϊ8

//����һ����n����������n(n��100)�У�ÿ��һ���ַ�������ʾһ�����룬���뱣֤�ַ�����ֻ���ִ�д��ĸ��Сд��ĸ�����֣��ַ������Ȳ�����100��
//
//����n�У��������Ϸ������YES�����Ϸ����NO
#include <stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n)) 
	{
		for (int i = 0; i < n; i++) 
		{
			char password[101] = { 0 };
			int upper = 0, lower = 0, digit = 0, other = 0;
			scanf("%s", password);//��׽���������
			if (strlen(password) < 8) 
			{//���볤��С��8
				printf("NO\n");
				continue;
			}
			if (password[0] >= '0' && password[0] <= '9') 
			{//���������ֿ�ͷ
				printf("NO\n");
				continue;
			}
			char *ptr = password;
			while (*ptr != '\0') 
			{ //ͳ�Ƹ����ַ�����
				if (*ptr >= 'a' && *ptr <= 'z') lower++;
				else if (*ptr >= 'A' && *ptr <= 'Z') upper++;
				else if (*ptr >= '0' && *ptr <= '9') digit++;
				else other++;
					ptr++;
			}
			if (other > 0) 
			{ // �������ַ���ע�⣺����ֻ�������ֺ���ĸ��ɣ�
				printf("NO\n");
				continue;
			}
			//��д��Сд�����֣���������������ϣ����Ƚ���������1������0
			if ((upper>0) + (lower>0) + (digit>0) < 2) 
			{ // ����ֻ��һ���ַ�
				printf("NO\n");
				continue;
			}
			printf("YES\n");
		}
	}
	return 0;
}