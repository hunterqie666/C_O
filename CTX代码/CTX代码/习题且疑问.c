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
//int main()//n��k�η�
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
//int main()//����Ǹ������������������֮��
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
//int main()//�õݹ�ķ�ʽȥ�����ַ���
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
//int main()//���뼸���Ǽ��ĳ˷���
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
//int main()//��ָ���ӡ������ĸ�����ֵ
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()//�ֱ��ӡ����������λ��ż��λ
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
//int main()//����������2����λ��ͬ�ĸ���
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, & n);
//	int co=get(m, n);
//	printf("%d\n", co);
//	return 0;
//}

//int count_(unsigned int a)//unsigned�ǿ�������ֵΪ����
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
//int main()//��2������1�ĸ���
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_(a);
//	//system("pause");//system�⺯��-ִ��ϵͳ����-pause(��ͣ)
//	////��û�е�����̨���������һ������
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

//int i;//�ֲ��������ֵ��ȫ�ֱ�������ʼ��Ĭ����0
//int main()
//{//��������һ���޷��������������ʱ����������ת��Ϊ�޷�����
//	i--;
//	if (i > sizeof(i))//sizeof()-�������/������ռ�ڴ�Ĵ�С >=0 �޷�����
//	{//��i=-1 ת��Ϊ�޷�������ʱ�������λ(1)���Ƿ���λ������Ϊ��Чλ
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
//}//11223300-->���ڴ�洢����44 33 22 11-->int���ĸ��ֽ�44 33 22 11��ռһ���ֽ�

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

//int main()//������������
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
//	//Init(arr,sz);//��ʼ������
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

//��һ�������洢���ڴ��еĶ�������1�ĸ���
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
//}//���ܻ�������������������int���ֽڴ�С��
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%db=%d\n", a, b);
//	return 0;
//}//a^b-->X  X�൱��һ��Կ�� X^b-->ԭ��a��ֵ X^b--->ԭ��a��ֵ
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//����
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
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

//				 //������arr�Ǹ�ָ��
//int  binary_search(int arr[], int k ,int sz)
//{//
//	//int sz = sizeof(arr) / sizeof(arr[0]);//���ӽ����1
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
//	int k = 7;//���ﴫ��ȥ��ʵ������arr�ĵ�һ��Ԫ�صĵ�ַ
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
//void game() //rand() % 100 + 1; ����ģ��100����rand�������������0-99Ȼ��+1-->0-100
//{//ʱ�������ǰʱ��--�������ʼʱ��(1970.1.1 0.0.0)
// //time_t time (time_t* timer)-->time_t�������Ǹ�������-->����
//	int random_num = rand() % 100 + 1;//rand��������� rand����������� �������� ��Χ����0-0*7fff/32767��
//	int input = 0; //�ڵ���ran֮ǰҪ��srand(����)-�������Ҫ�� ��������� ʱ���Ǳ��-->ʱ���
//	while (1)
//	{
//		printf("������µ�����>:");
//		scanf("%d", &input);
//		if (input>random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ����ϲ ������\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //randҪ��srandǰʹ�� srand(����)
//	do {							 //NULL��ָ��
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�ݰ�\n");
//			break;
//		default:
//			printf("ѡ���������������!\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}

//int main()//�˷��ھ���
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}//%��d֮��2�Ļ�����λ���Ҷ��룬-2���������
//		printf("\n");
//	}
//	return 0;
//}

//int main()//��ʮ���������ֵ
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

//int main()//����1/1-1/2+1/3...+1/99-1/100
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

//int main()//1-100��9������
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

