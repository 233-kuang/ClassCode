#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include "add.h"
//
//int main()
//{
//	//printf("hehe\n");
//	printf("%d\n", Add(2, 3));
//	system("pause");
//	return 0;
//}
//����
//��������-�Զ�������
//int main()
//{
//	//char arr1[5];
//	//char arr2[6];
//// 	int a = 10;
//// 	printf("%d\n", sizeof(a));
//// 	printf("%d\n", sizeof(int));
//
//	int arr3[10] = {0};
//	printf("%d\n", sizeof(arr3));//40
//	printf("%d\n", sizeof(char [5]));//
//
//	system("pause");
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	test(100);
//	system("pause");
//	return 0;
//}
//
//
//void* p;
//
//
//int main()
//{
//	unsigned int a = -10;
//	int b = -10;
//	printf("%u\n", a);
//
//	//int a = -10;
//	//ԭ��
//	//10000000000000000000000000001010
//	//����
//	//11111111111111111111111111110101
//	//����
//	//11111111111111111111111111110110
//	//FFFFFFF6
//
//	//int a = 10;
//	//ԭ��
//	//[32]
//	//[1][31]
//	//����λ+��ֵλ
//	//00000000000000000000000000001010
//	//
//	//����
//	//00000000000000000000000000001010
//	//����
//	//00000000000000000000000000001010
//	//00 00 00 0a
//	//01 00 00 00
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 1-1;
//
//	//
//	//1+(-1)
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	//
//
//	//00000000000000000000000000000001
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010
//	//-2
//	//
//
//	return 0;
//}
//
//int check_sys()
//{
//	int a = 1;
//	char* p = (char *)&a;
//	if(*p == 1)
//		return 1;//С�˷���1
//	else
//		return 0;//��˷���0
//}


//int check_sys()
//{
//	int a = 1;
//	char* p = (char *)&a;
//	//С�˷���1����˷���0
//	return *p;
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char *)&a;
//}
//
//
//union Un
//{
//	char c;
//	int i;
//};
//
//int check_sys()
//{
//	union Un u;
//	u.i = 1;
//	//��˷���0���¶˷���1
//	return u.c;
//}
//int main()
//{
//	//int a = 0x11223344;
//	if(1 == check_sys())
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	system("pause");
//	return 0;
//}
//
//������==������
//
//
//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	system("pause");
//	return 0;
//}

//
//union Un
//{
//	char c[5];//5
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	system("pause");
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	char a= -1;
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111
//	//11111111
//	//11111111 11111111 11111111 11111111
//	//
//
//	signed char b=-1;
//	//11111111
//	unsigned char c=-1;
//	//00000000000000000000000011111111
//
//	printf("a=%d,b=%d,c=%d",a,b,c);
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000
//	//
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//11111111111111111111111110000000
//	//
//	printf("%u\n",a);
//	system("pause");
//	return 0;
//}
//
//128
//
//
//int main()
//{
//	int i= -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i+j); 
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	//-10
//	//
//	system("pause");
//	return 0;
//}
#include <windows.h>
//
//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		printf("%u\n",i);
//		Sleep(100);
//	}
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char a[1000];
//	int i;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	//-1 -2 -3 ...
//	//
//	printf("%d",strlen(a));
//
//	system("pause");
//	return 0;
//}

#include <stdio.h>
//
//unsigned char i = 0;
//int main()
//{
//	for(i = 0;i<=255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}




