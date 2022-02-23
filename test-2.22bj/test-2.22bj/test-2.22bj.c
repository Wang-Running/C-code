#define _CRT_SECURE_NO_WARNINGS
//文件的打开和关闭
//#include <stdio.h>
//int main()
//{
//	FILE * pFile;
//	//打开文件
//	pFile = fopen("myfile.txt", "w");
//	//文件操作
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		//关闭文件
//		fclose(pFile);
//      pFile = NULL;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE * pFile;
//	//打开文件
//	pFile = fopen("D:\\C code\\C-code\\myfile.txt", "w");
//	//文件操作
//	return 0;
//}

//字符输入函数fgetc
#include <stdio.h>
#include <string.h>
#include <errno.h>

//写文件
//int main()
//{
//	FILE * pf;
//	//打开文件
//	pf = fopen("myfile.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	//文件操作
//	for (char pa = 'a'; pa <= 'z'; pa++)
//	{
//		//fputc(pa,stdout);
//		fputc(pa, pf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////读文件
//int main()
//{
//	FILE * pf;
//	//打开文件
//	pf = fopen("myfile.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//文件操作
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////写一行
//int main()
//{
//	FILE * pf;
//	//打开文件
//	pf = fopen("myfile.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//文件操作
//	fputs("hello\n",pf);
//	fputs("world\n",pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//读一行
//int main()
//{
//	FILE * pf;
//	//打开文件
//	pf = fopen("myfile.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//文件操作
//	char buf[1000] = { 0 };
//	while (fgets(buf, 1000, pf)!=NULL)
//	{
//		printf("%s", buf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//实现一个代码将myfile.txt拷贝一份生成myfile2.txt
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
//	//拷贝文件
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

//格式化输出函数-fprintf

//struct Book
//{
//	char name[12];
//	int price;
//	double word;
//};
//
//int main()
//{
//	struct Book b = {"程序设计",30,87.5};
//	FILE* pf = fopen("data.txt","w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	//写格式化数据
//	fprintf(pf,"%s %d %lf",b.name,b.price,b.word);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//格式化输入函数-fscanf

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
//	//读格式化数据
//	fscanf(pf,"%s %d %lf",b.name,&(b.price),&(b.word));
//	printf("%s %d %lf",b.name,b.price,b.word);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//二进制写

//struct Book
//{
//	char name[12];
//	int price;
//	double word;
//};
//
//int main()
//{
//	struct Book b[2] = { { "程序设计", 30, 87.5 },{"理解c",15,50.5} };
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//按照二进制写入文件
//	fwrite(&b,sizeof(struct Book),1,pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//二进制读

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
//	//按照二进制写入文件
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
//	struct Book b = { "程序设计", 30, 87.5 };
//	struct Book b2 = { 0 };
//	//写入文件
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
//	FILE* pf=fopen("test.txt","r");//提前创建文本abcdef
//	if (pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch); //打印a后向后一位，此时指针指向b
//	//定位文件指针
//	fseek(pf, 2, SEEK_CUR);//SEEK_CUR当前位置，向后两位
//	ch = fgetc(pf);
//	printf("%c\n", ch);  //此时应是d
//
//	fseek(pf, -1, SEEK_END);//SEEK_END文件末尾，向前一位
//	ch = fgetc(pf);
//	printf("%c\n", ch);  //此时应是f
//
//	fseek(pf, 2, SEEK_SET);//SEEK_SET文件起始，位置向后两位
//	ch = fgetc(pf);
//	printf("%c\n", ch);  //此时应是c
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//提前创建文本abcdef
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch); //打印a后向后一位，此时指针指向b
//	int ret = ftell(pf);  //返回的是指针从起始位置开始的偏移量
//	printf("%d\n",ret);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//rewind
int main()
{
	FILE* pf = fopen("test.txt", "r");//提前创建文本abcdef
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	int ch = fgetc(pf);
	printf("%c\n", ch); //打印a后向后一位，此时指针指向b
	ch = fgetc(pf);
	printf("%c\n", ch); //打印b后向后一位，此时指针指向c
	int ret = ftell(pf);  //返回的是指针从起始位置开始的偏移量
	printf("%d\n", ret);  //2
	rewind(pf); //返回起始位置，指向a
	ch = fgetc(pf);
	printf("%c\n", ch); //打印a

	fclose(pf);
	pf = NULL;
	return 0;
}