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

//struct Book
//{
//	char name[12];
//	int price;
//	double word;
//};
//
//int main()
//{
//	struct Book b[2] = { 0 };
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//���ն�����д���ļ�
//	fread(&b, sizeof(struct Book), 1, pf);
//	printf("%s %d %lf",b[0].name,b[0].price,b[0].word);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//sprintf--sscanf
//struct Book
//{
//	char name[12];
//	int price;
//	double word;
//};
//
//int main()
//{
//	struct Book b = { "�������", 30, 87.5 };
//	struct Book b2 = { 0 };
//	//д���ļ�
//	char buf[100] = { 0 };
//	sprintf(buf,"%s %d %lf", b.name, b.price, b.word);
//	printf("%s\n",buf);
//	sscanf(buf, "%s %d %lf", b2.name,&( b2.price),&( b2.word));
//	printf("%s %d %lf\n", b2.name, b2.price, b2.word);
//	return 0;
//}

////fseek
////int fseek ( FILE * stream, long int offset, int origin );
//int main()
//{
//	FILE* pf=fopen("test.txt","r");//��ǰ�����ı�abcdef
//	if (pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch); //��ӡa�����һλ����ʱָ��ָ��b
//	//��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);//SEEK_CUR��ǰλ�ã������λ
//	ch = fgetc(pf);
//	printf("%c\n", ch);  //��ʱӦ��d
//
//	fseek(pf, -1, SEEK_END);//SEEK_END�ļ�ĩβ����ǰһλ
//	ch = fgetc(pf);
//	printf("%c\n", ch);  //��ʱӦ��f
//
//	fseek(pf, 2, SEEK_SET);//SEEK_SET�ļ���ʼ��λ�������λ
//	ch = fgetc(pf);
//	printf("%c\n", ch);  //��ʱӦ��c
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//��ǰ�����ı�abcdef
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch); //��ӡa�����һλ����ʱָ��ָ��b
//	int ret = ftell(pf);  //���ص���ָ�����ʼλ�ÿ�ʼ��ƫ����
//	printf("%d\n",ret);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//rewind
int main()
{
	FILE* pf = fopen("test.txt", "r");//��ǰ�����ı�abcdef
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch); //��ӡa�����һλ����ʱָ��ָ��b
	ch = fgetc(pf);
	printf("%c\n", ch); //��ӡb�����һλ����ʱָ��ָ��c
	int ret = ftell(pf);  //���ص���ָ�����ʼλ�ÿ�ʼ��ƫ����
	printf("%d\n", ret);  //2
	rewind(pf); //������ʼλ�ã�ָ��a
	ch = fgetc(pf);
	printf("%c\n", ch); //��ӡa

	fclose(pf);
	pf = NULL;
	return 0;
}