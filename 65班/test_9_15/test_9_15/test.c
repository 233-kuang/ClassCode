#define  _CRT_SECURE_NO_WARNINGS 1

//��׼�������ͷ�ļ�
#include <stdio.h>

//main-������-��������
//int main()
//{
//	//�������-�⺯��
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}
//



//#@!^sbcdfe
//a-97
//b-98
//ASCII����
//ASCII���
//ASCII��ֵ
//
//int main()
//{
//	//printf("%d\n", 100);
//	//printf("%c\n", 100); //'d'
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//int main()
//{
//	char ch = 'b';
//	//short weight = 66;
//	float weight = 66.6f;
//
//
//	return 0;
//}
//
//
//int a = 100;
////{}�����
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	/*short age = 20;
//	printf("age = %d\n", age);
//	age = 30;
//	printf("age = %d\n", age);*/
//
//	return 0;
//}
//
//int a;
//
//int main()
//{
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("������2��������:>");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
int b = 200;

int main()
{
	int a = 10;
	{
		int b = 20;
		printf("b = %d\n", b);
	}
	printf("a = %d\n", a);
	return 0;
}

//int a = 10;
//
//void test()
//{
//	printf("test::a = %d\n", a);
//}
//int main()
//{
//	printf("a = %d\n", a);
//	test();
//	return 0;
//}

//�����ⲿ���ŵ�
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}
//
//#define MAX 100
//
//struct Stu
//{
//	char name[20];
//	short age;
//};
//
//enum Sex
//{
//	MALE=3,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//1. ���泣��
//	//double d = 3.14;
//	//'a';
//	//"abcdef";
//	//2. const���εĳ�����
//	//const int num = 10;
//	//num = 20;
//	//const int n = 10;
//	//int arr[n] = {0};
//	//3. #define ����ı�ʶ������
//	/*int a = MAX;
//	MAX = 200;
//	printf("a = %d\n", a);*/
//	//4. ö�ٳ���
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//MALE = 20;
//
//	return 0;
//}