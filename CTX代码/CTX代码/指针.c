#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);*///pa,pc������һģһ��
//	char *pc = &a;
//	*pc = 0;
//	return 0;
//}//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* pc==>4  char* pc==>1 ==>���������ʹ�С

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
//}//ָ�����;�����ָ����һ���߶�Զ��ָ��Ĳ�����

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

//int main()//Ұָ��
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;//���ǲ�֪���ǻ�ָ��ʲô��ַ
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
//	}//p++��Խ��arr10�����Χ֮��p�ͱ���ΪҰָ�룬���ʷǷ��Ŀռ䡣
//	return 0;
//}

//int* test()//�ռ���ͷ�
//{
//	int a = 10;
//	return &a;
//}//a�Ǿֲ��������������ÿ���һ��ռ䣬��������֮����ռ�ᱻ�ջأ�Ȼ�����ַ���Ǵ���ȥ��
////��*pȥѰ����ռ��ʱ����ռ���ܷ��˱�Ķ���/��ռ��Ѿ�û��ʲô������===>Ұָ��
//int main()
//{
//	int *p=test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//����ָ��a,�������a��������ɿ�ָ�룬�Է�ֹ���Ұָ��
//	return 0;
//}//Ҫʹ��ָ���ʱ��ͳ�ʼ������ʹ�õ�ʱ������ó�NULL

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
//}//��ͬһ��ռ䣩ָ��-ָ��==>�м�Ԫ�صĸ���

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
//	printf("%p\n", arr);//��ַ-��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);//��������ĵ�ַ
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
//	int * pa = &a;//paһ��ָ����� int*һ��ָ������
//	int* * ppa=&pa;//ppa���Ƕ���ָ�����
//	**ppa = 100;
//	printf("%d\n", **ppa);
//	return 0;
//}//*ppa��ָ����ָ��Ķ���(pa)��int*���͵ģ�*pa��ָ����ָ��Ķ���(a)��������int

//ָ������--���� ����ָ��--ָ��
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
//	printf("%s\n", pc);//%s�Ǹ��ݵ�ַ����ӡ�ģ����Բ��ý�����
//	return 0;
//}//��ӡ�ַ�����ֻҪ��ӡ��Ԫ�ص�ַ���ͻ�һֱ������ȥֱ��'\0'Ϊֹ
//
//int main()
//{//�ѣ�a����Ԫ�صĵ�ַ����p==>��ŵ�ַ�ı�����ָ�� 
//	const char* p = "abcdef";//"abcdef"�ǳ����ַ���
//	*p = 'w';//��Ϊabcdef �ǳ����ַ��� ���ַ�Ӧ�ò��ܱ��ı�
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
//	{//p1��p2�ַ�������һģһ�����Ҷ�Ϊ�����ַ��������޸�
//	//û��Ҫ�������ݵ�ַ��p1��p2�������a�ĵ�ַ
//	//p1��p2�����������ı���ֻ��ָ����ͬһ��ռ�
//		printf("hehe\n");//1
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//	if (arr1 == arr2)
////	{//arr1����Ԫ�ش�ŵ�ַa��arr2��Ԫ�ش�ŵ�ַa���ŵ���������ͬ�ĵ�ַ
//////����arr1 != arr2;��Ҫ������ַ���ͬ��������ͬ
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

//int* p1[10]; ָ������
//p1���Ⱥͷ����Ž��==>���� ������10��Ԫ�أ�ÿ��Ԫ����int*���� 
// ���ָ������� char* arr[5]; ��ŵ���������Ԫ�ص�ַ
//int(*p2)[10]; ����ָ��
//p2���Ⱥ�*���==>ָ�룬ָ�����飬������10��Ԫ�أ�ÿ��Ԫ����int 
//char* (*p)[5] = &arr;ָ�������ָ��  ����&arr������arr��ַ��Ȼ��������������(*p)��
//int (*parr3[10])[5]:��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int

//int main()
//{//����arr�����Ԫ�أ��������Ԫ�ص�������char*��
//	char* arr[5];//ָ������
//	char* (*p)[5] = &arr;//����ָ��
//	//char* ==> (*pָ�������Ԫ��������char*��)
//	//(*p)[5] ==> (*��ʾ����ָ�룬p��ָ�������,[5]��ָ(*p)ָ������飨arr �������Ԫ��)
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
//	//	// *p <==> arr arr����Ԫ�ص�ַ +i�����������˼���Ԫ��
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p)[i]);//(*p)��������ַ[i]�ǵڼ���Ԫ��
//	//	//���������  (*p)[i] <==> p[i]
//	//}
//	return 0;
//}

////�������������ʽ
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
////������ָ�����ʽ
////��λ���鴫�δ�������Ԫ�صĵ�ַ ��ά������Ԫ�صĵ�ַ�ǣ���һ�еĵ�ַ
//void print2(int(*p)[5], int x, int y)
//{//print2�Ѷ�ά���鿴��һά���飬һ����һ��Ԫ�ء�
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
////*(p+i)�൱���ҵ���һ�е�һ��Ԫ�صĵ�ַ��+j������һ�е�Ԫ�� ����*��ʾi��j�е�Ԫ��
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
// ����ָ��-��ָ������ָ��-��ź�����ַ��ָ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%p\n", &add);
//	//printf("%p\n", add);
//	//&�������ͺ��������Ǻ����ĵ�ַ
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
////ctx��һ����������
////ctx�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
////ctx�����ķ�������Ҳ��һ������ָ�� : �ú���ָ��ָ��ĺ����Ĳ�����int������������void
////�����ַ�ʽ�ȼ� 
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
	// return 0;//��������ֽ����һ��˵��*���Ǹ�����
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
//	//��Ҫһ�����飬���������Դ��4��������ַ-����ָ�������
//	int (*ctx[4])(int, int) = { Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", ctx[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest ,const char* src);
// 1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*)
// 2.дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);

