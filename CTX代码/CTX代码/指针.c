#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);*///pa,pc输出结果一模一样
//	char *pc = &a;
//	*pc = 0;
//	return 0;
//}//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* pc==>4  char* pc==>1 ==>看数据类型大小

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}//指针类型决定：指针走一步走多远（指针的步长）

//int main()
//{
//	int arr[10] = { 0 };
//	/*int* p = arr;*/
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()//野指针
//{
//	//int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	*p = 20;//我们不知道那会指向什么地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}//p++在越过arr10这个范围之后，p就被称为野指针，访问非法的空间。
//	return 0;
//}

//int* test()//空间的释放
//{
//	int a = 10;
//	return &a;
//}//a是局部变量，函数调用开辟一块空间，函数结束之后其空间会被收回，然而其地址还是传下去了
////当*p去寻找其空间的时候，其空间可能放了别的东西/其空间已经没有什么意义了===>野指针
//int main()
//{
//	int *p=test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL-用来初始化指针的，给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//不会指向a,不会干扰a。把它变成空指针，以防止变成野指针
//	return 0;
//}//要使用指针的时候就初始化，不使用的时候就设置成NULL

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*p);
//		p = p + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}//（同一块空间）指针-指针==>中间元素的个数

//my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);//整个数组的地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ==== %p\n",p+i, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;//pa一级指针变量 int*一级指针类型
//	int* * ppa=&pa;//ppa就是二级指针变量
//	**ppa = 100;
//	printf("%d\n", **ppa);
//	return 0;
//}//*ppa是指针所指向的对象(pa)是int*类型的，*pa是指针所指向的对象(a)的类型是int

//指针数组--数组 数组指针--指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr2[3]={&a,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}

//int main()
//{	
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);//%s是根据地址来打印的，所以不用解引用
//	return 0;
//}//打印字符串，只要打印首元素地址，就会一直进行下去直到'\0'为止
//
//int main()
//{//把（a）首元素的地址赋给p==>存放地址的变量是指针 
//	const char* p = "abcdef";//"abcdef"是常量字符串
//	*p = 'w';//因为abcdef 是常量字符串 其字符应该不能被改变
//	printf("%s\n", p);
//	/*printf("%c\n", *p);
//	printf("%s\n", p);*/
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{//p1和p2字符串内容一模一样，且都为常量字符串不能修改
//	//没必要创建两份地址。p1和p2都存的是a的地址
//	//p1和p2是两个独立的变量只是指向了同一块空间
//		printf("hehe\n");//1
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//	if (arr1 == arr2)
////	{//arr1的首元素存放地址a和arr2首元素存放地址a其存放的是两个不同的地址
//////所以arr1 != arr2;不要误解其字符相同其数组相同
////		printf("hehe\n");
////	}
////	else
////	{
////		printf("haha\n");
////	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	
//	int* pr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(pr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int* p1[10]; 指针数组
//p1首先和方括号结合==>数组 数组有10个元素，每个元素是int*类型 
// 存放指针的数组 char* arr[5]; 存放的是数组首元素地址
//int(*p2)[10]; 数组指针
//p2首先和*结合==>指针，指向数组，数组有10个元素，每个元素是int 
//char* (*p)[5] = &arr;指向数组的指针  这里&arr是整个arr地址，然后把整个数组存在(*p)里
//int (*parr3[10])[5]:是一个数组，该数组有10个元素，每个元素是一个数组指针该数组指针指向的数组有5个元素，每个元素是int

//int main()
//{//数组arr有五个元素，里面五个元素的类型是char*的
//	char* arr[5];//指针数组
//	char* (*p)[5] = &arr;//数组指针
//	//char* ==> (*p指向数组的元素类型是char*的)
//	//(*p)[5] ==> (*表示的是指针，p是指针的名字,[5]是指(*p)指向的数组（arr ）有五个元素)
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int(*p)[10] = &arr;
//	//int  i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", ( * p + i));
//	//	// *p <==> arr arr是首元素地址 +i就是往后跳了几个元素
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p)[i]);//(*p)是整个地址[i]是第几个元素
//	//	//可以想象成  (*p)[i] <==> p[i]
//	//}
//	return 0;
//}

