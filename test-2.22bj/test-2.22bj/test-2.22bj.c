#define _CRT_SECURE_NO_WARNINGS
//�ļ��Ĵ򿪺͹ر�
//#include <stdio.h>
//int main()
//{
//	FILE * pFile;
//	//���ļ�
//	pFile = fopen("myfile.txt", "w");
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		//�ر��ļ�
//		fclose(pFile);
//      pFile = NULL;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE * pFile;
//	//���ļ�
//	pFile = fopen("D:\\C code\\C-code\\myfile.txt", "w");
//	//�ļ�����
//	return 0;
//}

//�ַ����뺯��fgetc
#include <stdio.h>
#include <string.h>
#include <errno.h>

//д�ļ�
//int main()
//{
//	FILE * pf;
//	//���ļ�
//	pf = fopen("myfile.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	//�ļ�����
//	for (char pa = 'a'; pa <= 'z'; pa++)
//	{
//		//fputc(pa,stdout);
//		fputc(pa, pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////���ļ�
//int main()
//{
//	FILE * pf;
//	//���ļ�
//	pf = fopen("myfile.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//�ļ�����
//	//int ret=fgetc(pf);
//	//printf("%c\n",ret);
//	//ret = fgetc(pf);
//	//printf("%c\n", ret);
//	//ret = fgetc(pf);
//	//printf("%c\n", ret);
//	int ret = 0;
//	while ((ret = fgetc(pf))!=EOF)
//	{
//		printf("%c\n", ret);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////дһ��
//int main()
//{
//	FILE * pf;
//	//���ļ�
//	pf = fopen("myfile.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�ļ�����
//	fputs("hello\n",pf);
//	fputs("world\n",pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��һ��
//int main()
//{
//	FILE * pf;
//	//���ļ�
//	pf = fopen("myfile.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�ļ�����
//	char buf[1000] = { 0 };
//	while (fgets(buf, 1000, pf)!=NULL)
//	{
//		printf("%s", buf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//ʵ��һ�����뽫myfile.txt����һ������myfile2.txt
//	FILE* pr = fopen("myfile.txt","r");
//	if (pr==NULL)
//	{
//		printf("open for readingt:%s\n",strerror(errno));
//	}
//	FILE* pw = fopen("myfile2.txt","w");
//	if (pw==NULL)
//	{
//		printf("open for writting:%s\n",strerror(errno));
//		fclose(pr);
//		pr = NULL;
//		return 0;
//	}
//	//�����ļ�
//	int ch = 0;
//
//	while ((ch=fgetc(pr))!=EOF)
//	{
//		fputc(ch,pw);
//	}
//
//	fclose(pr);
//	pr = NULL;
//	fclose(pw);
//	pw = NULL;
//	return 0;
//}

//��ʽ���������-fprintf

//struct Book
//{
//	char name[12];
//	int price;
//	double word;
//};
//
//int main()
//{
//	struct Book b = {"�������",30,87.5};
//	FILE* pf = fopen("data.txt","w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	//д��ʽ������
//	fprintf(pf,"%s %d %lf",b.name,b.price,b.word);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ʽ�����뺯��-fscanf

//struct Book
//{
//	char name[12];
//	int price;
//	double word;
//};
//
//int main()
//{
//	struct Book b = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//����ʽ������
//	fscanf(pf,"%s %d %lf",b.name,&(b.price),&(b.word));
//	printf("%s %d %lf",b.name,b.price,b.word);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//������д

//struct Book
//{
//	char name[12];
//	int price;
//	double word;
//};
//
//int main()
//{
//	struct Book b[2] = { { "�������", 30, 87.5 },{"���c",15,50.5} };
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//���ն�����д���ļ�
//	fwrite(&b,sizeof(struct Book),1,pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�����ƶ�

struct Book
{
	char name[12];
	int price;
	double word;
};

int main()
{
	struct Book b[2] = { 0 };
	FILE* pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	//���ն�����д���ļ�
	fread(&b, sizeof(struct Book), 1, pf);
	printf("%s %d %lf",b[0].name,b[0].price,b[0].word);

	fclose(pf);
	pf = NULL;
	return 0;
}
