#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>

//int pow(int n, int k)
//{
//	//n^k=n*n^(k-1)
//	if (k < 0)
//		return (1.0 / (pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * pow(n, k - 1);
//}
//int main()//n的k次方
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//int sum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return sum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()//输入非负整数，返回组成数字之和
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = sum(num);
//	printf("ret = %d\n",ret);
//	return 0;
//}

//int _strlen(char* str)
//{
//	int co = 0;
//	while (*str != '\0')
//	{
//		co++;
//		str++;
//	}
//	return co;
//}
//void re(char* arr)
//{
//	char tmp = arr[0];
//	int len = _strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (_strlen(arr + 1) >= 2)
//		re(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()//用递归的方式去交换字符串
//{
//	char arr[] = "abcdefg";
//	re(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//void print_(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i;  j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()//输入几就是几的乘法表
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_(n);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()//用指针打印出数组的各个数值
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()//分别打印整数的奇数位和偶数位
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//int get(int m, int n)
//{
//	int co = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		co++;
//	}
//	return co;
//}
//int main()//看两个变量2进制位相同的个数
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, & n);
//	int co=get(m, n);
//	printf("%d\n", co);
//	return 0;
//}

//int count_(unsigned int a)//unsigned是考虑输入值为负数
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int count_(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_(int n)
//{
//	int count = 0;
//	{
//		while (n)
//		{
//			n = n & (n - 1);
//			count++;
//		}
//	}
//	return count;
//}
//int main()//求2进制中1的个数
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_(a);
//	//system("pause");//system库函数-执行系统命令-pause(暂停)
//	////在没有调控制台，避免代码一闪而过
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0; 
//}//9 23 8

//int i;//局部变量随机值，全局变量不初始化默认是0
//int main()
//{//当整数和一个无符号数进行运算的时候，其整数会转化为无符号数
//	i--;
//	if (i > sizeof(i))//sizeof()-计算变量/类型所占内存的大小 >=0 无符号数
//	{//当i=-1 转换为无符号数的时候，其最高位(1)不是符号位，将成为有效位
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}//11223300-->在内存存储的是44 33 22 11-->int是四个字节44 33 22 11各占一个字节

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//0 0 3 4 5 

//int main()//交换两个数组
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}

////void Init(int arr[], int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		arr[i] = 0;
////	}
////}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//初始化数组
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)10
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)8
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)40
//	printf("%d\n", sizeof(ch));//(3)8
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int count=0;
//	int num=0;
//	scanf("%d",&num);
//	int a = 0;
//	for (a = 0; a < 32; a++)
//	{
//		if (1==(1&(num>>a)))
//			count++;
//	} 
//	printf("=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}//可能会有溢出的情况，超出了int的字节大小。
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%db=%d\n", a, b);
//	return 0;
//}//a^b-->X  X相当于一个钥匙 X^b-->原来a的值 X^b--->原来a的值
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(& num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//				 //本质上arr是个指针
//int  binary_search(int arr[], int k ,int sz)
//{//
//	//int sz = sizeof(arr) / sizeof(arr[0]);//监视结果是1
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//这里传上去的实际上是arr的第一个元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int r = binary_search(arr , k,sz);
//	if (r == -1)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("yes\n", r);
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//			return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//void menu()
//{
//	printf("**************************\n");
//	printf("***** 1.play 0.exit ******\n");
//	printf("**************************\n");
//}
//void game() //rand() % 100 + 1; 这里模上100就是rand里面随机数就是0-99然后+1-->0-100
//{//时间戳：当前时间--计算机起始时间(1970.1.1 0.0.0)
// //time_t time (time_t* timer)-->time_t本质上是个长整型-->整型
//	int random_num = rand() % 100 + 1;//rand生成随机数 rand生成随机整数 返回整型 范围：（0-0*7fff/32767）
//	int input = 0; //在调用ran之前要用srand(整型)-里边数字要变 生成随机数 时间是变得-->时间戳
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input>random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜，恭喜 ，对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //rand要在srand前使用 srand(整形)
//	do {							 //NULL空指针
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("拜拜\n");
//			break;
//		default:
//			printf("选择错误，请重新输入!\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}

//int main()//乘法口诀表
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}//%和d之间2的话是两位向右对齐，-2就向左对齐
//		printf("\n");
//	}
//	return 0;
//}

