#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

//1. ��ӡ100~200֮�������

//
//sqrt
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//��ӡһ������
//		//printf("%d ", i);
//		//��ӡ����
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j==i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	//��ͣ
//	system("pause");
//	return 0;
//}

//
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i++)
//	{
//		//��ӡһ������
//		//printf("%d ", i);
//		//��ӡ����
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	//��ͣ
//	system("pause");
//	return 0;
//}

//
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		//��ӡһ������
//		//printf("%d ", i);
//		//��ӡ����
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	//��ͣ
//	system("pause");
//	return 0;
//}
//
//
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i++)
//	{
//		//��ӡһ������
//		//printf("%d ", i);
//		//��ӡ����
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	//��ͣ
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int i = 0; 
//	for(i=1; i<=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			//��ӡһ��
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//	}
//	system("pause");
//	return 0;
//}
//


//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if(year%4==0)
//		{
//			if(year%100!=0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if(year%400==0)
//		{
//			printf("%d ", year);	
//		}
//	}
//	system("pause");
//	return 0;
//}


//������
//int main()
//{
//	{
//		int a = 100;
//	}
//	printf("%d\n", a);
//	
//	system("pause");
//	return 0;
//}


//����
//extern int a; 
//
//void Test()
//{
//	printf("%d\n", a);
//}
//
//int main()
//{
//	{
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	Test();
//	system("pause");
//	return 0;
//}

//
//��������
//
//
//int main()
//{
//	//
//	{
//		int a = 20;
//		printf("a = %d\n", a);
//	}
//	//a
//	return 0;
//}

//int main()
//{
//	//const int num = 10;
//	//num = 20;
//	const int n = 10;
//	int arr[n] = {0};
//
//	return 0;
//}
//#define ����ı�ʶ������
//
//#define MAX 100
//
//int main()
//{
//	int arr[MAX] = {0};
//	//MAX = 200;
//	printf("%d\n", MAX);
//	system("pause");
//	return 0;
//}
//ö��
//
//ö�ٹؼ���
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
//	enum Sex s = MALE;
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	system("pause");
//	return 0;
//}
//����+���ԣ�һ��+����+����/hr�棩

//���ϱ���
//���±���


//%c -�ַ�
//%d -ʮ���Ƶ�����
//%d -ʮ������
//%f -float
//%lf -double
//%s -�ַ���

//ASCII ����
//
#include <string.h>
//
//int main()
//{
//	//�ַ���
//	//"hello bit";
//	char arr1[] = "abcdef";//\0-���ַ����Ľ�����־
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	
//	printf("%d\n", len1);//6
//	printf("%d\n", len2);//
//
//	//printf("%s\n", arr1);//abcdef
//	//printf("%s\n", arr2);//abcdef
//
//	system("pause");
//	return 0;
//}

//
//ת���ַ�
//

//c:\test\55\test.c
////
//int main()
//{
//	printf("c:\test\55\test.c\n");
//	printf("abcdef\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//12 17 13 
//	printf("%d\n", strlen("c:\test\55\test.c"));
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "\"");
//
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	printf("c:\\test\\55\\test.c\n");
//	printf("abcdef\n");
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	printf("\a\a\a\a\a\a\a");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\130');
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n", '\x061');
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	system("pause");
//	return 0;
//}
//


int  main()
{
	//���ﴴ��һ�����ͱ���������ʼ��10
	/*
	int a = 10;
	int b = 20;
	*/
	return 0;
}
