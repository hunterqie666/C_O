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
//}//满足两个条件；递归写出来容易溢出--->栈溢出
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
//}//数字大了的话效率太慢了 
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
//}//先想怎么用，再说怎么去实现--> TDD--测试驱动开发

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
//	main();//这里调用没有条件
//	return 0;
//}//栈溢出 栈区被耗干了 函数的调用都在栈区。
//内存会简单分为栈区(局部变量)，堆区(动态开辟的 内存 malloc calloc)，静态区(全局变量，static修饰的变量)。

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

//void Swap1(int x, int y)//Swap函数 交换
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

//int Max(int x, int y)//比大小
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

////调用字符进行存储的都是存储的是ASCII码值 ASCII是整数
//int main()//memset - 内存 set -设置 ----------------
//{//void * memset(void *ptr,int value,size_t num)
// //ptr这个地址指向的内存块 前num个字节 设置成value 
//	char arr[] = "hello world";
//	memset(arr, "ctx", 5);//
//	printf("%s\n", arr);
//	return 0;
//}//假如'ctx'-->xxxxx world   "ctx"-->||||| world 字符串定义无效 ctx 为无效数据，无法用编码进行表示

//int main()//strcpy --string copy 字符串拷贝
//{// \0计算字符串长度的结束标志 打印字符的结束标志
//	char  arr[] = "bit";//"bit\n"这边\n是结束标志 所以说后面打印#没有出来
//	char arr2[20] = "###########";
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//	return 0;
//}
//---------库函数
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