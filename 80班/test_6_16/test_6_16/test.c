#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}s1, s2, s3;
//
//struct Stu s4;
//
//int main()
//{
//	struct Stu s5;
//	int num = 10;
//	return 0;
//}
#include <stdlib.h>
//
//struct 
//{
//	int a;
//	char c;
//	short s;
//}s;
//
//struct 
//{
//	int a;
//	char c;
//	short s;
//}* ps;
//
//int main()
//{
//	ps = &s;//
//
//	s.a = 20;
//	s.c = 'w';
//	printf("%d\n", s.a);
//
//	system("pause");
//	return 0;
//}

//���������е�һ�����

//struct Node
//{
//	int data;//4
//	struct Node* next;//4
//};
//
//typedef struct Node
//{
//	int data;//4
//	struct Node* next;//4
//}Node;
//
//
//
//int main()
//{
//	return 0;
//}
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Node
//{
//	struct Point data;
//	struct Node* next;
//};
//
//int main()
//{
//	//struct Point p = {1, 2};
//	//printf("%d %d\n", p.x, p.y);
//	struct Node tmp = {{1,5}, NULL};
//	struct Node n = {{2, 3}, &tmp};
//	printf("%d %d\n", n.next->data.x, n.next->data.y);
//	system("pause");
//	return 0;
//}

//
//�ṹ���ڴ����
//


//
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
//
//struct S
//{
//	char c1;//1 8 1
//	int i;//4 8 4
//	char c2;//1 8 1
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
////��ϰ4-�ṹ��Ƕ������
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	//struct S s = {0};
//	//printf("%p\n", &s);
//	//printf("%p\n", &(s.c1));
//	//printf("%p\n", &(s.i));
//	//printf("%p\n", &(s.c2));
//
//	//printf("%d\n", sizeof(s));//12
//	//printf("%d\n", sizeof(struct S2));//8
//
//
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	struct S s = {0};
//
//	return 0;
//}
//
//#pragma pack(4)
//struct S
//{
//	double d;//0-7
//	char c;//8
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//16
//
//	system("pause");
//	return 0;
//}

#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S s = {0};
//	//offsetof ��һ����
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//	system("pause");
//
//	return 0;
//}
//
//struct S
//{
//	char arr[1000];
//	int n;
//};
//
//void Print1(struct S s)
//{
//	printf("%s %d\n", s.arr, s.n);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%s %d\n", ps->arr, ps->n);
//}
//
//int main()
//{
//	struct S s = {"hello bit", 100};
//	Print1(s);
//	Print2(&s);
//	system("pause");
//	return 0;
//}

//λ��

//00
//01
//10
//11

//struct S
//{
//	int a:2;
//	int b:3;
//	int c:10;
//	int d:30;
//};
//
//struct S
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//
//int main()
//{
//	struct S s = {0};
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//
//	system("pause");
//	return 0;
//}
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//#define MALE 0
//#define FEMALE 1
//#define SECRET 2

//void SetSex(enum Sex s)
//{
//
//}
//int main()
//{
//	enum Sex s = MALE;
//	s = 0;
//	//SetSex(MALE);
//	return 0;
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("****   1. add   2. sub  ****\n");
//	printf("****   3. mul   4. div  ****\n");
//	printf("****   0. exit          ****\n");
//	printf("****************************\n");
//}
//
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int Sub(int x, int y)
//{
//	return x-y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case ADD:
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case SUB:
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case MUL:
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case DIV:
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case EXIT:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//������/������
//
//union U
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union U u;
//	//printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	system("pause");
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//
//	return u.c;
//}
//
//int main()
//{
//	//�жϴ�С��
//	int ret = check_sys();
//	if(ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	system("pause");
//	return 0;
//}

//union U
//{
//	char c;
//	int i;
//};

union U
{
	char c[5];//5
	short int i;//4
};

int main()
{
	printf("%d\n", sizeof(union U));
	system("pause");
	return 0;
}
