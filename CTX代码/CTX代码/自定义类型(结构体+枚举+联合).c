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
////结构体变量在哪个位置，第一个变量就放哪一个位置


////设置默认对齐数位1
//#pragma pack(1)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消设置的默认对齐数
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

////位段-位：二进制位-->节省空间用的
//struct S
//{
//	int a : 2;//只要占2个bit位
//	int b : 5;
//	int c : 10;
//	int d : 30;//因为这里是int 其大小是4个字节，32个比特位所以其位段不能超过32
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


//枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	MALE=2,//0
//	FEMALE=4,//1
//	SECRET=8,//2  这是赋值 给常量赋初始值
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
//	enum Color c = 2;//编译器不严格，2是int类型的
//	return 0;
//}


////联合-联合体-共用体
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
////	//返回1 小端
////	//返回0 大端
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
//	u.i = 1;//用union给的规则来看 c和i是公用一个内存的，其第一个字节存放的位置是一个位置
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret == *(char*)&a)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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

