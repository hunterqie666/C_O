#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct �ṹ��ؼ��� stu-�ṹ���ǩ
//struct stu//�ṹ������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//��Ա����
//};//�����б�s1,s2,s3;//s1,s2,s3������ȫ�ֱ���
//typedef struct stu//�ṹ������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//��Ա����
//}stu;//����
//int main()
//{//�ṹ���ڴ�����ͬʱ������ֵ����ǳ�ʼ��
//	stu s1={"����",20,110120119,"��"};
//	struct  stu s2 = { "sb",20,110202,"��" };
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
//void print1(stu tmp)//�ѱ�����С����ȥ��������ͬ��С�Ŀռ�
//{
//	printf("name: %s\n",tmp.name);
//	printf("age:  %d\n",tmp.age);
//	printf("tele: %s\n",tmp.tele);
//	printf("sex:  %s\n",tmp.sex);
//}
//void print2(stu* ps)//����4/8�Ľṹ�����
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->tele);
//	printf("%s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "����",20,"13545060704" ,"��" };
//	print1(s);
//	print2(&s);
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}//ջ���Ƚ����������ȳ�   ��ջ��ɾ��һ��Ԫ��
//int main()//ѹջ����ջ�ռ��һ��Ԫ�ص��������/����һ��Ԫ��
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = add(a, b);//�󲿷ֱ༭���ȴ�b,�ٴ�a��
//	return 0;//�������ξ���ѹջ�Ĺ���
//}//���ϣ�����ջ֡�Ĵ���������