#define _CRT_SECURE_NO_WARNINGS 1


//��׼�������ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//������-��������
//int main()
//{
//	//��ӡ����-�������-�⺯��
//	printf("hello world\n");
//	Sleep(1000);
//	system("cls");
//	printf("hello bit\n");
//	//��ͣ
//	system("pause");
//	return 0;
////}
//
//int main()
//{
//	printf("%d\n", sizeof(char));//4 2 1 
//	printf("%d\n", sizeof(short));//1 2 
//	printf("%d\n", sizeof(int));//4 2 
//	printf("%d\n", sizeof(long));//4 8
//	printf("%d\n", sizeof(long long));//16
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//short age = 10;
//	//float weight = 55.5;
//	/*int num = 0;
//	double d = 0.0;
//*/
//	return 0;
//}
//
//int a = 20;//ȫ�ֱ���
//
//int main()
//{
//	int a = 10;//�ֲ�����
//	printf("%d\n", a);
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
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//
//int a = 10;
//
//int main()
//{
//	//{}-�����
//	/*{
//	int a = 10;
//	printf("a = %d\n", a);
//	}*/
//
//	system("pause");
//	return 0;
//}

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}


//��������
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	return 0;
//}
//
//int main()
//{
//	//���泣��
//	//3;
//	//3.14;
//	//'a';
//	//"abcdef";
//	//const���εĳ�����
//	//const int num = 10;
//	//num = 20;
//	//printf("num = %d\n", num);//
//	//const int n = 10;
//	//int arr[n] = {0};//err
//
//	system("pause");
//	return 0;
//}

//#define����ı�ʶ������
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	MAX = 200;
//	printf("%d\n", a);
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
//int main()
//{
//	//enum Sex s = FEMALE;//
//
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	system("pause");
//	return 0;
//}
#include <string.h>

int main()
{
	//ASCII����
	//ASCII��ֵ
	//ASCII���
	//@#$%!erabc
	//A-65
	//a-97
	//'\0'-0
	//printf("hehe\n");
	//char arr1[] = "bit";
	//char arr2[] = {'b', 'i', 't','\0'};
	//printf("%s\n", "bit");//bit
	//printf("%s\n", arr1); //bit
	//printf("%s\n", arr2); //bit
	//printf("abc\n");
	//printf("%s\n", "c:\\test\\test.c");
	//printf("%c\n", '\'');
	//printf("%s\n", "\"");
	//printf("\a\a\a\a\a\a\a");
	//printf("%d\n", strlen("abc"));//string length
	printf("%d\n", strlen("c:\test\328\test.c"));
	system("pause");
	return 0;
}