#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct t
//{
//	short age;
//	double weight;
//};
//struct s
//{
//	char c;
//	struct t gg;
//	int a;
//};
//
//int main()
//{
//	struct s a = { 'c',{55.6,30},10 };
//	printf("%c %lf %d %d\n",a.c,a.gg.weight,a.gg.age,a.a );
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//}; struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(struct S1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(struct S2));//8
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(struct S3));//16
//	struct S3 s4 = { 0 };
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}
////�ṹ��������ĸ�λ�ã���һ�������ͷ���һ��λ��


////����Ĭ�϶�����λ1
//#pragma pack(1)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//int main()
//{
//	struct S s;
//	return 0;
//}

//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	struct S s = { 0 }; 
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//	return 0;
//}

////λ��-λ��������λ-->��ʡ�ռ��õ�
//struct S
//{
//	int a : 2;//ֻҪռ2��bitλ
//	int b : 5;
//	int c : 10;
//	int d : 30;//��Ϊ������int ���С��4���ֽڣ�32������λ������λ�β��ܳ���32
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
//	MALE=2,//0
//	FEMALE=4,//1
//	SECRET=8,//2  ���Ǹ�ֵ ����������ʼֵ
//};
//
//enum Color
//{
//	RED,
//	GREEN,
//	BULE,
//};
//
//int main()
//{
//	//enum Sex s = MALE;
//	enum Color c = 2;//���������ϸ�2��int���͵�
//	return 0;
//}


////����-������-������
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof (u));//4
//	printf("%p\n", &u);//00000034F18FFA94
//	printf("%p\n", &(u.c));//00000034F18FFA94
//	printf("%p\n", &(u.i));//00000034F18FFA94
//	return 0;
//}

////check_sys()
////{
////	int a = 1;
////	//����1 С��
////	//����0 ���
////	return *(char*)&a;
////}
//
//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;//��union���Ĺ������� c��i�ǹ���һ���ڴ�ģ����һ���ֽڴ�ŵ�λ����һ��λ��
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret == *(char*)&a)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//union Un
//{
//	int a;
//	char arr[5];
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

