#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//�Գ���
//	for(i=101; i<=200; i+=2)
//	{
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
//			printf("%d ", i);//����
//			count++;
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//<��������n�־���>
//

//
// 1*1=1
// 2*1=2 2*2=4
// 3*1=3 3*2=6 3*3=9
// ...
//
//int main()
//{
//	//
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			//��ӡһ��
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int year=0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//�ж�����
//
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if(year%4==0)
//		{
//			if(year%100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if(year%400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	//printf("%d\n", strlen("abc"));
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//	//printf("%c\n", '\x32');
//	//
//	//070
//	//
//	//A a # $ %
//	//65 97 ...
//	//
//	//ASCII����
//	//ASCII���
//	//ASCII��ֵ
//	//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	//C++��ע�ͷ��
//	//����һ�����ͱ���
//	//int a = 10;
//
//	/*
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	*/
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("�������!\n");
//	printf("��Ҫ�ô�����(1/0)");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while(line<=20000)
//	{
//		printf("�ô���\n");
//		line++;
//	}
//	if(line>20000)
//	{
//		printf("��offer\n");
//	}
//	system("pause");
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x+y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//// 	int a = 1;
//// 	int b = 2;
//// 	int c = 3;
//	int arr[12] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//�������Ԫ�ظ���
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	while(i<sz)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);
//	//char ch[20] = {'a', 'b', 'c'};//char ch[20] = "abc";
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	//double a = 5/2.0;
//	//printf("%lf\n", a);
//	//printf("%d\n", 7%2);
//	//>> <<
//	//<< ���Ʋ�����-������λ
//	int a = 15;
//	int b = a<<1;
//	//
//	//ԭ��-����-����
//	//
//	//00000000000000000000000000001111
//	//
//	printf("a = %d\n", a);//15
//	printf("b = %d\n", b);//30
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	int b = a<<1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	//ԭ��
//	//10000000000000000000000000000001
//	//����
//	//11111111111111111111111111111110
//	//����
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010
//	//-2
//	system("pause");
//	return 0;
//}

//>>
//��������
//�߼�����
//
// int main()
// {
// 	int a = -1;
// 	int b = a>>1;
// 	//11111111111111111111111111111111
// 	//11111111111111111111111111111111
// 
// 	//00000000000000000000000000001010
// 	//00000000000000000000000000000101
// 	//
// 	printf("%d\n", b);
// 	system("pause");
// 	return 0;
// }

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011
//	//001
//	//001-1
//	int c = a&1;
//
//	//int c = a&b;//���������ƣ�λ��
//	//int c = a|b;//��λ��
//	//int c = a^b;//��λ���-��ͬΪ0������Ϊ1
//	//011
//	//101
//	//110
//	//
//	printf("%d\n", c);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a = 20;//��ֵ
//	a = a+5;
//	a += 5;
//
//	a = a>>1;
//	a >>= 1;//���ϸ�ֵ��
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", !0);
//	int a = 10;
//	int arr[5] = {0};
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	printf("%d\n", sizeof(arr));//
//	printf("%d\n", sizeof(int [5]));
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//00000000000000000000000000011010
//	//11111111111111111111111111101111
//	//00000000000000000000000000010000
//	//
//	//int a = 0;
//	//printf("%d\n", ~a);
//	//~ ��λȡ��
//	//
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//// 	int a = 10;
//// 	//int b = a++;//����++����ʹ�ã���++
//// 	//int b = ++a;  //����++����++����ʹ��
//// 	int b = --a;
//// 	printf("a = %d\n", a);//
//// 	printf("b = %d\n", b);//
//
//	int a = 1;
//	int c = (++a)+(++a)+(++a);
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//	//int a = int(3.14);//err
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 0;
//	//int b = 20;
//	//int c = a&&b;
//	//int c = a||b;
//	//printf("%d\n", c);
//
//	/*int a = 10;
//	int b = 20;
//	int max = 0;
//	if(a>b)
//		max = a;
//	else
//		max = b;
//
//	max = (a>b ? a : b);*/
//
//	int a = 10;
//	int b = 2;
//	int c = -5;
//	int d = (a=b+4, b=a-10, c=b+3);
//	printf("%d\n", d);
//	system("pause");
//	return 0;
//}
//
//void test()
//{
//	printd("hehe\n");
//}
//
//int main()
//{
//	//[]-�±����ò�����
//	//()-�������ò�����
//	//test();
//	//Add(1, 2);
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//arr[5];//a+b;
//	return 0;
//}
int main()
{
	//{
		//auto int a = 0;
	//}
	register int a = 10;

	return 0;
}

