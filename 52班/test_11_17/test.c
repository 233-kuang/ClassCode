#define _CRT_SECURE_NO_WARNINGS 1

//
//markdown -�ű�����
//
//
//typedef unsigned int uint;
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//
//
//int main()
//{
//	unsigned int a;
//	uint a;
//
//	Stu s;
//	return 0;
//}
#include <stdio.h>

//static

//void test()
//{
//	//��̬�ֲ�����
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
//		//10-1
//		//10-2
//		//1-10
//		//2-11
//	}
//	return 0;
//}

//extern
//�����ⲿ����

//extern int g_val;
//
//extern void print();
//
//int main()
//{
//	//printf("%d\n", g_val);
//	print();
//	return 0;
//}
//


//#define MAX 10
//
//int main()
//{
//	int a = MAX;
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
////ADD��һ����
//#define ADD(x, y) ((x)+(y))
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//c = Add(a, b);
//	c = 10* ADD(a,b);
//	printf("c = %d\n", c);
//	return 0;
//}
//
//ָ��
//
//
//int main()
//{
//	int a = 10;
//	//00000000 00000000 00000000 00001010
//	//00 00 00 0a
//	//
//	//char ch = 'w';
//	//char* pc = &ch;
//	//int* p = &a;//ָ�����
//	//*p = 20;//�����ò�����
//	//jie jian
//	//jin jing
//
//	printf("%d\n", a);
//	//printf("%p\n", &a);
//	//printf("%p\n", &ch);
//
//	return 0;
//}

//
//int main()
//{
//	char a = 'w';
//	int b = 10;
//	double d = 3.14;
//	
//	char*pa = &a;
//	int* pb = &b;
//	double * pd = &d;
//
//	printf("%d\n", sizeof(pa));//1 
//	printf("%d\n", sizeof(pb));//4
//	printf("%d\n", sizeof(pd));//8
//	return 0;
//}

//�ṹ��ؼ���
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char id[15];
//};
//
//int main()
//{
//	struct Stu s = {"����", 20, "��", "201808010102"};
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
//	return 0;
//}

//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if(age<18)
//	{
//		printf("δ����\n");
//		printf("��������\n");
//	}
//	else if(age>=18 && age<=30)
//	{
//		printf("����\n");
//	}
//	else if(age>30 && age<50)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//
//// 	if(age<18)
//// 		printf("δ����\n");
//// 	else
//// 		printf("����\n");
//	return 0;
//}

// #include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char firstname[20];
//	char first_name[20];//ok//unix
//	char FirstName[20];//ok//
//
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 1;
//	if(5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	//for(i=1; i<=100; i++)
//	//{
//	//	if(1 == i%2)
//	//		printf("%d ", i);
//	//	/*if(i%2 == 0)
//	//		continue;
//	//	else
//	//		printf("%d ", i);*/
//	//}
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	//if(1 == day)
//	//{
//	//	printf("����1\n");
//	//}
//	//else if(2 == day)
//	//{
//	//	printf("����2\n");
//	//}
//	//else if(3 == day)
//	//{
//	//	//..
//	//}
//	return 0;
//}


#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:	n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	//3 2-2
//	//4 3-5
//	//3 1
//	//3 4-2
//	//
//	return 0;
//}

int main()
{
	int day = 0;
	scanf("%d", &day);//2
	switch(day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	}
	return 0;
}