#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strcat(char* dest, const char* src)//constԴͷ�����ݲ��ᷢ���仯
//{
//	char* ret = dest;
//	assert(dest !=NULL);//Ϊ���Ǽٵģ��ͻᱨ��
//	assert(src);//���ֶ�����
//
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
////strcat--׷�Ӻ���-׷���ַ���
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxx";//�ɴ���ȷ��world���\0���Դ���
//	//char arr1[] = "hello";err �������� arr1�Ѿ�����ֻ�ܴ��hello
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
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
////strcmp--�Ƚ��ַ�������
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

////strncmp -�ַ����Ƚ�
//int main()
//{
//	const char* p1 = "abcdef";//"ab"�����ַ�������Ϊ*p1���﷨��ʽ��ָ��ָ�������û�б����ƣ�
//	const char* p2 = "abcqwer";//�͵������ܱ��޸����޸�����ʹ������������Լ���const���
//	int ret = strnmp(p1, p2, 4);//�Ƚϼ����ַ�
//	return 0;
//}


//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur =(char*) p1;
//	//���p2�ǿյģ�û�и��κ����ݣ�����ֻ��'\0'
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{//���ǰ���ַ���ͬ���ַ����Ų��ң�֮���ֲ�һ�����俪ʼ��λ�ò�֪��
//	//����Ҫ����"���"=>cur 
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��ַ���
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����ַ���
//}
//
////strstr --�����ַ���
////���� ��p1����(p2)def���ҵ��˾ͷ���d�ĵ�ַ��û�ҵ��ͷ���NULL
////���p1������>1�κ�p2�����ݣ���ӡ���ǵ�һ�ε�����
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�ַ���������\n");
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

////strerror �Ѵ�����ת��Ϊ������Ϣ���������ַ
//int main()
//{
//	//������ ������Ϣ
//	//0 -       No error
//	//1 -		operation not permitted
//	//2 -		No such Ifile or directory
//	// ...
//	//char* str = strerror(1);
//	//errno�Ǹ�ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	
//	//���ļ�
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

//int main()//��дתСд
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
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��>ǰ
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
////C���Ա�׼��
////memcpy ֻҪ�����ص����ڴ濽���Ϳ���
////memmove �����ص��ڴ�Ŀ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr+2,arr,20);
//	my_memmove(arr + 2, arr, 20);//�����ڴ��ص��������
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
////memcpy-�ڴ濽��
////int main()
////{
////	int arr1[] = { 1,2,3,4,5 };
////	int arr2[5] = { 0 };
////	//struct s arr3[] = { {"����",'20'},{"����","18"} };
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


////memset - �ڴ�����
//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40���ֽ�
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ....
//	memset(arr, 1, 10);
//	return 0;
//}
