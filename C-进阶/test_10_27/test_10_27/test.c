#define _CRT_SECURE_NO_WARNINGS 1


// void main()
// {
// 	
// }

#include <stdio.h>

//main-������-��������
//
//int main()
//{
//	//��ӡ����-C���ԵĿ�-���
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	return 0;
////}
//
//int main()
//{
//	//printf("%d\n", 100);//%d ����
//	//printf("%c\n", 100);//%c �ַ�
//	printf("%d\n", sizeof(char));//1 �ֽ�
//	printf("%d\n", sizeof(short));//2 - 16
//	//1111111111111111
//	//
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 
//	printf("%d\n", sizeof(long long));//8 
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}
//

//int main()
//{
//	short age = 20;
//	float weight = 5.6f;
//	//101.100
//	printf("%f\n", weight);
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	num = 20;
//	printf("num = %d\n", num);
//
//	return 0;
//}

//{}-�����
//
//int a = 100;//ȫ�ֱ���
//
//int main()
//{
//	int a = 10;//�ֲ�����
//	printf("%d\n", a);//
//
//	return 0;
//}

//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum  = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	char arr[5] = {0};
//	scanf("%s", arr);//err
//	printf("%s\n", arr);
//
//	return 0;
//}
//int g_val = 2019;
//
//void test()
//{
//	printf("g_val 4 = %d\n", g_val);
//}
//int main()
//{
//	printf("g_val 1 = %d\n", g_val);
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//		printf("g_val 2 = %d\n", g_val);
//	}
//	printf("g_val 3 = %d\n", g_val);
//	test();
//	return 0;
//}

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//
//int main()
//{
//	//...
//	{
//		int a = 10;
//	}
//
//	return 0;
//}


#define MAX 100

//�ṹ��ؼ���
struct Stu
{
	char name[20];
	short age;
	char id[15];
};

enum Sex
{
	MALE,
	FEMALE=5,
	SECRET
};

int main()
{
	//1. ���泣��
// 	3.14;
// 	50;
	//2. const���εĳ�����
	//const int num = 10;
	//num = 20;
	//printf("num = %d\n", num);
	/*const int n = 10;
	int arr[n] = {0};*/
	//3. #define ����ı�ʶ������
	//printf("%d\n", MAX);//100
	//MAX = 200;
	//4. ö�ٳ���
	//ö��
	
	
	//�ṹ��

	/*struct Stu s1 = {"����", 20, "20190101"};
	struct Stu s2 = {"����", 20, "20190101"};
	struct Stu s3 = {"����", 20, "20190101"};
	struct Stu s[40];*/

	/*enum Sex sex = MALE;
	sex = FEMALE;
	sex = SECRET;
	*/
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	//MALE  = 4;//err

	return 0;
}