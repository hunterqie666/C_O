#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//F5-��������-��F9���ʹ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//�ϵ� F9�л��ϵ� ����ִ�е�����ͣ����
//ִ���߼��ϵ���һ���ϵ�
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

//add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = add(a, b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//test3()
//{
//	printf("hehe\n");
//}
//test2()
//{
//	test3();
//}
//test1()
//{
//	test2();
//}
//test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	/*for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}*/
//	return 0;
//}

//void _strcpy(char* dest,char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void _strcpy(char* dest, char* src)
//{
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//
//	}
//}

//#include <assert.h>
////char* ��ԭ���ݿ�����Ŀ�ĵ�����ȥ������Ŀ�ĵصı仯����Ŀ�ĵصĵ�ַ��������
//char*  _strcpy(char* dest,const char* src)
//{
//	int* ret = dest;
//	assert(dest !=NULL);//���� ���ʽ���Ϊ�棬ʲô����Ҳ��������Ϊ�ٵĻ��ͻᱨ��
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)//����dest��src��λ��д���ˣ���Ϊ�������const����scrֵ���ܸı䣬����ֱ���
//	{
//		;
//	}
//	return ret;
//}
//int main()//strcpy�Ĵ���ʵ��
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s\n", _strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	/*const int* p = &num;*/
//	int* const p = &num;
//	//const����ָ�������*���ʱ�����ε���*p,Ҳ����˵:����ͨ��p���ı�*p(num)��ֵ,
//	//const����ָ�������*�ұ��ǣ����ε���ָ�����p����p���ܱ��ı���
//	*p = 20;
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

//#include <assert.h>
//int _strlen(const char *str)
//{
//	int co = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		co++;
//		str++;
//	}
//	return co;
//}
//int main()//strlen��ʵ��
//{
//	char arr[] = "abcdef";
//	int len = _strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}