////������
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
////int main()//����ָ������
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	int (*pfarr[])(int, int)={0,add,sub,mul,div};
////	//pfarr ����ָ������ - ת�Ʊ�
////	do
////	{
////		menu();
////		printf("��ѡ��:>");
////		scanf("%d", &input);
////		if (input >= 1 && input<= 4)
////		{
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			int ret = pfarr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("�˳�\n");
////		}
////		else
////		{
////			printf("ѡ�����\n");
////		}
////	} while (input);
////	return 0;
////}
////̫Ϊ���������ࡣ
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0; 
////	do
////	{
////		menu();
////		printf("��ѡ��:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n",add(x,y));
////			break;
////		case 2:
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", sub(x, y));
////			break;
////		case 3:
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", mul(x, y));
////			break;
////		case 4:
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", div(x, y));
////			break;
////		case 0:
////			printf("�˳�");
////			break;
////		default:
////			printf("ѡ�����\n");
////		}
////	} while (input);
////	return 0;
////}
// //������case 1����ĵ�ַ���ݸ�pf���ָ�룬�ں����ڲ�ͨ������ָ��ȥ���ú��� �����õĺ���-�ص�����
//void calc(int (*pf)(int ,int))
//{
// //����ĸ�������� pf����add�����ĵ���-pf�Ǻ���������add�ĵ�ַ
// //void calc(int add (��Ҫ������� ,��Ҫ�������))
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n",pf(x,y));
//}
//int main()
//{//�ص�����
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�˳�");
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//} 

//// ָ����ָ�������ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 }; 
//	int (*p)[10]= &arr;//ȡ������ĵ�ַ
//
//	int (*pf)(int, int);//����ָ��
//	int (*pfarr[4])(int ,int);//pfarr��һ������-����ָ������
//	int (*(*ppfarr[4])(int, int)=&pfarr;//ppfarr��һ��ָ��[����ָ������]��ָ��
//	//ppfarr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ��int (*)(int, int)
//	return 0;
//}

////�ص�����
//print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
////������������print���ǰ����ַ�ȴ���test����亯���ڲ�ĳ�ֳ�������ȥ�����������
//int main()
//{
//	test(print);
//	return 0;
//}//test 
// //hehe:bit

////ð������
//// test1��test2��test3�Ƕ�qsort���÷���ʾ��test4��test5�Ƕ�����ôʵ�ֵ���ʾ��
//// qsort - �⺯�� - ���� 
////void bubble_sort(int arr[], int sz)
////{
////	int i = 0;
////	//����
////	for (i = 0; i < sz-1; i++)
////	{
////		//��һ��ð������
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
////		compare����ָ��ָ�����һ������������Ҫ�Ƚ�����Ԫ�صĵ�ַ��
////		��Ϊ��֪������������ʲô���;���void* el1��el2��Ҫ��������Ԫ�صĵ�ַ�����бȽ�
////		void* �ܽ����κ����͵ĵ�ַ��
////		//��һ������:�������������Ԫ�ص�ַ//�ڶ�������:�����������Ԫ�ظ���
////		//����������:�����������ÿ��Ԫ�صĴ�С-��λ���ֽ�
////		//���ĸ�����:�Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
////					 ����ָ�������������:���Ƚϵ�����Ԫ�صĵ�ַ
//
//#include <string.h>
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ
//	return *(int*)e1 - *(int*)e2;
//	//��Ϊvoid*���ܽ����ã����Խ���ǿ������ת�����н����ã�
//	//compare��e1<e2����ֵ��<0 ��e1=e2����ֵ=0 ��e1>e2����ֵ��>0
//}
////void test1()
////{
////	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//// 	//����arr��������sz��Ԫ��,sizeof(arr[0])Ԫ�ش�С��Ҫ�ȽϺ����Ĵ�С��cmp_int
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
////	float f[] = { 9.0,8.0,7.0,6.0,5.0};//����������������******
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
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ�����<>=���Ƚϣ�Ӧ����strcmp����
//	//strcmp���ȽϷ���ֵ��compareһ��
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}//��ĸ�����ǰ�������ĸ��˳����������
////void test3()
////{
////	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
////	//sizeof(s[0])�ڽṹ����size_t width���ֽڴ�С��>=name,age�Ĵ�С�ġ�
////}
//
////ʵ��bubble_sort��������Ա���Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
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
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)//********
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}//ǿ��ת����char��char�Ĵ�С��1���ֽڡ�1+width(һ��Ԫ�صĴ�С)==>������ĵڶ���Ԫ��
//		}
//	}
//}
//
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ����αȽϴ����������е�Ԫ��
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
//	 //���ð�ݺ���ֻ�ܵ�����������
//	//	bubble_sort(f, sz);
//	return 0;
//}
//int main()                                          
//{
//	int a = 0;
//	//int* pa = &a;
//	//char* pc = &a;//�����鱨��Ļ�û���⡣
//	
//	void* p = &a;//û�б��������͵�ָ��
//	//*p = 0;==>�Ƿ��ļ��Ѱַ
//	//p++;ָ��ȷ���Ӽ�������ʱ��ҲҪȷ������ ==>λ�ô�С
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ��н����õĲ�����ָ�����;��������õ�ʱ����ʼ����ֽ�==>û�о������ͣ�����Ҫ���ʼ����ֽڲ�ȷ����
//	//void* ���͵�ָ�� ���ܽ���+ -�����Ĳ���
//	return 0;
//}


