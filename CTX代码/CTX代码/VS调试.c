#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//F5-启动调试-和F9配合使用
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//断点 F9切换断点 代码执行到这里停下来
//执行逻辑上的下一个断点
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

//add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = add(a, b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//test3()
//{
//	printf("hehe\n");
//}
//test2()
//{
//	test3();
//}
//test1()
//{
//	test2();
//}
//test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	/*for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}*/
//	return 0;
//}

//void _strcpy(char* dest,char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void _strcpy(char* dest, char* src)
//{
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//
//	}
//}

//#include <assert.h>
////char* 把原数据拷贝到目的地里面去，感受目的地的变化，把目的地的地址返回来。
//char*  _strcpy(char* dest,const char* src)
//{
//	int* ret = dest;
//	assert(dest !=NULL);//断言 表达式结果为真，什么事情也不发生。为假的话就会报错
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)//假如dest和src的位置写反了，因为上面加了const，其scr值不能改变，会出现报错。
//	{
//		;
//	}
//	return ret;
//}
//int main()//strcpy的代码实现
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s\n", _strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	/*const int* p = &num;*/
//	int* const p = &num;
//	//const放在指针变量的*左边时，修饰的是*p,也就是说:不能通过p来改变*p(num)的值,
//	//const放在指针变量的*右边是，修饰的是指针变量p本身，p不能被改变了
//	*p = 20;
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

//#include <assert.h>
//int _strlen(const char *str)
//{
//	int co = 0;
//	assert(str != NULL);//保证指针的有效性
//	while (*str != '\0')
//	{
//		co++;
//		str++;
//	}
//	return co;
//}
//int main()//strlen的实现
//{
//	char arr[] = "abcdef";
//	int len = _strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}