//int main()//求十个数的最大值
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()//计算1/1-1/2+1/3...+1/99-1/100
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()//1-100带9的数字
//{
//	int i = 0;
//	int c = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			c++;
//		if (i / 10 == 9)
//			c++;
//	}
//	printf("c=%d\n", c);
//	return 0;
//} 

//int main()//100-200之间的素数  除了1和它本身以外不再有其他因数
//{//试触法  文章<素数求解的n种境界>
//	int i = 0;
//	int c = 0;
//	for (i = 101; i <= 200; i+=2)//排除掉偶数，剩下奇数然后提高质量
//	{
//		int j = 0;   //sqrt--开平方的数学库函数
//		for (j = 2; j <=sqrt(i); j++)//j<i
//		{//如果有一个函数在开平方之前有数能整除就不是素数
//			if (i % j == 0)
//			{
//				break;
//			}
////解释例如i=a*b i=16能写成2*8或者4*4 就是说a和b中至少有一个数字是<=开平方之后i的数字
////也就是说只需要判断在<=(形如a)的数字和开平方的数字这中间的数能不能 j 被整除，能的话就不是素数 
//		}
//		if (j>sqrt(i))//j==i 
//		{
//			c++;
//			printf("%d ", i);
//		}
//	}
//	printf("\nsum=%d\n", c);
//	return 0;
//}

//int main()//判断1000-2000的闰年
//{//1.能被4整除并且不能被100整除是闰年
//	//2.能被400整除是闰年
//	int year = 0;
//	int c = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			c++;
//		}
//	else if(year%400==0)
//		{
//			printf("%d ", year);
//			c++;
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			c++;
//		}
//	}
//	printf("\nc=%d\n", c);
//	return 0;
//}

//int main()//给两个数 求最大公约数 辗转相除法
//{//*********
//	int m =0;
//	int n =0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)//优化
//	{
//		/*r = m % n;*/
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()//三的倍数
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()//输出三个 比大小 按从大到小
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b);
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)// == 不能用来比较两个字符串是否相等，应该使用一个库函数 - strcmp
//		{ //strcmp  exp1>exp2-->大于0的数字同理
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!" ;
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒
//		system("cls");//执行系统命令的一个函数- cls - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;//下标是从0开始的
//	while (left<=right)
//	{
//		int mid = (left +right)/2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//int main()//求1--3的阶乘
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)//优化
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//		/*{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}*/
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//求N的阶乘
//{
//	int i = 0;
//	int n = 0;
//	int ret=1;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int main()//循环几次 0次 笔试题
//{
//	int a = 0;
//	int c = 0;
//	for (a = 0, c = 0; c = 0; a++, c++)//这里面判断C=0，0为假
//		c++;
//	return 0;
//}

///////循环练习

//int main()// 5  3 
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}

//int main()//在1-100内的奇数
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d\n", a);
//		a += 2;
//	}
//	//while (a <= 100)
//	//{
//	//	if(a%2 == 1)
//	//	printf("%d\n", a);
//	//	a++;
//	//}
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;//         2         5
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];1233152123
//}*p;
////假设p 的值为e×100000。如下表表达式的值分别为多少?
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0000000000100020
//	printf("%p\n", (unsigned long)p + 0x1);// 0000000000100001
//	printf("%p\n", (unsigned int*)p + 0x1);// 0000000000100004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0; //      4          2
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//p的类型是int(*)[4]，a的类型是int(*)[5]，这里a是首元素地址，把a的地址赋给了p，只是类型不是一样。
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;//      FFFFFFFFFFFFFFFC             -4
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//aa[1]--第二行首元素地址
//	return 0;//           10             5
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//char* 存放的是w ，a ，a==>首元素地址
//	char** pa = a;
//	pa++;//==>p+1 跳过了work 跳过了第一个char*
//	printf("%s\n", *pa);
//	return 0;//at
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s \n", **++cpp);//POINT
//	printf("%s \n", *-- * ++cpp + 3); //ER
//	printf("%s \n", *cpp[-2] + 3); //ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}


