#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//打开文件test.txt//相对路径
//	//.. 表示上一级路径
//	//.  表示当前路径
//	//fopen("../../test.txt"，"r")
//	//fopen ("test.txt"，"r");
//	//绝对路径的写法
//	//fopen("D:\\C语言代码文件\\CTX代码\\CTX代码\\test.txt","r");
//	
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读取文件
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE*ctx=fopen("test.txt", 'w');
// // FILE*ctx=fopen("test.txt", 'r');
//	if (ctx == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('c', ctx);
//	fputc('t', ctx);
//	fputc('x', ctx);
// //读文件类似看几个字符然后写下去
// //int ch =fgetc(ctx);
// //printf("%c",ctx);
//
//	//关闭文件
//	fclose(ctx);
//	ctx = NULL;
//	return 0;
//}

////从键盘输入输出到屏幕
////键盘&屏幕都是外部设备 
////键盘 - 标准输入设备 - stdin
////屏幕 - 标准输出设备 - stllout
////是一个程序默认打开的两个流设备
////stdin FILE *
////stdout FILE * 
////stderr FILE *
//
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main()
//{
//	char buff[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buff, 1024, pf);
//	puts(buff);
//	//printf("%s", buff);
//	fgets(buff, 1024, pf);
//	//printf("%s", buff);
//	puts(buff);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	char buff[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world", pf);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buff[1024] = { 0 };
//	//fgets(buff, 1024, stdin);
//	//fputs(buff,stdout);
//	gets(buff);
//	puts(buff);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", 'w');
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", 'r');
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入函数
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int  age;
//	double score;
//};
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct S
//{
//	char name[20];
//	int  age;
//	double score;
//};
//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %1f\n", tmp.name,tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL);
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, 4, SEEK_CUR);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL);
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf,-2,SEEK_END); 
//	int ch=fgetc(pf);//读取之后其文件指针偏移会往后偏移1个
//	printf("%c\n", ch);
//
//	//int pos = ftell(pf);
//	//printf( "%d\n", pos);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch=fgetc(pf))!=EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf(" end of file\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}