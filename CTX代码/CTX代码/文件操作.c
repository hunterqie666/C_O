#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//���ļ�test.txt//���·��
//	//.. ��ʾ��һ��·��
//	//.  ��ʾ��ǰ·��
//	//fopen("../../test.txt"��"r")
//	//fopen ("test.txt"��"r");
//	//����·����д��
//	//fopen("D:\\C���Դ����ļ�\\CTX����\\CTX����\\test.txt","r");
//	
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//��ȡ�ļ�
//	
//	//�ر��ļ�
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
//	//д�ļ�
//	fputc('c', ctx);
//	fputc('t', ctx);
//	fputc('x', ctx);
// //���ļ����ƿ������ַ�Ȼ��д��ȥ
// //int ch =fgetc(ctx);
// //printf("%c",ctx);
//
//	//�ر��ļ�
//	fclose(ctx);
//	ctx = NULL;
//	return 0;
//}

////�Ӽ��������������Ļ
////����&��Ļ�����ⲿ�豸 
////���� - ��׼�����豸 - stdin
////��Ļ - ��׼����豸 - stllout
////��һ������Ĭ�ϴ򿪵��������豸
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
//	//���ļ�
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
//	//д�ļ�
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
//	//��ʽ������ʽд�ļ�
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
//	//��ʽ�������뺯��
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
//	struct S s = { "����",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
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
//	//�����Ƶ���ʽ���ļ�
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
//	//1.��λ�ļ�ָ��
//	fseek(pf, 4, SEEK_CUR);
//	//2.��ȡ�ļ�
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
//	//1.��λ�ļ�ָ��
//	//fseek(pf,-2,SEEK_END); 
//	int ch=fgetc(pf);//��ȡ֮�����ļ�ָ��ƫ�ƻ�����ƫ��1��
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
//	//���ļ�
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