#define _CRT_SECURE_NO_WARNINGS 1

//��׼�������ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', 0};
	//0xccccccc
	//֪��
	//
	printf("%s\n", "abc");//abc
	printf("%s\n", arr1);//abc
	printf("%s\n", arr2);//abc

	system("pause");
	return 0;
}
//
//#define MAX 100
//
//enum Sex
//{
//	MALE=10,
//	FEMALE=5,
//	SECRET
//};
//
//int main()
//{
//	//int age;
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	system("pause");
//	//MALE = 20;
//
//	return 0;
//}
//
//int main()
//{
//	//1. ���泣��
//	//3;
//	//"hehe";
//	//2. const���εĳ�����
//	//
//// 	const int num = 10;
//// 	num = 20;
//// 	printf("num = %d\n", num);
//	//const int n = 10;
//	//int arr[n] = {0};
//	//3. #define����ı�ʶ������
//	//int a = MAX;
//	//MAX = 20;
//	//int arr[MAX] = {0};
//	//printf("%d\n", a);
//	//4. ö�ٳ���
//	
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	{
//		int n = 10;
//		printf("%d\n", n);
//	}
//	printf("%d\n", n);
//
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


//int num = 10;
//
//void test()
//{
//	printf("num = %d\n", num);
//}
//
//int main()
//{
//	test();
//	{
//		printf("num = %d\n", num);//
//	}
//	printf("num = %d\n", num);//
//
//	system("pause");
//	return 0;
//}
//
//E # @ $ A-65 a-97
//ASCII ����
//ASCII ���
//ASCII ֵ
//
//
//int main()
//{
//	char ch = 'w';
//	printf("%c\n", ch);//%c %d %s %f %lf %p %x
//	printf("%d\n", ch);
//
//	//printf("hehe\n");
//	//printf("%s\n", "hehe");
//	
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//
//int val = 20;//ȫ�ֱ���
//
////{}-�����
//
//int main()
//{
//	//int val = 10;//�ֲ�����
//	printf("%d\n", val);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	short age = 10;
//	float weight = 0;
//
//	age = 20;
//	weight = 20.0;
//
//	printf("age = %d\n", age);
//	printf("weight = %f\n", weight);
//
//	system("pause");
//	//char ch = 'w';
//	//float weight = 55.5;
//
//	return 0;
//}

// 
// int main()
// {
// 	printf("%d\n", sizeof(char));//4
// 	printf("%d\n", sizeof(short));//4 2
// 	printf("%d\n", sizeof(int));//4
// 	printf("%d\n", sizeof(long));//8
// 	printf("%d\n", sizeof(long long));//16 8
// 	printf("%d\n", sizeof(float));//4 8 16 
// 	printf("%d\n", sizeof(double));//8 16 32
// 	system("pause");
// 	return 0;
// }
// 
//������-��������
//int main()
//{
//	//printf-�������-�⺯��
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	//ͣ
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}