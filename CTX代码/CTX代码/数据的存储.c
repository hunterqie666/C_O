#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}


//指针类型的意义：
// 1．指针类型决定了指针解引用操作符能访问几个字节: char*p;*p访问了1个字节，int*p;*p访问4个字节
// 2．指针类型决定了指针+1，-1，加的或者减的是几个字节; char*p; p+1,跳过一个字符，int*p; p+1,跳过一个整形-4个字节
//int che()
//{
//	int a = 1;
//	return *(char*)&a;//最终优化
//	//char* p = (char*)&a;
//	//return *p;//优化1
//	//if (*p == 1)//初识
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return 0;
//	//}
//}
//int main()//看大端还是小端
//{
//	int ret = che();
//	if (ret == 1)
//	{
//		printf("little\n");
//	}
//	else
//	{
//		printf("big\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}//-1 -1 255 

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//l1111111111111111111111110000000 - 补码
//	//10000000
//	//l1111111111111111111111110000000- 补码
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//    char a = 128;
//    printf("%u\n", a);
//    return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}//-10

//#include <Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);//延迟100毫秒
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//}//255

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}//死循环

//int main()
//{
//	int n = 9;
//	float* pf = (float*)&n;
//	printf("%d\n", n);//9
//	printf("%f\n", *pf);//0.000000
//
//	*pf = 9.0;
//	printf("%d\n", n);//1091567616
//	printf("%f\n", *pf);//9.000000
//	return 0;
//}