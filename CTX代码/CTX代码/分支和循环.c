#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//int main()//goto语句
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机:>\n");
//	printf("请输入:>");
//	scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}
//	return 0;
//}

//int main()// do ...while 循环 
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;//跟while情况类似
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main()//变种
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//		return 0;
//	}
//}

//int main()//for循环变种 *****
//{//for循环 初始化；调整；判断都可以省略
////for循环的判断部分如果被省略，那判断条件就是：恒为正
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	int a = 0;
//	int c = 0;
//	for (; a < 10; a++)
//	{
//		for (; c < 10; c++)
//			printf("hehe\n");//123456789 10 c=10 还保留了 
//	}//10个hehe  10次循环完了之后 从for(;a<10;a++)开始 没有从 c=0开始
//	return 0;//
//}

//int main()
//{
//	int a = 0;
//	for (a = 0; a < 10; a++)
//	{
//		if (a = 5)//不要赋值 容易失去控制
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (a == 5)
//			break;//和while循环一样
//		//continue;和while的代码结构不一样 结构就不一样
//		printf("%d" , a);//12346789
//	}
//	return 0;
//}

//int main()//for循环
//{
//	int i = 0;
//	//初始化； 判断  ； 调整
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while ((a == getchar()) != EOF)
//	{
//		if (a < '0' || a>'9')// || 或
//			continue;
//		putchar(a);
//	}
//	return 0;
//}

//int main()
//{//输入ctrl + z会停止
////EOF - end of file ->-1 文件结束标志
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//获取字符放到ch里
//	//{
//	//	putchar(ch);
//	//}
////scanf和getchar是输入函数，输入函数有个输入缓冲器
////下面scanf输入一段数字(123456"\n")之后会回车确认往下走(拿走123456输入缓冲区会留下\n)-->"\n"-->10
////下面getchar看输入缓冲区有啥 然后看见里面有个'\n'(10)-->ret=10进入判断
////10 != Y 然后就直接else
//	int ret = 0;
//	int cha = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s",password);
//	while ((cha = getchar()) != '\n')
//	{
//		;
//	}
//	/*getchar();*/ //如果(123 123) scanf会读走空格之前的123 然后就又跟上述一样 这可以写个循环
//	printf("请确认(Y/N)");
//		ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("进入系统\n");
//	}
//	else
//	{
//		printf("输入错误\n");
//	}
//	return 0;
//}

//int main()//getchar
//{
//	int ch = getchar();//输入
//	putchar(ch);//输出
//	printf("%c\n", ch);
//	return 0;
//}

//int main()//循环语句
//{
//	int a = 1;
//	while (a<=10)
//	{//打印1-10的数字
//		if (a == 5)
//			//break;//这边停止 1 2 3 4 
//			continue;//终止本次循环后面的代码不在执行 直接进入到while循环的判断部分
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//int main()//switch语句  可以出现if语句
//{//如果都是相同的case内容 相同的就可以删除printf、break，直至最后一个 
//	int day = 0;
//	scanf("%d\n", &day);
//	switch (day)// switch(整型表达式)
//	{//case 是入口 break是出口
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	case 3:
//		printf("3\n");
//		break;
//	case 4:
//		printf("4\n");
//		break;
//	default://前面都未匹配上就会到default default和case没有严格的顺序控制
//		printf("输入错误\n");
//	}
//	return 0;
//}

//int main()//悬空else
//{//else和里的最近的未匹配的if相匹配
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;//结果啥也没有 上面a=0 a==1 不匹配，直接就不进入
//}// 如果想让与之匹配 就在if(a==1){}给个大括号else

//int main()//if语句 
//{//编译的时候<=， => 之类的不要用 要用&&来标识 （10<=18<28）
// // 例 int a = 9; （10<=a<28）-->(10<=9<28)-->(9不是<10，为假为0)(0<28)-->成立选择
//	int age = 140;
//	if (age >= 18 && age < 28)
//	printf("青年\n");
//	else
//	{
//		if (age >= 28 && age < 60)
//			printf("壮年\n");
//		else if (age >= 60 && age < 80)
//			printf("老年\n");
//		else
//			printf("高人\n");
//	}
//	return 0;
//	//int age = 145;
//	//if (age<18)
//	//	printf("未成年\n");
//	//else if (age>=18 && age<28)
//	//	printf("青年\n");
//	//else if (age >= 28 && age < 60)
//	//	printf("壮年\n");
//	//else if (age >= 60 && age < 80)
//	//	printf("老年\n");
//	//else 
//	//	printf("高人\n");
//	/*int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年人\n");
//	return 0;*/
//	//int age = 20;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//return 0;//单分支
//}

//int main()
//{
//	int a = 0;
//	;//是语句-空语句
//	return 0;
//}