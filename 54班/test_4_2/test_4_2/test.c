#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>


int main()
{
	int ch = 0;
	//EOF -- end of file
	while((ch=getchar()) != EOF)
	{
		if(ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}
	system("pause");
	return 0;
}
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//while(1)
//	//	printf("hehe\n");
//
//	int i = 1;
//	while(i<=10)
//	{
//		i++;
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	//
//	system("pause");
//	return 0;
//}


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
//		case 2:m++;n++;	break;
//		}
//	case 4:m++;break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//
//	/*if(1 == day)
//	{
//		printf("����1\n");
//	}
//	else if(2 == day)
//	{
//		printf("����2\n");
//	}
//	else if(3 == day)
//	{
//		printf("����3\n");
//	}
//*/
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	//for(i=1; i<=100; i++)
//	//{
//	//	if(i%2 == 1)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


//��C�����ȱ�ݡ�

// 
// int main()
// {
// 	int age = 10;
// 	
// 	if(5 == age)
// 	{
// 		printf("age==5\n");
// 	}
// 	system("pause");
// 	return 0;
// }
//
//int test()
//{
//	return 0;
//	return 1;
//
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
// int main()
// {
// 	int a = 0;
// 	int b = 2;
// 	if(a == 1)
// 		if(b == 2)
// 			printf("hehe\n");
// 		else
// 			printf("haha\n");
// 
// 	system("pause");
// 	return 0;
// }

//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if(age<18)
//	{
//		printf("����\n");
//		printf("���ܴ���Ϸ\n");
//	}
//	else if(age>=18 && age<25)
//		printf("����\n");
//	else if(age>=25 && age<50)
//		printf("����\n");
//	else if(age>=50 && age<80)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	/*if(age<18)
//	printf("δ����\n");
//	else
//	printf("����\n");*/
//
//	/*if(age<18)
//	printf("δ����\n");*/
//	system("pause");
//	return 0;
//}


//��������

//�Զ�������
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = {"����", 20, 60.0f};
//	struct Stu * ps = &s;
//	printf("%s %d %f\n", ps->name, ps->age, ps->score);
//	//printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
//	//printf("name: %s\n", s.name);
//	//printf("age: %d\n", s.age);
//	//printf("score: %f\n", s.score);
//	system("pause");
//	return 0;
//}
//
//#define MAX 100
//#define NAME "BIT"
//
//#define ADD(X, Y) ((X)+(Y))
//
//int main()
//{	
//	char c = 'w';
//	int a = 10;
//	double d = 3.14;
//
//	char* pc = &c;
//	int*  pa = &a;
//	double* pd = &d;
//
//	printf("%d\n", sizeof(pc));//1 4
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pd));//4
//
//
//	//int a = 10;
//	//int * p = &a;//& ȡ��ַ������
//	//*p = 20;//* �����ò�����
//	//printf("%d\n", a);
//
//	//int a = 10;
//	//int * p = &a;//ָ�����
//	//char c = 'w';
//	//char * pc = &c;
//
//
//	//printf("%d\n", 10*ADD(2+4, 3));
//	//int a = 10;
//	//printf("%p\n", &a);
//	//00000000000000000000000000001010
//	//0000000a
//	//printf("%d\n", 2+3);
//	//printf("%s\n", NAME);
//	//int a = MAX;
//	//printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//static-��̬��
//1. static���ξֲ�����
//�ı��˱������������ڣ������򲻱�
//2. static����ȫ�ֱ���
//�ı��˱�����������ʹ�ñ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//3. static���κ���
//ʹ���������ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//4,5

//�����ⲿ���ŵ�
//extern int g_val;
//
//extern int Add(int x, int y);
//
//int main()
//{
//	//printf("g_val = %d\n", g_val);
//	printf("%d\n", Add(2, 3));
//	system("pause");
//	return 0;
//}



// void test()
// {
// 	static int n = 1;
// 	n++;
// 	printf("%d ", n);
// }
// 
// int main()
// {
// 	int i = 0;
// 	for(i=0; i<10; i++)
// 	{
// 		test();
// 	}
// 	system("pause");
// 	return 0;
// }