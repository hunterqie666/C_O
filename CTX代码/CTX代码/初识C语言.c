#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//struct hunter
//{
//	char name[20];
//	char hobby[100];
//	short dream;
//};
//int main()
//{
//	struct hunter forever = { "ctx","maybe teach ever student and help everybody",100 };
//	printf("%s\n", forever.name);
//	printf("%s\n", forever.hobby);
//	printf("%s\n", forever.dream);
//	return 0;
//}

//struct book//struct �ṹ��ؼ���
//{
//	char name[20];//�������������Ǹ���ַ  
//	short price;//���� �� yyds.price = 100 ;
//};//strcpy ������ȥ��Ŀ�ĵ�,"��Ҫ����ʲô"��strcpy (yyds.name,"NB");
//
//int main()//�ṹ��--�Լ����������һ������--�������Ӷ���
//{//.������ �ṹ�����.��Ա
//// ->	   �ṹ��ָ��->��Ա
//	���ýṹ������-����һ�������͵Ľṹ�����
//	struct book yyds = { "C���Գ������",55 };
//	struct book* y = &yyds;//����������struct book*
//	/*printf("%s\n",(*y).name);
//	printf("%d\n",(*y).price);*/
//	printf("%s\n", y->name);
//	printf("%d\n", y->price);
//	/*printf("������%s\n", yyds.name);
//	printf("�۸�:%dԪ\n", yyds.price);
//	yyds.price = 15;
//	printf("�޸ĺ�ļ۸�:%d\n", yyds.price);*/
//	strcpy(yyds.name, "ţ������ô���ɵ�");
//	strcpy �ַ�������-�⺯�� -<string.h>
//	printf("%s\n", yyds.name);
//	return 0;
//}

//int main()
//{ //��ŵ�ַ�ı�����ָ�����
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 3.15;
//	printf("%d\n", sizeof(pd));
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	//int a = 10;
//	//int* p = &a;//��������Ϊint* ����������p 
//	////�����*������������p��ָ�����  pָ��Ķ�����a Ȼ��aΪint pҲ��int 
//	////�����*ֻ���﷨��ʽ û��ʵ�ʵļ�ֵ
//	//*p = 20;//�����ò�������/�ӷ��ʲ�����
//	///*printf("%p\n", p);*/
//	//printf("%d\n", a); 
//	return 0;
//}
//
//int main()
//{
//	char cha = 'w';
//	char* c = &cha;
//	/**c = 'd';*/
//	printf("%d\n",sizeof c);
//	/*printf("%c\n", cha);
//	return 0;*/
//}//ָ���С��32λƽ̨��4��byte ��64λƽ̨��8��byte
// //32λ��32bit ���� byte��8 -->4
//
// int main()//ָ�뺯����ŵ�ַ ָ���Ǹ�����
//{//&ȡ��ַ
//	int a = 10; //���һ����ַ
//	int* p = &a;//��a�ĵ�ַ�����P����
//	printf("%p\n", p);
//	//��һ�ֱ���������ŵ�ַ��
//	printf("%p\n",&a);
//	*p=20;//*�����ò�����  *p����a����a��ֵ��Ϊ20 
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()//&ȡ��ַ������
//{
//	int num = 10;
//	&num;
//	printf("%p\n", &num);
//	return 0;
//}

////#define max 100 
////int main()
////{
//// int a = max;//�����ʶ������
////return 0;
////}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}//����
//#define MAX(X,Y) (X>Y?X:Y)//���Զ���� -������
//int main()//#define 
//{
//
//	int a = 10;
//	int b = 20;
//	//����
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max=��a>b? a:b��
//	printf("%d\n", max);
//	return 0;
//}

////static ���ξֲ����������������� ����ȫ�ֱ��� ����������
////����ȫ�ֱ��� ���������� �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�� ����Դ�ļ����޷�ʹ�á�
////���κ��� �ı��˺������������ԣ��ı�Ϊ�ڲ��������ԣ�  �������ⲿ��������  
////extern int Add(int, int);
//int main()
//{
//		int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//static �ı�ȫ�ֱ����������� 
//{//extern �����ⲿ���ŵ� 
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()//static ���ξֲ����� 
//{//static�ֲ��������������ڱ㳤
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()//typedef
//{//typedef -���Ͷ���-�����ض��� �൱�������
//	typedef unsigned int u_int;
//		unsigned int num = 20;
//		u_int num = 20;
//	return 0;
//}

