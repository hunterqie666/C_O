#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strcat(char* dest, const char* src)//const源头的数据不会发生变化
//{
//	char* ret = dest;
//	assert(dest !=NULL);//为零是假的，就会报错。
//	assert(src);//两种都可以
//
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
////strcat--追加函数-追加字符串
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxx";//由此来确定world后的\0是自带的
//	//char arr1[] = "hello";err 程序会崩溃 arr1已经定下只能存放hello
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		*str1++;
//		*str2++;
//	}
//	if (*str1 < *str2)
//	{
//		return -1;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
////return (*str1-*str2)
//}
//
////strcmp--比较字符串长度
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

////strncpy
//int main()
//{
//	char arr1[10] = "abcefg";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strncat
//int main()
//{
//	char arr1[30] = "hellp\0xxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

////strncmp -字符串比较
//int main()
//{
//	const char* p1 = "abcdef";//"ab"常量字符串，因为*p1的语法形式（指针指向的内容没有被限制）
//	const char* p2 = "abcqwer";//就导致其能被修改其修改容易使程序崩溃，所以加上const最好
//	int ret = strnmp(p1, p2, 4);//比较几个字符
//	return 0;
//}


//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur =(char*) p1;
//	//如果p2是空的，没有给任何数据，里面只有'\0'
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{//如果前面字符相同，字符跟着查找，之后发现不一样，其开始的位置不知道
//	//所以要给个"标记"=>cur 
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到字符串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到字符串
//}
//
////strstr --查找字符串
////例如 在p1里找(p2)def，找到了就返回d的地址，没找到就返回NULL
////如果p1里面有>1段和p2的内容，打印的是第一段的内容
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("字符串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


////strtok
//int main()
//{
//	char arr[] = "ctx@qq.com";
//	char* p = "@,.";
//	char buff[1024] = { 0 };
//	strcpy(buff, arr);
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}

////strerror 把错误码转化为错误信息来返回其地址
//int main()
//{
//	//错误码 错误信息
//	//0 -       No error
//	//1 -		operation not permitted
//	//2 -		No such Ifile or directory
//	// ...
//	//char* str = strerror(1);
//	//errno是个全局的错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//int main()//大写转小写
//{
//    char arr[] = "I AM Student";
//    int i = 0;
//    while (arr[i])
//    {
//        if (isupper(arr[i]))
//        {
//            arr[i] = tolower(arr[i]);
//        }
//    }
//    printf("%s\n", arr);
//    return 0;
//}


//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后—>前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//void* my_memcpy(void* dest,const void*src,size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
////C语言标准：
////memcpy 只要处理不重叠的内存拷贝就可以
////memmove 处理重叠内存的拷贝
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr+2,arr,20);
//	my_memmove(arr + 2, arr, 20);//处理内存重叠的情况的
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
////struct s
////{
////	char name[20];
////	int age;
////};
////memcpy-内存拷贝
////int main()
////{
////	int arr1[] = { 1,2,3,4,5 };
////	int arr2[5] = { 0 };
////	//struct s arr3[] = { {"张三",'20'},{"李四","18"} };
////	//struct s arr4[3] = { 0 };
////	my_memcpy(arr2, arr1, sizeof(arr1));
////	return 0;
////}

////memcmp
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}


////memset - 内存设置
//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40个字节
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ....
//	memset(arr, 1, 10);
//	return 0;
//}
