#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	FILE* pf = fopen("log.txt", 'w');
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	//D:\C���Դ����ļ�\CTX����\CTX����\����ı���(Ԥ�������)+����.c
//	printf("%s\n", __FILE__);//����ļ������ƺ;���·��
//	printf("%d\n", __LINE__);//24 �������ڵ��к�
//	printf("%s\n", __DATE__);//Feb  5 2023
//	printf("%s\n", __TIME__);//17:28:22
//	//printf("%d\n", __STDC__);//�����������ѭANSI C����ֵΪ1������δ����
//	return 0;
//}


//#define MAX 10
//#define STR "hehe"
//#define reg register
//int main()
//{
//	//reg int a;
//	//int max = MAX;
//	//printf("%d\n", max);
//	//printf("%s\n",STR);
//	return 0;
//}

//#define SQUARE(X) X*X //(X)*(X)
//int mian()
//{
//	int ret = SQUARE(6 + 1);//��߲��Ǵ�����ȥ�����滻�����X==>6+1*6+1==>11
//	printf("%d\n", ret);//11 
//	return 0;
//}

//#define DOUBLE(X) (X)*(X) //((X)*(X))
//int main()
//{
//	int a = 5;
//	int ret = 10*DOUBLE(a);
//	//int ret=10* a+a =>10* 5+5=>55
//	printf("%d\n", ret);//55
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

//#define CAT(X,Y) X##Y
//int main()
//{
//	int ctx20 = 2023;
//	//printf("%d\n", ctx);
//	printf("%d\n", CAT(ctx,20));//2023
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))//X��Y���滻��ȥ��
//int main()//��Ĳ��������ں��ʹ�ù����г��ֶ��
//{
//	int a = 10;
//	int b = 11;
//	//int max=((a++)>(b++)?(a++):(b++));
//	int max = MAX(a++, b++);
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}


//#define MAX 10
//int main()
//{
//#undef MAX 
//	printf("%d\n", MAX);
//	return 0;
//}

////#define DEBUG
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1 //(�������ʽ)//Ϊ���ִ�У�Ϊ�پͲ�ִ�У���������ʽ
//		//#ifdef DEBUG//�ж����ִ��
//		printf("%d ", arr[i]);
//#endif 
//
//	}
//	return 0;
//}

//int main()
//{//��һ��Ϊ�پͿ��ڶ������ڶ���ҲΪ�پ͵��������Դ�����
//#if 1==2
//	printf("haha\n");
//#elif 2==1
//	printf("gg\n");
//#else
//	printf("yeye\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{//ֻҪ�ж����ִ��
//#if defined(DEBUG)
////#ifdef DEBUG	
//	printf("hehe\n");
//#endif	
//	return 0;
//}//�������-->#if ��defined(DEBUG)