//void input(char* str)
//{
//	assert(str);//判断为真假。0为假，非零为真。
//	int len = strlen(str);//有多少个字符
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}//写一个函数，可以逆序一个字符串的内容
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s",arr);
//	gets(arr);//读取一行
//	input(arr);
//	printf("%s", arr);
//	return 0;
//}

//int main()//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//{//例如：2+22+222+2222+22222
//	int a = 0;//什么数字
//	int n = 0;//有几项
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		//判断i是否为水仙花数（自幂数）
//		//1.计算i的为数 - n位数
//		int n = 1;//给的位数起码有一位数。
//		int tmp = i;
//		int sum = 0;
//		//这里的tmp原因 这边while如果为i 进过/=运算会改变其i的数，可能造成死循环 
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp/= 10;
//		}
//		//3.比较i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{//打印成菱形
//	int line = 0;
//	scanf("%d", &line);//要行数必须是奇数，怕有人写成偶数，就把其分别为上半部分和下半部分
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;//有多少钱
//	int total = 0;//喝了多少汽水
//	int empty = 0;//有多少个空瓶
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	/*if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * money - 1;
//	}*/
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total+= empty / 2;
//		empty = empty / 2+ empty%2;
//	}//       喝回来的空瓶 假如有五个空瓶换了两个还余一个加起来 
//	printf("total = %d\n", total);
//	return 0;
//}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左数奇数
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{//怕是给的数字是全奇数，预防超出=>越界访问
//			left++;
//		}
//		//从右数偶数
//		while ((left < right) &&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()//交换数字 奇数在前 偶数在后
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}//奇数从左往右找，偶数从右向左找，找到直接进行交换

//int main()
//{//整型提升 =>无符号数直接补0，有符号数按最高位补齐 
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//char 所占空间是1个字节 8个比特位
//	//00000000000000000000000011001000 ==>200 是整型 占4个字节，32个比特位
//	// 11001000 ==>存储在a里
//	//00000000000000000000000001100100 ==>100
//	// 01100100 ==>存储在b里
//	c = a + b;//要相加，整型提升
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100 
//	//打印出来的是 char c char只有8个比特位 =>00101100
//	printf("%d %d", a + b, c);//a+b 加起来没有放在c里面所以就是300
//	return 0;//    300    44
//}//%d打印有符号的十进制数字 看其最高位是0 是整数=>正码反码补码相同 c是同理

//int main()
//{//有符号的char的范围是 -128-127
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}//-1 -2......127 126....1 0
//	printf("%d\n", strlen(a));
//	return 0;
//}

//int main()
//{//杨辉三角形
//	int arr[10][10] = {0};
//	int i = 0;//行
//	int j = 0;//列
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10;j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i==j)
//			{
//				arr[i][j] = 1;
//			}  
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		int line=10;
//		int g = 0;
//		for (g = 0; g < line - 1 - i; g++)
//		{
//			printf(" ");
//		}//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////题目名称: 
////猜凶手
////题目内容 :
////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
////以下为4个嫌疑犯的供词︰
////A说 : 不是我。
////B说 : 是c。
////C说 : 是D。
////D说 : c在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手
//int main()
//{//猜凶手
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer= %c\n", killer);
//		}
//	}
//	return 0;
//}//三真一假，真为1，假为0


////A选手说:B第二，我第三; 
////B选手说:我第二，E第四; 
////C选手说:我第一，D第二; 
////D选手说:C最后，我第三; 
////E选手说:我第四，A第一;
////比赛结束后，每位选李都说对了一半，请编程确定比赛的名次。
//int main()
//{//求名次
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 0; b <= 5; b++)
//		{
//			for (c = 0; c <= 5; c++)
//			{
//				for (d = 0; d <= 5; d++)
//				{
//					for (e = 0; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

