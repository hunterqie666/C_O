#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//int main()//goto���
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�:>\n");
//	printf("������:>");
//	scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}
//	return 0;
//}

//int main()// do ...while ѭ�� 
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;//��while�������
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main()//����
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//		return 0;
//	}
//}

//int main()//forѭ������ *****
//{//forѭ�� ��ʼ�����������ж϶�����ʡ��
////forѭ�����жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	int a = 0;
//	int c = 0;
//	for (; a < 10; a++)
//	{
//		for (; c < 10; c++)
//			printf("hehe\n");//123456789 10 c=10 �������� 
//	}//10��hehe  10��ѭ������֮�� ��for(;a<10;a++)��ʼ û�д� c=0��ʼ
//	return 0;//
//}

//int main()
//{
//	int a = 0;
//	for (a = 0; a < 10; a++)
//	{
//		if (a = 5)//��Ҫ��ֵ ����ʧȥ����
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
//			break;//��whileѭ��һ��
//		//continue;��while�Ĵ���ṹ��һ�� �ṹ�Ͳ�һ��
//		printf("%d" , a);//12346789
//	}
//	return 0;
//}

//int main()//forѭ��
//{
//	int i = 0;
//	//��ʼ���� �ж�  �� ����
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
//		if (a < '0' || a>'9')// || ��
//			continue;
//		putchar(a);
//	}
//	return 0;
//}

//int main()
//{//����ctrl + z��ֹͣ
////EOF - end of file ->-1 �ļ�������־
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//��ȡ�ַ��ŵ�ch��
//	//{
//	//	putchar(ch);
//	//}
////scanf��getchar�����뺯�������뺯���и����뻺����
////����scanf����һ������(123456"\n")֮���س�ȷ��������(����123456���뻺����������\n)-->"\n"-->10
////����getchar�����뻺������ɶ Ȼ�󿴼������и�'\n'(10)-->ret=10�����ж�
////10 != Y Ȼ���ֱ��else
//	int ret = 0;
//	int cha = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s",password);
//	while ((cha = getchar()) != '\n')
//	{
//		;
//	}
//	/*getchar();*/ //���(123 123) scanf����߿ո�֮ǰ��123 Ȼ����ָ�����һ�� �����д��ѭ��
//	printf("��ȷ��(Y/N)");
//		ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("����ϵͳ\n");
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	return 0;
//}

//int main()//getchar
//{
//	int ch = getchar();//����
//	putchar(ch);//���
//	printf("%c\n", ch);
//	return 0;
//}

//int main()//ѭ�����
//{
//	int a = 1;
//	while (a<=10)
//	{//��ӡ1-10������
//		if (a == 5)
//			//break;//���ֹͣ 1 2 3 4 
//			continue;//��ֹ����ѭ������Ĵ��벻��ִ�� ֱ�ӽ��뵽whileѭ�����жϲ���
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//int main()//switch���  ���Գ���if���
//{//���������ͬ��case���� ��ͬ�ľͿ���ɾ��printf��break��ֱ�����һ�� 
//	int day = 0;
//	scanf("%d\n", &day);
//	switch (day)// switch(���ͱ��ʽ)
//	{//case ����� break�ǳ���
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
//	default://ǰ�涼δƥ���Ͼͻᵽdefault default��caseû���ϸ��˳�����
//		printf("�������\n");
//	}
//	return 0;
//}

//int main()//����else
//{//else����������δƥ���if��ƥ��
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;//���ɶҲû�� ����a=0 a==1 ��ƥ�䣬ֱ�ӾͲ�����
//}// ���������֮ƥ�� ����if(a==1){}����������else

//int main()//if��� 
//{//�����ʱ��<=�� => ֮��Ĳ�Ҫ�� Ҫ��&&����ʶ ��10<=18<28��
// // �� int a = 9; ��10<=a<28��-->(10<=9<28)-->(9����<10��Ϊ��Ϊ0)(0<28)-->����ѡ��
//	int age = 140;
//	if (age >= 18 && age < 28)
//	printf("����\n");
//	else
//	{
//		if (age >= 28 && age < 60)
//			printf("׳��\n");
//		else if (age >= 60 && age < 80)
//			printf("����\n");
//		else
//			printf("����\n");
//	}
//	return 0;
//	//int age = 145;
//	//if (age<18)
//	//	printf("δ����\n");
//	//else if (age>=18 && age<28)
//	//	printf("����\n");
//	//else if (age >= 28 && age < 60)
//	//	printf("׳��\n");
//	//else if (age >= 60 && age < 80)
//	//	printf("����\n");
//	//else 
//	//	printf("����\n");
//	/*int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("������\n");
//	return 0;*/
//	//int age = 20;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//return 0;//����֧
//}

//int main()
//{
//	int a = 0;
//	;//�����-�����
//	return 0;
//}