//int main()//�������ֲ��ܺ͹ؼ�����ͬ
//{//register �Ĵ������� �Ĵ����Ķ�д�ٶȸ����ڴ� �þ���ʹ�õı���������
//	/*register int a = 10;*///�����a����ɼĴ������� ���յľ���Ȩ�����ڱ���������
//	int a = 10;
//	a = -2; //int ����ı������з��ŵ�
//	//signed int;
//	unsigned int num = 1; //�����޷��ŵ� �Ͷ�������
//	return 0;
//}

//int main()
//{//auto int a =10; auto����Ϊ�Զ����� �����ڲ�����ʹ�õı���
//	int a = 10;//a�ֲ���������{}�Զ����� ����{}�Զ�����-->�Զ����� ǰ����и�autoʡ�Ե�
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[]�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum;
//	sum=Add(a, b);//������ž��Ǻ������ò�����
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//����������
//{//exp1? exp2:exp3 ���exp1Ϊ�� ����exp2��ִ�� ���Ϊ�پ���exp3.
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max=(a > b ? a : b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{//0Ϊ�� ��0Ϊ��
//	int a = 1;
//	int b = 5;
//	int c = a || b;// ||�߼��� ����Ϊ�ٲ�Ϊ�� ��һ��������� ����Ϊ��
//	//int c = a && b;//�߼���&& ȫΪ��  һ��һ��Ϊ��
//	printf("%d\n",c);//�������Ϊ1
//	return 0;
//}

//int main()//ǿ������ת������һ������ת��Ϊһ������
//{//ԭ��3.14��double����ǿ��ת��λint
//	int a = (int)3.14;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = --a; //ǰ��-- ����--����ʹ�� a=9 b=9
//	//int b = a--;//����--����ʹ�ã���-- a=9 b=10
//	//int b = ++a;//ǰ��++ ����++����ʹ�� a=11 b=11
//	//int b = a++;//����++,��ʹ�ã���++ a=11 b=10
//	printf("a=%d  b=%d\n",a,b);
//	return 0;
//}

//int main()//~��λ��2���ƣ�ȡ�� ԭ����0 ��ȡ1 1ȡ0
//{//ԭ�롢���롢����
////ԭ��-->���루����λ���� ����λȡ����-->���루���һλ+1��
// �������һλ-1��-->���루����λ���� ����λȡ����-->ԭ��
////���λ��1Ϊ���� Ϊ0������
////�� 111111111111111111111111 ����
////   111111111111111111111110 ����
////   100000000000000000000001 ԭ��
//	int a = 0;
//		int b = ~a;//�ڴ�������ǲ���
//		printf("%d\n",b); //��ӡ��������ԭ��
//		return 0;
//}//

//int main()//sizeof
//{
//	int a = 4;
//	int arr[] = { 1,2,3,4,5,6 };//�����������ÿ��Ԫ����int
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a );
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main() //!�߼��������� �Ѽٵı�Ϊ��� ��ı�Ϊ�ٵ�
//{// 0-��   ��0--��
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a);
//	printf("%d\n", !b);
//	return 0;
//}

//int main()//��ֵ������ =   +=   -=   *=   /=   &=   ^=   |=   >>=   <<=
//{
//	int a = 2;
//	//a = 20;//��ֵ  ==�ж����
//	//a = a + 10;//���������һ��
//	//a += 10; //���������һ��
//	a <<= 2;
//	printf("%d\n", a);
//	return 0;//ͬ��
//}

//int main()//λ������
//{
//	int a = 3;
//	int b = 5;        
//	int c = a & b;    
//	printf("%d\n", c);
//	return 0;
//}//�룺ȫһ��һ ����һ��һ �����һ��һȫһ���� 

//int main()//��λ������
//{
//	int a = 1;//����ռ4���ֽ� 32Ϊbitλ ������û��32�� �ͼ�д�£�
//	int b = a << 2;//�ƶ�����λ
//	printf("%d\n", b);//4
//	printf("%d\n", a);//1
//}//a��ֵ�ǲ���� ����a���ֵ���¸���a
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
// }
//
//int main()
//{
//	int c = 5;
//	int t = 1;
//	int sum = 0;
//	sum = MAX(c, t);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()//���� һ����ͬԪ�صļ��� �±���ʹ�õ�
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	/*printf("%d\n", arr[4]);*/
//	return 0;
//}

