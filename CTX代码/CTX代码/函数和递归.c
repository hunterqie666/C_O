#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//void test(int  n )
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}//���������������ݹ�д�����������--->ջ���
//int main()
//{
//	test(1);
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}//���ִ��˵Ļ�Ч��̫���� 
////50
////49 48
////48 47 47 46
////.......
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}//������ô�ã���˵��ôȥʵ��--> TDD--������������

//int b(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a * b(a - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = b(a);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}

//int main()
//{
//	char arr[] = "ctx";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();//�������û������
//	return 0;
//}//ջ��� ջ�����ĸ��� �����ĵ��ö���ջ����
//�ڴ��򵥷�Ϊջ��(�ֲ�����)������(��̬���ٵ� �ڴ� malloc calloc)����̬��(ȫ�ֱ�����static���εı���)��

//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =0;
//	sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("d", 43)));//4321
//	return 0;
//}

//void Swap1(int x, int y)//Swap���� ����
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 19;
//	int b = 20;
//	Swap2(&a, &b);
//	/*Swap1(a, b);*/
//	printf("%d\n%d\n", a, b);
//	return 0;
//}

//int Max(int x, int y)//�ȴ�С
//{
//	if(x > y)
//	return x;
//	else
//	return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

////�����ַ����д洢�Ķ��Ǵ洢����ASCII��ֵ ASCII������
//int main()//memset - �ڴ� set -���� ----------------
//{//void * memset(void *ptr,int value,size_t num)
// //ptr�����ַָ����ڴ�� ǰnum���ֽ� ���ó�value 
//	char arr[] = "hello world";
//	memset(arr, "ctx", 5);//
//	printf("%s\n", arr);
//	return 0;
//}//����'ctx'-->xxxxx world   "ctx"-->||||| world �ַ���������Ч ctx Ϊ��Ч���ݣ��޷��ñ�����б�ʾ

//int main()//strcpy --string copy �ַ�������
//{// \0�����ַ������ȵĽ�����־ ��ӡ�ַ��Ľ�����־
//	char  arr[] = "bit";//"bit\n"���\n�ǽ�����־ ����˵�����ӡ#û�г���
//	char arr2[20] = "###########";
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//	return 0;
//}
//---------�⺯��
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}