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

//struct book//struct 结构体关键字
//{
//	char name[20];//数组名本质上是个地址  
//	short price;//变量 改 yyds.price = 100 ;
//};//strcpy （拷进去的目的地,"你要拷贝什么"）strcpy (yyds.name,"NB");
//
//int main()//结构体--自己创造出来的一种类型--描述复杂对象
//{//.操作符 结构体变量.成员
//// ->	   结构体指针->成员
//	利用结构体类型-创造一个该类型的结构体变量
//	struct book yyds = { "C语言程序设计",55 };
//	struct book* y = &yyds;//这里类型是struct book*
//	/*printf("%s\n",(*y).name);
//	printf("%d\n",(*y).price);*/
//	printf("%s\n", y->name);
//	printf("%d\n", y->price);
//	/*printf("书名：%s\n", yyds.name);
//	printf("价格:%d元\n", yyds.price);
//	yyds.price = 15;
//	printf("修改后的价格:%d\n", yyds.price);*/
//	strcpy(yyds.name, "牛逼是怎么炼成的");
//	strcpy 字符串拷贝-库函数 -<string.h>
//	printf("%s\n", yyds.name);
//	return 0;
//}

//int main()
//{ //存放地址的变量是指针变量
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 3.15;
//	printf("%d\n", sizeof(pd));
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	//int a = 10;
//	//int* p = &a;//变量类型为int* 变量名字是p 
//	////这里的*是来告诉我们p是指针变量  p指向的对象是a 然后a为int p也是int 
//	////这里的*只是语法形式 没有实际的价值
//	//*p = 20;//解引用操作符间/接访问操作符
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
//}//指针大小在32位平台是4个byte 在64位平台是8个byte
// //32位是32bit 换成 byte÷8 -->4
//
// int main()//指针函数存放地址 指针是个变量
//{//&取地址
//	int a = 10; //存放一个地址
//	int* p = &a;//把a的地址存放在P里面
//	printf("%p\n", p);
//	//有一种变量是来存放地址的
//	printf("%p\n",&a);
//	*p=20;//*解引用操作符  *p就是a，把a的值改为20 
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()//&取地址操作符
//{
//	int num = 10;
//	&num;
//	printf("%p\n", &num);
//	return 0;
//}

////#define max 100 
////int main()
////{
//// int a = max;//定义标识符常量
////return 0;
////}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}//函数
//#define MAX(X,Y) (X>Y?X:Y)//可以定义宏 -带参数
//int main()//#define 
//{
//
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max=（a>b? a:b）
//	printf("%d\n", max);
//	return 0;
//}

////static 修饰局部变量增加声明周期 修饰全局变量 减少作用域
////修饰全局变量 减少作用域 让静态的全局变量只能在自己所在的源文件内部使用 出了源文件则无法使用。
////修饰函数 改变了函数的链接属性（改变为内部链接属性）  函数有外部链接属性  
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

//int main()//static 改变全局变量的作用域 
//{//extern 声明外部符号的 
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
//int main()//static 修饰局部变量 
//{//static局部变量的生命周期便长
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()//typedef
//{//typedef -类型定义-类型重定义 相当于起别名
//	typedef unsigned int u_int;
//		unsigned int num = 20;
//		u_int num = 20;
//	return 0;
//}

//int main()//变量名字不能和关键字相同
//{//register 寄存器变量 寄存器的读写速度高于内存 用经常使用的变量给定义
//	/*register int a = 10;*///建议把a定义成寄存器变量 最终的决定权还是在编译器手中
//	int a = 10;
//	a = -2; //int 定义的变量是有符号的
//	//signed int;
//	unsigned int num = 1; //定义无符号的 就都是正数
//	return 0;
//}

//int main()
//{//auto int a =10; auto声明为自动变量 函数内部定义使用的变量
//	int a = 10;//a局部变量出了{}自动销毁 进出{}自动创建-->自动变量 前面会有个auto省略掉
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
////	arr[4];//[]下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum;
//	sum=Add(a, b);//这个括号就是函数调用操作符
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//条件操作符
//{//exp1? exp2:exp3 如果exp1为真 就是exp2被执行 如果为假就是exp3.
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max=(a > b ? a : b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{//0为假 非0为真
//	int a = 1;
//	int b = 5;
//	int c = a || b;// ||逻辑或 两个为假才为假 有一个真就是真 两真为真
//	//int c = a && b;//逻辑与&& 全为真  一真一假为假
//	printf("%d\n",c);//后面输出为1
//	return 0;
//}

//int main()//强制类型转化，让一个类型转化为一个类型
//{//原本3.14是double类型强制转换位int
//	int a = (int)3.14;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = --a; //前置-- ，先--，再使用 a=9 b=9
//	//int b = a--;//后置--，先使用，再-- a=9 b=10
//	//int b = ++a;//前置++ ，先++，再使用 a=11 b=11
//	//int b = a++;//后置++,先使用，再++ a=11 b=10
//	printf("a=%d  b=%d\n",a,b);
//	return 0;
//}

//int main()//~按位（2进制）取反 原来是0 的取1 1取0
//{//原码、反码、补码
////原码-->反码（符号位不变 其他位取反）-->补码（最后一位+1）
// 补吗（最后一位-1）-->反码（符号位不变 其他位取反）-->原码
////最高位是1为复数 为0是正数
////例 111111111111111111111111 补码
////   111111111111111111111110 反码
////   100000000000000000000001 原码
//	int a = 0;
//		int b = ~a;//内存存贮的是补码
//		printf("%d\n",b); //打印出来的是原码
//		return 0;
//}//

//int main()//sizeof
//{
//	int a = 4;
//	int arr[] = { 1,2,3,4,5,6 };//数组类型里的每个元素是int
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a );
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main() //!逻辑反操作符 把假的变为真的 真的变为假的
//{// 0-假   非0--真
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a);
//	printf("%d\n", !b);
//	return 0;
//}

