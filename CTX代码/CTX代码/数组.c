#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3 };//bu����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab";//�������ַ�Ϊ0 ������\0
//	char arr4[] = "abcdef";//7��Ԫ�� ��\0
//	printf("%d\n", sizeof(arr4));
//	//sizeof ����arr4��ռ�ռ�Ĵ�С
//	printf("%d\n", strlen(arr4));
//	//strlen ���ַ������� 
//	return 0;
//}
//strlen��sizeofû��ʲô����
//strlen�����ַ������ȵ�-ֻ������ַ������� -�⺯��-ʹ�õ���ͷ�ļ�
//sizeof������������顢���͵Ĵ�С-��λ���ֽ� -������

//int main()
//{
//	/*char arr[] = "adbce";//�ַ�
//	int a = 0;
//	int len = strlen(arr);
//	for (a = 0; a <len; a++)
//	{
//		printf("%c ", arr[a]);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };//����
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
//	//���Թ涨һ�е�Ԫ�ص��ַ� �� ��ʾ
//	int arr[3][4] = { {1,2,3},{4,5} };//��λ�����г��ˣ���ֵ��˳�ӡ�
//	char ch[4][5];
//	int arr[][5] = { {1,2,3},{1,2,5} };//�п���ʡ�ԣ��в���ʡ��
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
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
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
//int main()//ð������->��������������Ƚϡ�
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
//	//1.sizeof(������)-��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//	//2.&�������������������������飬&��������ȡ��������������ĵ�ַ
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);*/
//	return 0;
//}