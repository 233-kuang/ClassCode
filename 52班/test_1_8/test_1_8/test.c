#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//struct
//{
//	char name[20];
//	short age;
//	char id[15];
//}s1;
//
//struct
//{
//	char name[20];
//	short age;
//	char id[15];
//}* ps;
//
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};
//
//int main()
//{
//	//ps = &s1;
//	struct Node n;
//	printf("%d\n", sizeof(n));//
//	system("pause");
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
//	int data;
//	struct Point p;
//	struct Node* next;
//};
//
//
//int main()
//{
//	//struct Point p = {3, 4};//��ʼ��
//	//printf("%d %d\n", p.x, p.y);
//	struct Node n = {10, {3,5}, NULL};
//	printf("%d\n", n.data);
//	printf("%d %d\n", n.p.x, n.p.y);
//	system("pause");
//	return 0;
//}


//12
//
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
////8
#include <stddef.h>
//
//struct S
//{
//	char c1;//1 8 1
//	int i;//4 8 4
//	char c2;//1 8 1
//};
//
//#define my_offsetof(struct S, i) \
//	(int)&(((struct S*)0)->i)
//
//int main()
//{
//	printf("%d\n", my_offsetof(struct S, c1));//0
//	printf("%d\n", my_offsetof(struct S, i));//4
//	printf("%d\n", my_offsetof(struct S, c2));//8
//
//	//offsetof
//	system("pause");
//	return 0;
//}

//
////�ṹ���ڴ����Ĺ���
////1. �ṹ��ĵ�һ����Ա��Զ�����뵽�ṹ�����ʼλ�ô�
////2. �ӵڶ�����Ա��ʼ��ÿ����Ա�����뵽ĳ������������������
////   ����������Ա�����С��Ĭ�϶������Ľ�Сֵ
////   Ĭ�϶�������VS-8 Linux-gcc-4
////3. �ṹ����ܴ�С�����г�Ա������������������
////4. ����ṹ����Ƕ���˽ṹ�壬Ƕ�׽ṹ��Ҫ���뵽������������������������
////   �ṹ��������С��������������������Ƕ�׽ṹ�е���������������������
////
//
//struct S3
//{
//	double d;//0-7
//	char c;//8
//	//9-11
//	int i;//12-15
//};
//struct S4
//{
//	char c1;//0
//	//1-7
//	struct S3 s3;//8-23
//	double d;//24-31
//};
////32
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//
//	//struct S s = {0};
//	//printf("%p\n", &s);
//	//printf("%p\n", &(s.c1));
//	//printf("%p\n", &(s.i));
//	//printf("%p\n", &(s.c2));
//
//
//
//	//printf("%d\n", sizeof(s));//
//
//	//struct S2 s2 = {0};
//	//printf("%d\n", sizeof(s2));//
//
//	system("pause");
//	return 0;
//}
//
//#pragma pack(1)
//struct S
//{
//	double d;//8 4 4
//	char c;//8
//	//9-11
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//16
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char arr[100];
//	int a;
//};
//
//void print1(struct S tmp)
//{
//	printf("%s %d\n", tmp.arr, tmp.a);
//}
//
//void print2(const struct S* ps)
//{
//	printf("%s %d\n", ps->arr, ps->a);
//}
//
//int main()
//{
//	struct S s = {"zhangsan", 20};
//	print1(s);
//	print2(&s);
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	int a:2;//4-32
//	int b:5;//
//	int c:10;//15
//	int d:30;//4-32
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//int main()
//{
//	struct S s = {0};
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//

//enum Sex
//{
//	MALE=1,
//	FEMALE=2,
//	SECRET=4
//};
//#define MALE 1
//#define FEMALE 2
//#define SECRET 4
//
//int main()
//{
//	int a = MALE;
//
//	return 0;
//}

//#define MALE 1
//#define FEMALE 2
//#define SECRET 4
//
//int main()
//{
//	enum Sex s = MALE;
//	//printf("%d\n", MALE);
//	//printf("%d\n", FEMALE);
//	//printf("%d\n", SECRET);
//	system("pause");
//	return 0;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*** 1. add    2. sub      ***\n");
//	printf("*** 3. mul    4. div      ***\n");
//	printf("*** 0. exit               ***\n");
//	printf("*****************************\n");
//}
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int main()
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case ADD:
//			break;
//		case MUL:
//			break;
//		case SUB:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while ();
//	return 0;
//}
//
//union Un
//{
//	char c;//1
//	int i;//4
//	double d;//8
//};
//
//int main()
//{
//	union Un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.d));
//	printf("%d\n", sizeof(u));
//	system("pause");
//	return 0;
//}

//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//
//int main()
//{
//	if(check_sys() == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	system("pause");
//	//0x 00 00 00 01
//	//��		��
//	//01 00 00 00-С
//	//00 00 00 01-��
//	return 0;
//}
//

//
//union Un
//{
//	char c[5];//5
//	int i;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	system("pause");
//	return 0;
//}


union Un
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un));
	system("pause");
	return 0;
}