#define _CRT_SECURE_NO_WARNINGS 1

//stdio-
#include <stdio.h>
//
//int main()
//{
//	//printf��һ���⺯��-�������
//	printf("hello bit\n");
//	return 0;
//}
//
//int main()
//{
//	short hight = 180;
//	printf("%d\n", hight);
//	hight = 190;
//	printf("%d\n", hight);
//
//	//short age = 10;
//
//	//printf("%d\n", sizeof(char));//1 �ֽ�
//	//printf("%d\n", sizeof(short));//2
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof(long));//4 
//	//printf("%d\n", sizeof(long long));//8
//	//printf("%d\n", sizeof(float));//4
//	//printf("%d\n", sizeof(double));//8
//
//	return 0;
//}

//int num = 100;
//
//int main()
//{
//	int num = 10;
//
//	printf("num = %d\n", num);
//
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//

//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}
//
//int num = 100;
//
//void test()
//{
//	printf("num = %d\n", num);
//}
//
//int main()
//{
//	printf("num = %d\n", num);
//	{
//		printf("num = %d\n", num);
//		{
//			printf("num = %d\n", num);
//		}
//	}
//	test();
//	return 0;
//}

//�����ⲿ����
//extern int g_val;
//
//int  main()
//{
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//
//int main()
//{
//	{
//		int a = 10;
//	}
//
//	printf("a = %d\n", a);
//	return 0;
//}

#define MAX 100

//�ṹ�� - struct
//struct Stu
//{
//	char name[20];
//	short age;
//};


//ö�ٹؼ��� - enum
//enum Sex
//{
//	MALE,
//	FEMALE=5,
//	SECRET
//};
//
//int main()
//{
//	//1. ���泣��
//	/*3;
//	3.14;
//	"abc";*/
//	//2. const���εĳ�����
//	/*const int num = 10;
//	num = 20;*/
//	/*const int n = 10;
//	int arr[n] = {0};*/
//	//3. #define����ı�ʶ������
//	//int a = MAX;
//	//printf("a = %d\n", a);
//	//4. ö�ٳ���
//	//enum Sex sex = FEMALE;
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//
//	return 0;
//}

//#
//A
//
#include <string.h>
//
//int main()
//{
//	//"abc";
//	//"";
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	printf("%d\n", strlen(arr1));//string length
//	printf("%d\n", strlen(arr2));
//	//printf("%s\n", arr1);//abc
//	//printf("%s\n", arr2);//abcabc
//
//	return 0;
//}
//
//int main()
//{
//	//printf("\a\a\a\a\a\a\a\a");
//	//printf("c:\test\090\test.c");
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("%d\n", strlen("c:\test\71\test.c"));
//	printf("%c\n", '\x61');
//	//60
//	//6*16 + 0*1
//	//96
//	//
//	//71
//	//7*8 + 1*1
//	//57
//	//
//	//123
//	//1*100 + 2*10 + 3*1=123
//
//	//13 19 20 15 23 24 
//	return 0;
//}
//

enum Color
{
	RED,
	YELLOW,
	BLUE
};

int main()
{
	enum Color c = YELLOW;
	return 0;
}