#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//static
//1. ���α���
	//a>���ξֲ�����
	//�ı��˾ֲ���������������
	//b>����ȫ�ֱ���
	//�ı���ȫ�ֱ�����������
//2. ���κ���
	//�������ֻ���ں������ڵ�Դ�ļ���ʹ�ã�����Դ�ļ��޷�ʹ��


//externa--�����ⲿ����

//�����ⲿȫ�ֱ���
extern int g_val;
//�����ⲿ����
extern int Add(int x, int y);


int main()
{
	//printf("%d\n", g_val);
	int sum = Add(2, 3);
	printf("%d\n", sum);
	return 0;
}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<5; i++)
//	{
//		test();
//	}
//	return 0;
//}


//
//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int num1 = 10;
//	uint num2 = 10;
//	//register int num = 10;//�Ĵ���
//	//�����������num���ڼĴ������
//
//	//int arr[10] = {0};
//	//arr[4] = 5;
//	//*(arr+4) 
//	//int num = 0;
//	//scanf("%d", &num);
//	//printf("%d\n", num);
//	return 0;
//}
// 
// int main()
// {
// 	int arr[10];
// 	//arr[3];
// 	int a = 10;
// 	int b = 20;
// 	int max = 0;
// 	if(a>b)
// 		max = a;
// 	else
// 		max = b;
// 
// 	//a>b ? max=a : max=b;
// 	max = a>b ? a : b;
// 
// 	return 0;
// }
// 
// int main()
// {
// 	int a = (int)3.14;
// 	printf("a = %d\n", a);
// 	return 0;
// }


//
//int main()
//{
//	int a = 10;//
//	int b = a--;//
//	printf("a = %d b = %d\n", a, b);
//	//11 10
//
//	//int num = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111--����
//	//11111111111111111111111111111110--
//	//10000000000000000000000000000001--ԭ��
//	//printf("%d\n", ~num);//
//	//1 
//	//num = num+1;//1
//	//num += 1;   //2
//	//00000000000000000000000000001111
//	//num = num>>1;
//	//num>>=1;
//	//printf("%d\n", !num);//
//	return 0;
//}

//void print_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arr[10] = {0};
//	int i = 0;
//
//	print_arr(arr, 10);
//	for(i=0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	print_arr(arr, 10);
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
//	int sum = 0;
//	printf("����������������:>");
//	scanf("%d%d", &num1, &num2);
//
//	//sum = num1+num2;
//	sum = Add(num1, num2);
//
//	printf("sum = %d\n", sum);
//	return 0;
//}



//
//int main()
//{
//	//30000
//	int line = 0;
//	printf("�������\n");
//
//	while(line<=30000)
//	{
//		printf("д����\n");
//		line++;
//	}
//	if(line>30000)
//		printf("�ҹ���\n");
//
//	return 0;
//}



//
//int main()
//{
//	int coding = 0;
//	printf("�������\n");
//	printf("���д������(1/0)");
//	scanf("%d", &coding);
//	if(coding == 1)
//	{
//		printf("��offer\n");
//		printf("��Ů����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//�ж�����
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if(year%4==0)
//		{
//			if(year%100 != 0)
//			{
//				count++;
//				printf("%d ", year);
//			}
//		}
//		if(year%400==0)
//		{
//			count++;
//			printf("%d ", year);
//		}*/
//	}
//	//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//int main()
//{
//	//1*1=1
//	//2*1=2 2*2=4
//	//3*1=3 3*2=6 3*3=9
//	//....
//	//9*9
//	//
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		//����
//		printf("\n");
//	}
//	return 0;
//}


//
//�Գ���
//
//<��������n�־���>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for(i=100; i<=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//				break;	
//		}
//		//2...
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for(i=101; i<=200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//				break;	
//		}
//		//2...
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for(i=100; i<=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<i/2; j++)
//		{
//			if(i%j == 0)
//				break;	
//		}
//		//2...
//		if(j>=i/2)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	return 0;
//}