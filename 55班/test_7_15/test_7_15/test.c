#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//typedef �����ض���
//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int age = -10;
//	uint num = 10;
//	printf("%u\n", age);
//	system("pause");
//	return 0;
//}

//
//1. �뽲��static���÷�
//a. static���ξֲ�����,�ı���Ǿֲ���������������
//b. static����ȫ�ֱ������ı��˱�����������(��������-���ⲿ��������->�ڲ���������)
//c. static���κ������ı���Ǻ�����������(��������-���ⲿ��������->�ڲ���������)
//d. static ������ĳ�Ա����
//e. static ������ĳ�Ա����
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	//10��2
//	//2-11
//	system("pause");
//	return 0;
//}


//����
//extern �����ⲿ���ŵ�
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}

//
//IDE  ���ɿ�������
//cl.exe - ������
//link.exe - ������
//

//extern int Add(int, int);
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//
//	system("pause");
//	return 0;
//}

//#define ���峣��
//#define NUM 100
//
//
////#define�����
//#define MAX(X,Y)  (X)>(Y)?(X):(Y)
//
////
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//
//int main()
//{
//	int max = MAX(3, 5);
//	printf("max = %d\n", max);
//	max = 0;
//	max = Max(3, 5);
//	printf("max = %d\n", max);
//
//	system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//	int num = 10;//4
//	int* p = NULL;
//
//	//printf("%p\n", &num);
//	printf("%d\n", num);
//	p = &num;//ָ������-ָ�����
//	*p  =20;//�����ò���
//	printf("%d\n", num);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc;
//	return 0;
//}

//
////�ṹ��
//struct Stu
//{
//	char name[20];
//	unsigned int age;
//	char sex[5];
//};
//
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, "��"};
//	//.
//	//->
//	struct Stu* ps = &s1;
//
//	ps->age++;
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//	
//	/*(*ps).age++;
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);*/
//
//	//s1.age++;
//	//printf("%s %d %s\n", s1.name, s1.age, s1.sex);
//
//	system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//	int age = 40;
//	//if(age == 18)
//	//	printf("����\n");
//
//	//if(age<18)
//	//{
//	//	printf("δ����\n");
//	//	printf("����ȥ����\n");
//	//}
//	//else
//	//	printf("����\n");
//
//	/*if(age<18)
//		printf("δ����\n");
//	else if(age>=18 && age<30)
//		printf("����\n");
//	else if(age>=30 && age<50)
//		printf("����\n");
//	else if(age>=50 && age<80)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//*/
//
//	if(age<18)
//		printf("δ����\n");
//	else if(18<=age<30)//err
//		printf("����\n");
//	else if(age>=30 && age<50)
//		printf("����\n");
//	else if(age>=50 && age<80)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a = 0;
//int b = 2;
//if(a == 1)
//if(b == 2)
//printf("hehe\n");
//else
//printf("haha\n");
//return 0;
//}

//int main()
//{
//	int a = 10;
//	int a=10;
//
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	char firstname[20];
//	char first_name[20];//unix ���
//	char FirstName[20];//
//
//	return 0;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if(num%2==1)
//	{
//		printf("����\n");
//	}
//	//int age = 10;
//	////if(age == 18)
//	//if(18 == age)
//	//{
//	//	printf("����\n");
//	//}
//	//else
//	//{
//	//	printf("δ����\n");
//	//}
//	system("pause");
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}