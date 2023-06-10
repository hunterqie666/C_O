#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3 };//bu不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab";//第三个字符为0 但是是\0
//	char arr4[] = "abcdef";//7个元素 有\0
//	printf("%d\n", sizeof(arr4));
//	//sizeof 计算arr4所占空间的大小
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串长度 
//	return 0;
//}
//strlen和sizeof没有什么关联
//strlen是求字符串长度的-只能针对字符串长度 -库函数-使用得引头文件
//sizeof计算变量、数组、类型的大小-单位是字节 -操作符

//int main()
//{
//	/*char arr[] = "adbce";//字符
//	int a = 0;
//	int len = strlen(arr);
//	for (a = 0; a <len; a++)
//	{
//		printf("%c ", arr[a]);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };//整型
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" &arr[%d] = %p\n",i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[2][3];
//	//可以规定一行的元素的字符 ↓ 所示
//	int arr[3][4] = { {1,2,3},{4,5} };//二位数组行超了，其值会顺延。
//	char ch[4][5];
//	int arr[][5] = { {1,2,3},{1,2,5} };//行可以省略，列不能省略
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5}};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] =  %p\n",i,j ,&arr[i][j]);
//		}
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()//冒泡排序->相邻两个数字相比较。
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名)-数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);*/
//	return 0;
//}