//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()//���� �Զ��庯�� �⺯��
//{
//	int sum = 0;
//	sum = ADD(20,20163);
//	printf("sum=%d\n",sum);
//	return 0;
//}

//int main()//ѭ�����
//{
//	int c = 0;
//	printf("ѧУѧϰ\n");
//	printf("��һ�д���\n");
//	while (c < 20)
//	{
//		printf("��һ�д���%d\n",c);
//		c++;
//	}
//	if(c>=20)
//	printf("����Ӯ��\n");
//	return 0;
//}

//int main()//ѡ�����
//{ 
//	int c = 0;
//	printf("����ѧУ\n");
//	printf("��ú�ѧϰ��1/0��->");
//	scanf("%d", & c);
//	if (c == 1)
//	{
//		printf("����Ӯ��\n");
//	}
//	else
//		printf("ɷ��\n");
//	return 0;
//}

//int main()//����ת���ַ�
//{
//	/*printf("%d\n", '\x61');*/
//	// \x61Ϊ16���� ת���ַ�
//	/*printf("%d\n", strlen("c:\text\32\text.c"));*/
//	// \32--32��2��8��������
//	// 32 ��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	/*printf("c:\text\32\text.c");*/
//	/*printf("%c\n",'\'');*/
//	/*printf("%s\n", "\"");*/
//	// \t -ˮƽ�Ʊ�� \\��ֹ��ת�����з�
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";// \0�����ַ� ת���ַ�
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen �����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//ĩβ"abc�и�\0"
//	char arr2[] = { 'a','b','c' };//�ṹĩβ�Ÿ�\0 \0���ַ���������־
//	'\0'-->0 ASCII ���� ASCII��ֵ
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//ö�ٳ���
//ö��һһ�о� �ؼ��� enum
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET 
//};//ö�ٳ�������ĳ����Ĳ���(male female secret)  ��s���ǿ��Ըĵ�
//int main()
//{
//	//enum sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", FEMALE);
//	return 0;
//}

////#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX]= {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{//��ʹ�ó����ĵط��磺n �ǲ����õ� ��������Ϊһ���̶���ֵ
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	int arr[n] = { 0 };
//	printf("%d\n", arr);
//	return 0;
//}

//int main()
//{	//a �����ǻ��Ǳ��� ���������const
//	const int a = 3;//const���� ���γ����� aΪ���� ����Ϊa=3 const�͹̶� a=3
//	printf("%d\n",a);//cosnt ������ 
//	a = 6;
//	printf("%d\n", a);
//	return 0;
//}//���泣�� 3��100 ������ 

//int main()
//{
//	extern int a;//extern �����ⲿ����
//	printf("a=%d\n",a);
//	return 0;
//}

//int a = 1;//ȫ�ֱ�������������������
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d",&num1,&num2);//(&ȡ��ַ��) 
//	��������-ʹ�����뺯�� scanf
//	int sum = 0;
//	sum=num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��

//int a = 10;
//int main()
//{
//	{
//		
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int a = 20;//ȫ�ֱ��� �����ڴ���飨{}����ı���
//
//int main()
//{
//	int a = 10;//�ֲ����� ��֮�෴
//	printf("%d\n", a);
//	return 0;//�ֲ�������ȫ�ֱ�����Ҫ��ͬ ���ײ���bug
//}//��ȫ�ֱ����;ֲ����������൱ͬʱ���Ծֲ�����Ϊ��

//int main()
//{
//	short age = 0;
//	float weight = 95.6;//95.6��Ĭ��Ϊdouble ����Ӹ�f�����ⲻ��
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 ��������8 C���Ա�׼�涨sizeo��long��>=sizeo(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	float f = 19.0;
//	printf("%f\n",f);
//	return 0;
//}

//int main()
//{
//	int age = 19;
//	printf("%d",age);//%d --��ӡ����ʮ��������
//	return 0;
//}

//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch);//%c --��ӡ�ַ���ʽ������
//	return 0;
//}

//int ���� 
//mainǰ���int��ʾmain�������÷���һ������ֵ ������return���Ӧ
//int main()//main ������ ����ֻ����һ��
//{
//	printf("666\n");//printf�⺯����C�����ṩʹ�õĺ�����
//	return 0; //���� 0 ����
//}

//int main()
//{
//	printf("hello world");
//	return 0;
//}