////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针的形式
////二位数组传参传的是首元素的地址 二维数组首元素的地址是：第一行的地址
//void print2(int(*p)[5], int x, int y)
//{//print2把二维数组看成一维数组，一行是一个元素。
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
////*(p+i)相当于找到了一行的一个元素的地址，+j就是那一行的元素 外面*表示i行j列的元素
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3, 5);
//	print2(arr, 3, 5);
//	return 0;
//} 

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ",arr[i]);
//		printf("%d ", p[i]); // arr[i] == *(arr + i) == *(p + i) == p[i]
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
// 函数指针-是指向函数的指针-存放函数地址的指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%p\n", &add);
//	//printf("%p\n", add);
//	//&函数名和函数名都是函数的地址
//	int (*p)(int, int) = add;
//	printf("%d\n", (*p)(5, 5));
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("ctxzj");
//	return 0;
//}

//void(*ctx(int, void(*)(int))(int);
////ctx是一个函数声明
////ctx函数的参数有2个，第一个是int。第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
////ctx函数的返回类型也是一个函数指针 : 该函数指针指向的函数的参数是int，返回类型是void
////这两种方式等价 
//typedef void(*yyds)(int);
//yyds ctx(int, yyds);

 //int add(int x, int y)
 //{
	// int z = 0;
	// z = x + y;
	// return z;
 //}
 //int main()
 //{
	// int a = 10;
	// int b = 20;
	// int (*p)(int, int) = add;
	// printf("%d\n", (p)(5, 5)); 
	// printf("%d\n", (*p)(5, 5));
	// printf("%d\n", (**p)(5, 5));
	// printf("%d\n", (***p)(5, 5));
	// return 0;//输出的四种结果都一样说明*就是个摆设
 //}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	int(*pa)(int, int) = Add;
//	//需要一个数组，这个数组可以存放4个函数地址-函数指针的数组
//	int (*ctx[4])(int, int) = { Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", ctx[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest ,const char* src);
// 1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*)
// 2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);

////计算器
//void menu()
//{
//	printf("***************************\n");
//	printf("******** 1.add  ***********\n");
//	printf("******** 2.sub  ***********\n");
//	printf("******** 3.mul  ***********\n");
//	printf("******** 4.div  ***********\n");
//	printf("******** 0.exit ***********\n");
//	printf("***************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
////int main()//函数指针数组
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	int (*pfarr[])(int, int)={0,add,sub,mul,div};
////	//pfarr 函数指针数组 - 转移表
////	do
////	{
////		menu();
////		printf("请选择:>");
////		scanf("%d", &input);
////		if (input >= 1 && input<= 4)
////		{
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			int ret = pfarr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("退出\n");
////		}
////		else
////		{
////			printf("选择错误\n");
////		}
////	} while (input);
////	return 0;
////}
////太为繁琐，冗余。
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0; 
////	do
////	{
////		menu();
////		printf("请选择:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n",add(x,y));
////			break;
////		case 2:
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", sub(x, y));
////			break;
////		case 3:
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", mul(x, y));
////			break;
////		case 4:
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", div(x, y));
////			break;
////		case 0:
////			printf("退出");
////			break;
////		default:
////			printf("选择错误\n");
////		}
////	} while (input);
////	return 0;
////}
// //把例如case 1里面的地址传递给pf这个指针，在函数内部通过函数指针去调用函数 被调用的函数-回调函数
//void calc(int (*pf)(int ,int))
//{
// //这里的个人理解是 pf是例add函数的调用-pf是函数调用例add的地址
// //void calc(int add (所要算的数字 ,所要算的数字))
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n",pf(x,y));
//}
//int main()
//{//回调函数
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//} 

//// 指向函数指针数组的指针
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 }; 
//	int (*p)[10]= &arr;//取出数组的地址
//
//	int (*pf)(int, int);//函数指针
//	int (*pfarr[4])(int ,int);//pfarr是一个数组-函数指针数组
//	int (*(*ppfarr[4])(int, int)=&pfarr;//ppfarr是一个指向[函数指针数组]的指针
//	//ppfarr 是一个数组指针，指针指向的数组有4个元素
//	//指向的数组每个元素的类型是一个函数指针int (*)(int, int)
//	return 0;
//}

