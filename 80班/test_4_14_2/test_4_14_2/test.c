#define _CRT_SECURE_NO_WARNINGS 1
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//
//typedef unsigned int uint;
//
//int main()
//{
//	int a = 0;
//	printf("a = %d\n", a);
//// 
//// 	unsigned int num1 = 10;
//// 	uint num2 = 20;
//// 	Stu s = {0};
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//1. static���ξֲ�����
// �ı��˾ֲ���������������
//2. static����ȫ�ֱ���
// �ı���ȫ�ֱ�����������ʹ����������ε�
// ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//3. static���κ���
// �ı��˺������������ԣ��ⲿ�������Ա���ڲ��������ԣ�
//4,5

//����һ��
//extern int Add(int x, int y);
//
//int main()
//{
//	printf("%d\n", Add(3, 4));
//	system("pause");
//	return 0;
//}
//�����ⲿ���ŵ�
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}


//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}

//K&R
//ANSI C
//
//#define MAX 100
//#define SQUARE(X) ((X)*(X))
//
//int main()
//{
//	//int max = MAX;
//	//printf("%d\n", max);
//	printf("%d\n", SQUARE(3+2));
//	//printf("%d\n", (3+2)*(3+2));
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 20;
//	int* p = &a;//ָ�����
//	*p = 200;//*-�����ò�����
//
//	printf("%d\n", a);
//	//char ch = 'w';
//	//char * pc = &ch;
//	//printf("%p\n", &a);
//	system("pause");
//	//
//	//0000 0000000000000000000000010100
//	//00 00 00 14
//	//
//	return 0;
//}
//
//int main()
//{ 
//	char *pc = NULL;
//	short *ps = NULL;
//	int *pi = NULL;
//
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(ps));//4
//	printf("%d\n", sizeof(pi));//4
//
//	//32λƽָ̨��Ĵ�С��4���ֽ�
//	//64λƽָ̨��Ĵ�С��8���ֽ�
//	//Ӳ��-����ϵͳ-����
//
//	system("pause");
//	return 0;
//}
//
////�Զ�������
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[10];
//	float score;
//};
//
//#include <string.h>
//
//int main()
//{
//	struct Stu s = {"����", 20, "��", 95.5};//��ʼ��
//	struct Stu* ps = &s;
//	printf("%s %d %s %f\n", ps->name, ps->age, ps->sex, ps->score);
//	//printf("%s %d %s %f\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);
//
//	//printf("name = %s\n", s.name);
//	//printf("age = %d\n", s.age);
//	//printf("sex = %s\n", s.sex);
//	//printf("score = %f\n", s.score);
//	////
//	////s.name = "����";
//	//strcpy(s.name, "����");//string copy
//
//	//printf("name = %s\n", s.name);
//	//printf("age = %d\n", s.age);
//	//printf("sex = %s\n", s.sex);
//	//printf("score = %f\n", s.score);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int age = 40;
//
//	if(age<18)
//		printf("����\n");
//	else if(age>=18 && age<30)
//		printf("����\n");
//	else if(age>=30 && age<50)
//		printf("����\n");
//	else if(age>=50 && age<80)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	/*if(age<18)
//	{
//	printf("δ����\n");
//	printf("����ȥ����\n");
//	}
//	else
//	{
//	printf("����\n");
//	}*/
//
//// 	if(age<18)
//// 	{
//// 		printf("δ����\n");
//// 	}
//	system("pause");
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int a=10;
//
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//
//	}
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int age = 3;
//	//if(age = 5)
//	if(5 == age)
//	{
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//// 	for(i=1; i<=100; i++)
//// 	{
//// 		if(i%2==1)
//// 		{
//// 			printf("%d ", i);
//// 		}
//// 	}
//	system("pause");
//	return 0;
//}