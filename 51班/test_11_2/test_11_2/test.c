#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>


//(-1)^s * 2 * 2^-127


//
//int main()
//{
//
//	float f = -5.5;
//	//0.1
//	//1.0*2^-1
//
//	//-5.5
//	//1 10000001 011 00000000000000000000
//	//C0B00000
//	//-1^1 * 1.011*2^2
//	//
//
//	//-101.1
//	//(-1)^1 * 1.011 * 2^2
//	//(-1)^S * M*2^E
//	//
//	//
//	return 0;
//}
//
//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001
//	//(-1)^0 * 2*-126 * 0.00000000000000000001001;
//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//9.0
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//01000001000100000000000000000000
//	//
//	printf("num的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//9.0
//	return 0;
//}
//
//
//int main()
//{
//
//	//float f = 3.5;
//	//000000000000000000000000000011.1
//	//
//	//
//	return 0;
//}


//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for(i = 0;i<=255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//
//int main()
//{
//	char a = 127;
//	char b = a+1;
//	//0000000000000000000000010000000
//	//1111111111111111111111110000000
//	//1111111111111111111111101111111
//	//1000000000000000000000010000000
//	//-128
//	printf("%d\n", b);
//	return 0;
//}
////
//int main()
//{
//	char a[1000];
//	int i;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	//-1 -2 .. -128 127 126 ... 4 3 2 1 0 -1 -2 -3 ...-128 127 ..
//	//
//	printf("%d",strlen(a));
//	return 0;
//}


//
//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		Sleep(100);
//		printf("%u\n",i);
//	}
//	//
//	//9 8 7 6 5 4 3 2 1 0
//	//
//	return 0;
//}

// 
// int main()
// {
// 	int i= -20;
// 	//10000000000000000000000000010100
// 	//11111111111111111111111111101011
// 	//11111111111111111111111111101100
// 	//00000000000000000000000000001010
// 	//11111111111111111111111111110110
// 	//11111111111111111111111111110101
// 	//10000000000000000000000000001010
// 	//-10
// 	unsigned int j = 10;
// 	//00000000000000000000000000001010
// 	//
// 
// 	printf("%d\n", i+j);
// 
// 	return 0;
// }
// 
// int main()
// {
// 	char a = 128;
// 	//10000000
// 	unsigned char b = 128;
// 	//10000000
// 
// 	printf("%u\n", a);//
// 	printf("%u\n", b);//128
// 
// 
// 	//00000000000000000000000010000000
// 	//11111111111111111111111110000000
// 	//11111111111111111111111101111111
// 	//10000000000000000000000010000000
// 	//-128
// 
// 	//printf("%d\n",a);
// 	return 0;
// }
// 

//
//int  main()
//{
//	char a = -1;
//	//11111111-补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//
//	signed char b = -1;
//	//11111111-补码
//	unsigned char c = -1;
//	//11111111-补码
//	//00000000000000000000000011111111
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	//-1 -1 1
//	return 0;
//}

//
//signed char ch;
//00000000
//....
//01111111
//10000000
//10000001
//10000010
//
//11111110
//11111111

// struct Stu
// {
// 	char c;
// 	int i;
// };

//联合--共用体
//
//int check_sys()
//{
//	union Un
//	{
//		char c;//1
//		int i;//4
//	}un;
//	un.i = 1;
//	return un.c;
//}
//
//int main()
//{
//	union Un un = {0};
//	//printf("%d\n", sizeof(un));//
//	printf("%p\n", &(un.c));//
//	printf("%p\n", &(un.i));//
//
//	return 0;
//}

// 
// int check_sys()
// {
// 	int a = 1;
// 	//
// 	return *(char*)&a;
// // 	if(*(char*)&a == 1)
// // 		return 1;//小端
// // 	else
// // 		return 0;//大端
// }
// 
// int main()
// {
// 	//int a = 0x11223344;
// 	int ret = check_sys();
// 	if(ret == 1)
// 	{
// 		printf("小端\n");
// 	}
// 	else
// 	{
// 		printf("大端\n");
// 	}
// 	//int a = 20;
// 
// 	//1-1
// 	//1+(-1)
// 	//
// 	//00000000000000000000000000000001
// 	//11111111111111111111111111111111
// 	//00000000000000000000000000000000
// 	//
// 	
// 	//10000000000000000000000000000001
// 	//11111111111111111111111111111110
// 	//11111111111111111111111111111111
// 	//
// 
// 	//10000000000000000000000000001010-原码
// 	//11111111111111111111111111110101-反码
// 	//11111111111111111111111111110110-补码
// 	//FFFFFFF6
// 	//
// 	return 0;
// }
// //
//int main()
//{
//	int *p1;
//	void *p2 = p1;
//
//	//void* p2;
//	return 0;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//void test2(void)
//{
//	printf("test2\n");
//}
//
//int main()
//{
//	test2(2);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int arr[5] = {0};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(arr));//20
//	printf("%d\n", sizeof(int [5]));//40
//
//
//	return 0;
//}
//
//int main()
//{
//	//unsigned short a;//2-16
//	unsigned char c;
//	//
//	//00000000-0
//	//....
//	//01111111-127
//	//10000000-128
//	//....
//	//11111111-255
//	//
//	//[1][][][][][][][]
//	signed char c1;//有符号的
//	unsigned char c2;//无符号的
//
//	return 0;
//}