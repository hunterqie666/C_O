#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct 结构体关键字 stu-结构体标签
//struct stu//结构体类型
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//成员变量
//};//变量列表s1,s2,s3;//s1,s2,s3是三个全局变量
//typedef struct stu//结构体类型
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//成员变量
//}stu;//类型
//int main()
//{//结构体在创建的同时给它赋值这就是初始化
//	stu s1={"张三",20,110120119,"男"};
//	struct  stu s2 = { "sb",20,110202,"男" };
//	return 0;
//}

//struct S
//{
//	int a;
//	int b;
//	char arr[20];
//	double d;
//};
// struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t= { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu tmp)//把变量大小传过去，开辟相同大小的空间
//{
//	printf("name: %s\n",tmp.name);
//	printf("age:  %d\n",tmp.age);
//	printf("tele: %s\n",tmp.tele);
//	printf("sex:  %s\n",tmp.sex);
//}
//void print2(stu* ps)//创建4/8的结构体变量
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->tele);
//	printf("%s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "张三",20,"13545060704" ,"男" };
//	print1(s);
//	print2(&s);
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}//栈：先进后出，后进先出   出栈：删除一个元素
//int main()//压栈：给栈空间放一个元素的这个动作/插入一个元素
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = add(a, b);//大部分编辑器先传b,再传a。
//	return 0;//函数传参就是压栈的过程
//}//资料：函数栈帧的创建和销毁