//int main()//100-200֮�������  ����1�����������ⲻ������������
//{//�Դ���  ����<��������n�־���>
//	int i = 0;
//	int c = 0;
//	for (i = 101; i <= 200; i+=2)//�ų���ż����ʣ������Ȼ���������
//	{
//		int j = 0;   //sqrt--��ƽ������ѧ�⺯��
//		for (j = 2; j <=sqrt(i); j++)//j<i
//		{//�����һ�������ڿ�ƽ��֮ǰ�����������Ͳ�������
//			if (i % j == 0)
//			{
//				break;
//			}
////��������i=a*b i=16��д��2*8����4*4 ����˵a��b��������һ��������<=��ƽ��֮��i������
////Ҳ����˵ֻ��Ҫ�ж���<=(����a)�����ֺͿ�ƽ�����������м�����ܲ��� j ���������ܵĻ��Ͳ������� 
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

//int main()//�ж�1000-2000������
//{//1.�ܱ�4�������Ҳ��ܱ�100����������
//	//2.�ܱ�400����������
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

//int main()//�������� �����Լ�� շת�����
//{//*********
//	int m =0;
//	int n =0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)//�Ż�
//	{
//		/*r = m % n;*/
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()//���ı���
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()//������� �ȴ�С ���Ӵ�С
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)// == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� - strcmp
//		{ //strcmp  exp1>exp2-->����0������ͬ��
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
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
//		Sleep(1000);//��Ϣһ��
//		system("cls");//ִ��ϵͳ�����һ������- cls - �����Ļ
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
//	int right = sz - 1;//�±��Ǵ�0��ʼ��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
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
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()//��1--3�Ľ׳�
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)//�Ż�
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

//int main()//��N�Ľ׳�
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

//int main()//ѭ������ 0�� ������
//{
//	int a = 0;
//	int c = 0;
//	for (a = 0, c = 0; c = 0; a++, c++)//�������ж�C=0��0Ϊ��
//		c++;
//	return 0;
//}

///////ѭ����ϰ

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

//int main()//��1-100�ڵ�����
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
////����p ��ֵΪe��100000�����±���ʽ��ֵ�ֱ�Ϊ����?
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
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
//	p = a;//p��������int(*)[4]��a��������int(*)[5]������a����Ԫ�ص�ַ����a�ĵ�ַ������p��ֻ�����Ͳ���һ����
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;//      FFFFFFFFFFFFFFFC             -4
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//aa[1]--�ڶ�����Ԫ�ص�ַ
//	return 0;//           10             5
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//char* ��ŵ���w ��a ��a==>��Ԫ�ص�ַ
//	char** pa = a;
//	pa++;//==>p+1 ������work �����˵�һ��char*
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
//	assert(str);//�ж�Ϊ��١�0Ϊ�٣�����Ϊ�档
//	int len = strlen(str);//�ж��ٸ��ַ�
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
//}//дһ����������������һ���ַ���������
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s",arr);
//	gets(arr);//��ȡһ��
//	input(arr);
//	printf("%s", arr);
//	return 0;
//}

//int main()//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//{//���磺2+22+222+2222+22222
//	int a = 0;//ʲô����
//	int n = 0;//�м���
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
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��Ϊ�� - nλ��
//		int n = 1;//����λ��������һλ����
//		int tmp = i;
//		int sum = 0;
//		//�����tmpԭ�� ���while���Ϊi ����/=�����ı���i���������������ѭ�� 
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp/= 10;
//		}
//		//3.�Ƚ�i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{//��ӡ������
//	int line = 0;
//	scanf("%d", &line);//Ҫ����������������������д��ż�����Ͱ���ֱ�Ϊ�ϰ벿�ֺ��°벿��
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
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
//	int money = 0;//�ж���Ǯ
//	int total = 0;//���˶�����ˮ
//	int empty = 0;//�ж��ٸ���ƿ
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
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
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total+= empty / 2;
//		empty = empty / 2+ empty%2;
//	}//       �Ȼ����Ŀ�ƿ �����������ƿ������������һ�������� 
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
//		//����������
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{//���Ǹ���������ȫ������Ԥ������=>Խ�����
//			left++;
//		}
//		//������ż��
//		while ((left < right) &&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()//�������� ������ǰ ż���ں�
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}//�������������ң�ż�����������ң��ҵ�ֱ�ӽ��н���

//int main()
//{//�������� =>�޷�����ֱ�Ӳ�0���з����������λ���� 
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//char ��ռ�ռ���1���ֽ� 8������λ
//	//00000000000000000000000011001000 ==>200 ������ ռ4���ֽڣ�32������λ
//	// 11001000 ==>�洢��a��
//	//00000000000000000000000001100100 ==>100
//	// 01100100 ==>�洢��b��
//	c = a + b;//Ҫ��ӣ���������
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100 
//	//��ӡ�������� char c charֻ��8������λ =>00101100
//	printf("%d %d", a + b, c);//a+b ������û�з���c�������Ծ���300
//	return 0;//    300    44
//}//%d��ӡ�з��ŵ�ʮ�������� �������λ��0 ������=>���뷴�벹����ͬ c��ͬ��

//int main()
//{//�з��ŵ�char�ķ�Χ�� -128-127
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
//{//���������
//	int arr[10][10] = {0};
//	int i = 0;//��
//	int j = 0;//��
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
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		int line=10;
//		int g = 0;
//		for (g = 0; g < line - 1 - i; g++)
//		{
//			printf(" ");
//		}//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////��Ŀ����: 
////������
////��Ŀ���� :
////�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
////����Ϊ4�����ɷ��Ĺ��ʩU
////A˵ : �����ҡ�
////B˵ : ��c��
////C˵ : ��D��
////D˵ : c�ں�˵
////��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭������
//int main()
//{//������
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer= %c\n", killer);
//		}
//	}
//	return 0;
//}//����һ�٣���Ϊ1����Ϊ0


////Aѡ��˵:B�ڶ����ҵ���; 
////Bѡ��˵:�ҵڶ���E����; 
////Cѡ��˵:�ҵ�һ��D�ڶ�; 
////Dѡ��˵:C����ҵ���; 
////Eѡ��˵:�ҵ��ģ�A��һ;
////����������ÿλѡ�˵����һ�룬����ȷ�����������Ρ�
//int main()
//{//������
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

////�ķ�2��char *GetMemory(char** p)
//void GetMemory(char** p)
//{
//  p = (char*)malloc(100);
// //�ķ�2��*p = (char*)malloc(100);
//	//�ķ�2��	return p;
//}//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷŲ����޷��ҵ������Ի�����ڴ�й��
//void Test(void)
//{
//	char* str = NULL;
////�ķ�1��GetMemory(&str);
////�ķ�2��str=GetMemory(str);
//	GetMemory(str);//strstr��ֵ���ݵ���ʽ��p
//	//p��GetMemory�������βΣ�ֻ���ں���GetMemory�ڲ���Ч��������������str�Ŀռ�
//	//���ݻ���NULL��>��ָ��,����һ�����õĵ�ַ��û��ָ�����õĿռ�
//	//���� "hello world"����ȥ������������strcpy��++�Ĳ������ͻ�Ƿ�����
//	strcpy(str, "hello world");
//	printf(str);//����������ڴ�й©��
//	//�ķ�
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
//	char p[] = "hello world"; //����ջ�ռ�ĵ�ַ������
//	return p;//p����ջ�����ٵģ����˺����ͻ����٣�ջ�������ٵĿռ�᷵�ظ�ϵͳ
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//��Ȼstr���յ���P�ĵ�ַ�����ǵ�������������֮�󣬵��ú����Ŀռ�Ҳ��֮ȡ��
//	//str��ָ��Ŀռ����ݾͲ�֪���ˣ�����ɷǷ����ʡ�
//	printf(str);//���ֵ
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
//	printf(str);//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©��
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
//{//��1000���ڵ�������ȫ����һ����ǡ�ó��������������֮�ͣ�����6=1+2+3
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
//{//�������Ĺ����������100Ԫ����һ���1Ԫ��2Ԫ��5Ԫ�����жһ�������
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