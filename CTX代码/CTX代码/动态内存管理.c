#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//malloc和free
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(10*sizeof(int));//因为malloc返回的是void*类型的所以要强制类型转换一下
//	if (p == NULL)//当空间没有给值得时候里面放的是'cd'(VS起码是这样)
//	{
//		打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当你不用的时候就要还回去
//	//free
//	free(p);//free完了之后虽然空间被释放掉了，但是其p依然有能力找到这块空间
//	p = NULL;//怕有人有非分之想，就给P赋值空指针
//	return 0;
//}

////calloc
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%d ", *(p + i));//0 0 0 0 0 0 0 0 0 0
	//	}
	// }
//		free(p);
//		p = NULL;
//		return 0;
//}

////realloc-调整动态开辟内存空间的大小
//int main()
//{
//	int* p = (int*)malloc(20); 
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，28个自字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	
//	//realloc使用的注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域开辟一块满足需求的空间，
//	// 并且把原来内存中的数据拷贝回来，释放旧的内存空间,最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc函数的返回值
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free (p);
//	p=NULL;
//	return 0;
//}


//使用free释放一块开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++=i;//后置++，先使用再++，p和*先使用指向一块地址
//		//再把i的值放在那个地址，到10次之后，p已经指向了开辟地址的最后面
//		//如果free-->越界访问了。
//	}
//	//回收空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[0];//柔性数组成员 未知大小的数组->柔性数组成员
//	//int arr[] 柔性数组成员     -->数组大小可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i; 
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S *ps =(struct S*) malloc(sizeof(struct S));
//	ps->arr = malloc(10*sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int*ptr= realloc(ps->arr,10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}