////改法2：char *GetMemory(char** p)
//void GetMemory(char** p)
//{
//  p = (char*)malloc(100);
// //改法2：*p = (char*)malloc(100);
//	//改法2：	return p;
//}//等GetMemory函数返回之后，动态开辟内存尚未释放并且无法找到，所以会造成内存泄潺
//void Test(void)
//{
//	char* str = NULL;
////改法1：GetMemory(&str);
////改法2：str=GetMemory(str);
//	GetMemory(str);//strstr以值传递的形式给p
//	//p是GetMemory函数的形参，只能在函数GetMemory内部有效，当函数结束后，str的空间
//	//内容还是NULL—>空指针,不是一块有用的地址，没有指向有用的空间
//	//当把 "hello world"拷过去，程序会崩溃，strcpy有++的操作，就会非法访问
//	strcpy(str, "hello world");
//	printf(str);//程序崩溃，内存泄漏。
//	//改法
//	//free(str);
//	//str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world"; //返回栈空间的地址的问题
//	return p;//p是在栈区开辟的，出了函数就会销毁，栈区所开辟的空间会返回给系统
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//虽然str接收到了P的地址，但是当函数调用完了之后，调用函数的空间也随之取消
//	//str所指向的空间内容就不知道了，会造成非法访问。
//	printf(str);//随机值
//}
//int main()
//{
//	Test();
// 
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//忘记释放动态开辟的内存，导致内存泄漏了
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}



//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		y = -1;
//		printf("%d\n", y);
//	}
//	switch (x > 0)
//	{
//	case 0:y = 0;
//		printf("%d\n", y);
//		break;
//	case 1:y = 1;
//		printf("%d\n", y);
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	float x, y, z;
//	scanf("%f %f", &x, &y);
//	z = x / y;
//	while (1)
//	{
//		if (fabs(z) > 1.0)
//		{
//			x = y;
//			y = z;
//			z = x / y;
//		}
//		else
//			break;
//	}
//	printf("%f", y);
//	return 0;
//}

//int main()
//{//求1000以内的所有完全数，一个数恰好除自身以外的因子之和，例如6=1+2+3
//	int a,i,m;
//	for (a = 1; a <= 1000; a++)
//	{
//		for (m=0,i = 0; i < a/2; i++)
//		{
//			if (a % i == 0)
//				m += i;
//			if (m == a)
//				printf("%4d", a);
//		}
//	}
//	return 0;
//}

//int main()
//{//下面程序的功能是完成用100元人民币换成1元、2元、5元的所有兑换方案。
//	int i = 0, j = 0, y = 0,l=0;
//	for (i = 0; i <= 20; i++)
//	{
//		for (j = 0; j <= 50; j++)
//		{
//			y = 100 - 2 * j + 5 * i;
//			if (y >= 0)
//			{
//				printf("%2d %2d %2d", i, j, y);
//				l = l + 1;
//				if (l % 5 == 0)
//					printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	double sum = 0;
//		int x=0,y=0;
//	for (x = 2; x <= 100; x *= 2)
//	{
//		y++;
//		sum += x * 0.8;
//	}
//	double day = sum / y;
//	printf("%lf", day);
//	return 0;
//}

//int reset(int i); 
//int workover(int i); 
//int i = 0;
//int main()
//{
//	int i = 5;
//	reset(i / 2);     printf("i=%d\n", i);//5
//	reset(i = i / 2); printf("i=%d\n", i);//2
//	reset(i / 2);    printf("i=%d\n", i);//2
//	workover(i);     printf("i=%d\n", i);//2
//	return 0;
//}
//int workover(int i)
//{
//	i = (i % i) * ((i * i) / (2 * i) + 4);
//	printf("i=%d\n", i);//0
//	return(i);
//}
//int reset(int i)
//{
//	i = i <= 2 ? 5 : 0;
//	return(i);
//}


int main()
{
	
	return 0;
}