////回调函数
//print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
////不是主动传递print，是把其地址先传到test里，在其函数内部某种场景底下去调用这个函数
//int main()
//{
//	test(print);
//	return 0;
//}//test 
// //hehe:bit

////冒牌排序
//// test1，test2，test3是对qsort的用法演示，test4，test5是对其怎么实现的演示。
//// qsort - 库函数 - 排序 
////void bubble_sort(int arr[], int sz)
////{
////	int i = 0;
////	//趟数
////	for (i = 0; i < sz-1; i++)
////	{
////		//第一趟冒泡排序
////		int j = 0;
////		for (j = 0; j <sz-1-i ; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
//struct Stu
//{
//	char name[20];
//	int age;
//};
////void qsort(void* base, 
////	       size_t num, 
////		   size_t width, 
////		   int(* compare)(const void* elem1, const void* elem2));
////		compare函数指针指向的是一个函数，接收要比较两个元素的地址，
////		因为不知道两个函数是什么类型就用void* el1和el2是要接收两个元素的地址，进行比较
////		void* 能接收任何类型的地址！
////		//第一个参数:待排序数组的收元素地址//第二个参数:待排序数组的元素个数
////		//第三个参数:待排序数组的每个元素的大小-单位是字节
////		//第四个参数:是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
////					 函数指针的两个参数是:待比较的两个元素的地址
//
//#include <string.h>
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值
//	return *(int*)e1 - *(int*)e2;
//	//因为void*不能解引用，所以进行强制类型转换进行解引用，
//	//compare当e1<e2返回值是<0 当e1=e2返回值=0 当e1>e2返回值是>0
//}
////void test1()
////{
////	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//// 	//排序arr数组是有sz个元素,sizeof(arr[0])元素大小，要比较函数的大小用cmp_int
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}
////int cmp_float(const void* e1, const void* e2)
////{
////	//if (*(float*)e1 == *(float*)e2)
////	//	return 0;
////	//else if (*(float*)e1 > *(float*)e2)
////	//	return 1;
////	//else
////	//	return -1;
////	return ((int) (* (float*)e1 - *(float*)e2));
////}
////void test2()
////{
////	float f[] = { 9.0,8.0,7.0,6.0,5.0};//浮点数这里有问题******
////	int sz = sizeof(f) / sizeof(f[0]);
////	qsort(f, sz, sizeof(f[0]), cmp_float);
////	int j = 0;
////	for (j = 0; j < sz; j++)
////	{
////		printf("%f ", f[j]);
////	}
////}
//// 
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能用<>=来比较，应该用strcmp函数
//	//strcmp来比较返回值跟compare一样
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}//字母排序是按照首字母的顺序进行排序的
////void test3()
////{
////	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
////	//sizeof(s[0])在结构体中size_t width的字节大小是>=name,age的大小的。
////}
//
////实现bubble_sort函数程序员，是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型
//
//void Swap(char* buf1,char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		*buf1++;
//		*buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)//********
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}//强制转换成char，char的大小是1个字节。1+width(一个元素的大小)==>到数组的第二个元素
//		}
//	}
//}
//
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	/*test1();*/
//	/*test2();*/
//	/*test3();*/
//	/*test4();*/
//	test5();
//
//	/*bubble_sort(arr, sz);*/
//	 //这个冒泡函数只能调用整形数组
//	//	bubble_sort(f, sz);
//	return 0;
//}
//int main()                                          
//{
//	int a = 0;
//	//int* pa = &a;
//	//char* pc = &a;//不建议报错的话没问题。
//	
//	void* p = &a;//没有报错，无类型的指针
//	//*p = 0;==>非法的间接寻址
//	//p++;指针确定加减整数的时候也要确定类型 ==>位置大小
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针 不能进行解引用的操作，指针类型决定解引用的时候访问几个字节==>没有具体类型，我们要访问几个字节不确定。
//	//void* 类型的指针 不能进行+ -整数的操作
//	return 0;
//}