//int main()//赋值操作符 =   +=   -=   *=   /=   &=   ^=   |=   >>=   <<=
//{
//	int a = 2;
//	//a = 20;//赋值  ==判断相等
//	//a = a + 10;//这两种情况一样
//	//a += 10; //这两种情况一样
//	a <<= 2;
//	printf("%d\n", a);
//	return 0;//同理
//}

//int main()//位操作符
//{
//	int a = 3;
//	int b = 5;        
//	int c = a & b;    
//	printf("%d\n", c);
//	return 0;
//}//与：全一则一 或：有一则一 异或：有一则一全一则零 

//int main()//移位操作符
//{
//	int a = 1;//整型占4个字节 32为bit位 （这里没有32个 就简单写下）
//	int b = a << 2;//移动了两位
//	printf("%d\n", b);//4
//	printf("%d\n", a);//1
//}//a的值是不变的 除非a变的值重新赋予a
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

//int main()//数组 一组相同元素的集合 下标来使用的
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
//int main()//函数 自定义函数 库函数
//{
//	int sum = 0;
//	sum = ADD(20,20163);
//	printf("sum=%d\n",sum);
//	return 0;
//}

//int main()//循环语句
//{
//	int c = 0;
//	printf("学校学习\n");
//	printf("敲一行代码\n");
//	while (c < 20)
//	{
//		printf("敲一行代码%d\n",c);
//		c++;
//	}
//	if(c>=20)
//	printf("人生赢家\n");
//	return 0;
//}

//int main()//选择语句
//{ 
//	int c = 0;
//	printf("加入学校\n");
//	printf("会好好学习吗（1/0）->");
//	scanf("%d", & c);
//	if (c == 1)
//	{
//		printf("人生赢家\n");
//	}
//	else
//		printf("煞白\n");
//	return 0;
//}

//int main()//常见转义字符
//{
//	/*printf("%d\n", '\x61');*/
//	// \x61为16进制 转义字符
//	/*printf("%d\n", strlen("c:\text\32\text.c"));*/
//	// \32--32是2个8进制数字
//	// 32 作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	/*printf("c:\text\32\text.c");*/
//	/*printf("%c\n",'\'');*/
//	/*printf("%s\n", "\"");*/
//	// \t -水平制表符 \\防止被转义序列符
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";// \0不算字符 转义字符
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//末尾"abc有个\0"
//	char arr2[] = { 'a','b','c' };//结构末尾放个\0 \0是字符串结束标志
//	'\0'-->0 ASCII 编码 ASCII码值
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//枚举常量
//枚举一一列举 关键字 enum
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET 
//};//枚举常量里面的常量改不了(male female secret)  ‘s’是可以改的
//int main()
//{
//	//enum sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", FEMALE);
//	return 0;
//}

////#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX]= {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{//在使用常量的地方如：n 是不能用的 但是能作为一个固定的值
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	int arr[n] = { 0 };
//	printf("%d\n", arr);
//	return 0;
//}

//int main()
//{	//a 本质是还是变量 就套了马甲const
//	const int a = 3;//const常量 修饰常变量 a为变量 定义为a=3 const就固定 a=3
//	printf("%d\n",a);//cosnt 常属性 
//	a = 6;
//	printf("%d\n", a);
//	return 0;
//}//字面常量 3，100 字面上 

//int main()
//{
//	extern int a;//extern 声明外部符号
//	printf("a=%d\n",a);
//	return 0;
//}

//int a = 1;//全局变量作用域是整个工程
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d",&num1,&num2);//(&取地址符) 
//	输入数据-使用输入函数 scanf
//	int sum = 0;
//	sum=num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}//C语言语法规定，变量要定义在当前代码块的最前面

//int a = 10;
//int main()
//{
//	{
//		
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int a = 20;//全局变量 定义在代码块（{}）外的变量
//
//int main()
//{
//	int a = 10;//局部变量 与之相反
//	printf("%d\n", a);
//	return 0;//局部变量和全局变量不要相同 容易产生bug
//}//当全局变量和局部变量名字相当同时，以局部变量为主

//int main()
//{
//	short age = 0;
//	float weight = 95.6;//95.6会默认为double 后面加个f就问题不大
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 还可能是8 C语言标准规定sizeo（long）>=sizeo(int)
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
//	printf("%d",age);//%d --打印整型十进制数据
//	return 0;
//}

//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch);//%c --打印字符格式的数据
//	return 0;
//}

//int 整型 
//main前面的int表示main函数调用返回一个整型值 正好与return相呼应
//int main()//main 主函数 有且只能有一个
//{
//	printf("666\n");//printf库函数（C语言提供使用的函数）
//	return 0; //返回 0 整数
//}

//int main()
//{
//	printf("hello world");
//	return 0;
//}
