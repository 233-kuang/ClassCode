#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

//typedef int (*p_t)(int, int);
//
//typedef struct Stu
//{
//	char name[20];
//	short int age;
//	char id[15];
//}Stu;
//
//int main()
//{
//	Stu s;
//	s.age = 20;
//	return 0;
//}

//
//struct
//{
//	char name[20];
//	short int age;
//	char id[15];
//}s;
//struct
//{
//	char name[20];
//	short int age;
//	char id[15];
//}* ps;
//
//int main()
//{
//	ps = &s;
//// 	s.age = 20;
//// 	printf("%d\n", s.age);
//	system("pause");
//	return 0;
//}

//struct Node
//{
//	int data;//����-4
//	struct Node* next;//4
//};
//
//typedef struct Node
//{
//	int data;//����-4
//	struct Node* next;//4
//}Node;
//
//int main()
//{
//	Node n;
//	n.data = 1;
//	return 0;
//}

//�ڴ����

//
//struct S2
//{
//	int i;//4
//	char c1;//1
//	char c2;//1
//};
//
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1 8 1
//};
////
////�ڴ����Ĺ���
////1. �ṹ��ĵ�һ����Ա����Զ�����ڽṹ�������ʼλ�õ�0ƫ�ƴ�
////2. �ӵڶ�����Ա��ʼ������г�Ա
////   ÿ����Ա��Ҫ���뵽ĳ����������������������ƫ������
////   �����������ǳ�Ա�����С�͡�Ĭ�϶��������Ľ�Сֵ
////    linux-gcc-Ĭ�϶�������4
////    win-vs----Ĭ�϶�������8
////3. �ṹ����ܴ�С�����Ƕ��г�Ա�Ķ�����������������������
////4. ���Ƕ���˽ṹ���Ա���ṹ���ԱӦ�ö��뵽��������������
////   ��������ƫ������
////   �ṹ����ܴ�С�����ж�����������Ƕ�׽ṹ�еĶ�������������������������
////
//
//struct S3
//{
//	double d;//
//	char c;//
//	int i;//
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
////32-4
////40
////
//int main()
//{
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));
//// 	printf("%p\n", &s1);//
//// 	printf("%p\n", &(s1.c1));
//// 	printf("%p\n", &(s1.i));
//// 	printf("%p\n", &(s1.c2));
//
//	//printf("%d\n", sizeof(s1));//12 
//
//	//struct S2 s2;
//	//printf("%d\n", sizeof(s2));//8
//
//	system("pause");
//	return 0;
//}

//#define Ԥ����ָ��

// #pragma pack(1)
// struct S
// {
// 	char c1;//0-1-
// 	double d;//2-9
// };
// #pragma pack()
// 
// int main()
// {
// 	printf("%d\n", sizeof(struct S));//
// 	system("pause");
// 	return 0;
// }
//
//struct S
//{
//	int i;//0
//	char c;//4
//	double d;//8
//};
//
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//#define OFFSETOF(stName, memName) (size_t)&(((stName*)0)->memName)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, d));
//
//	system("pause");
//	return 0;
//}

//λ��
//�ṹ��ʵ��λ��
//
//
//struct S
//{
//	int a:2;//1-int-32bit[                            ]
//	int b:5;//30-5-25bit
//	int c:10;//10-15bit
//	int d:30;//1-int-32-30-2
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//
//
//	system("pause");
//	return 0;
//}

//
//struct S
//{
//	char a:3;//1
//	char b:4;//
//	char c:5;//1
//	char d:4;//1
//};
//int main()
//{
//	struct S s = {0};//3
//	s.a = 10;//00000000000000000000000000001010
//	s.b = 12;//00000000000000000000000000001100
//	s.c = 3;// 00000000000000000000000000000011
//	s.d = 4;// 00000000000000000000000000000100
//
//	printf("%d\n", sizeof(struct S));
//	system("pause");
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};


enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//
//#define MALE 0
//#define FEMALE 1
// #define SECRET 2
//
//
//int main()
//{
//	//enum Sex s = FEMALE;
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	int sex = 0;
//	if(1)
//		sex = MALE;
//	else
//		sex = FEMALE;
//	//enum Sex s = MALE;
//	
//	system("pause");
//	return 0;
//}

//
//ʲô�Ǵ�С�ˣ�
//1-int
//00 00 00 01
//
//������󣬵�ַ�ɵ͵���
//01 00 00 00  -С��
//00 00 00 01  -���
//
//������-������
//union U
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(union U));//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.d));
//
//	system("pause");
//	return 0;
//}
//1
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1--С��
//	//����0--���
//	return u.c;
//}
//
//int main()
//{
//	if(1 == check_sys())
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//union Un
//{
//	int i;//4-4
//	char c[5];//1
//	//3
//};
// 
// union Un
// {
// 	int i;//4-4
// 	short c[7];//1
// 	//3
// };
// 
// 
// int main()
// {
// 	printf("%d\n", sizeof(union Un));
// 	system("pause");
// 	return 0;
// }
//

