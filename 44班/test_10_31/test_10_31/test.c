#define _CRT_SECURE_NO_WARNINGS 1

//��printf��δ����

#include <stdio.h>
#include <stdlib.h>

//
//struct Stu
//
enum Sex
{
	MALE,//ö�ٳ���
	FEMALE=5,
	SECRET
};

//struct

int main()
{
	//ö�ٳ���
	enum Sex sex = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	//MALE = 5;
	return 0;
}


//#define ����ı�ʶ������
//#define MAX 10
// 
// int main()
// {
// 	int arr[MAX] = {0};
// 	return 0;
// }

// int main()
// {
// 	const int n = 10;
// 	int arr[10] = {0};//
// 	int arr2[n] = {0};//???
// 
// 	//const int num = 0;//������
// 	//num = 20;
// 	//printf("num = %d\n", num);
// // 	4;//
// // 	3.14;//
// // 	"abcdef";//
// // 	4 = 6;//
// 
// 	return 0;
// }
// //
//extern int g_val;
//
//void test()
//{
//	printf("test::g_val = %d\n", g_val);
//}
//
//int main()
//{
//	//
//	test();
//	printf("main::g_val = %d\n", g_val);
//	//
//	return 0;
//}

//
//void test()
//{
//	//��������
//	int a = 1;//�ֲ�����
//	a = a+1;
//	printf("%d ", a);
//}
//
//int main()
//{
//	//������
//	//��������
//	int i = 0;
//	printf("%d\n", a);
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//
//int main()
//{
//	//%c
//	//%d
//	//%s
//	//%f
//	//%lf
//	//char arr[20] = {0};
//	//scanf("%s", arr);
//	//printf("%s\n", arr);
//	//char arr[] = "hello bit";
//	//printf("%s\n", arr);
//	//printf("%d\n", 100);//100
//	//printf("%c\n", 65);//d
//	//printf("%f\n", 5.5);
//	//a bcedf@!#$%
//	//97 98 99 100
//	//ASCII ����
//	//
//	return 0;
//}
//// 
// int main()
// {
// 	printf("hehe\n");
// 
// 	system("pause");//
// 	return 0;
// }

//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//
//	sum = num1+num2;
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//
//void test()
//{
//	int a = 1000;
//}
//int a = 10;//ȫ�ֱ���
////{}//�����
//int main()
//{
//	int a = 100;//�ֲ�����
//	printf("%d\n", a);//
//	return 0;
//}
//
//int num = 0;//
//
////
//int main()
//{
//	//char c = 'b';//1
//	//int num = 0;//4
//	//short age = 20;//2
//// 	float weight = 55.4;
//// 	weight = 62.5;
//// 	int salary = 10000;
//// 	char ch = 0;
//	short age = 0;
//	age = age+1;
//	printf("%d\n", age);
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}

//main--������
//��������
//int main()
//{
//	printf("hello world");
//	printf("hello world");
//	printf("hello world");
//	printf("hello world");
//	printf("hello world");
//	printf("hello world");
//	return 0;
//}
