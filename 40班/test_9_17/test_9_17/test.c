#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//C������static������
//static���α���
	//1.�ֲ�����
	//�ı��˾ֲ���������������
	//2.ȫ�ֱ���
	//�޸���ȫ�ֱ�����������

//static���κ���
	//�ı��˺�����������

//extern ���������ⲿ���ŵ�

//extern int g_val;
extern int Add(int, int);

int main()
{
	//printf("%d\n", g_val);//2019
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);//30
	return 0;
}
//
//void test()
//{
//	static int i = 1;
//	i++;
//	printf("%d ", i);
//}
//
//int main()
//{
//	int i = 0;
//	//2 3 4 5 6
//	for(i=0; i<5; i++)
//	{
//		test();
//	}
//	return 0;
//}

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num1 = 2018;
//	u_int num2 = 2019;
//	return 0;
//}


// 
// int main()
// {
// 	register int a = 10;//����
// 
// 	return 0;
// }
// //int main()
//{
//	{
//		int a = 10;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	//arr[4];
//	//a+b;
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	if(a>b)
//		max = a;
//	else
//		max = b;
//
//	max = a>b?a:b;//
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = --a;
//	//printf("a = %d b =%d\n", a, b);
//	//int a = 0;
//	//a = (int)3.14;
//	//printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int num = -1;
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//
//	printf("%d\n", ~num);//1
//	//int num = 15;
//	//num = num+2;
//	//num += 2;
//	//printf("%d\n", num);
//	//00000000000000000000000000001111
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	//num = num>>1;
//	//printf("%d\n", num);
//	return 0;
//}
//
//
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	print_arr(arr, 10);
//	for(i=0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	print_arr(arr, 10);
//	return 0;
//}

//�ӷ�����
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
//	scanf("%d%d", &num1, &num2);
//
//	sum = Add(num1, num2);//�ӷ�
//
//	printf("sum = %d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	int line = 0;
//	//while
//	while(line<=30000)
//	{
//		line++;
//	}
//	if(line>30000)
//	{
//		printf("�ҹ���\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int coding = 0;
//	printf("��ѡ���ô�����(1/0)");
//	scanf("%d", &coding);
//	if(coding == 1)
//	{
//		printf("��offer\n");
//		printf("��ϱ��\n");
//	}
//	else
//	{
//		printf("������\n");
//		//
//	}
//	return 0;
//}

//int main()
//{
//	//����һ�����α���
//	//C++����ע��
//
//	/*int a = 10;*/
//	/*C���Ե�ע�ͷ��*/
//
//	return 0;
//}


//
//int main()
//{
//	//�Գ���
//	int i = 0;//
//	int count = 0;
//
//	for(i=101; i<=200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		//...
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//

//
//int main()
//{
//	//1*1=1
//	//2*1=2 2*2=4
//	//3*1=3 3*2=6 3*3=9
//	//.....
//	//i*j=x i*2=x 
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//		}
//		//�ж�year�Ƿ�Ϊ����
//		/*if(year%4==0)
//		{
//			if(year%100!=0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if(year%400 == 0)
//		{
//			printf("%d ", year);
//		}*/
//	}
//
//	return 0;
//}
//��Ԫ����


