#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//printf("%d ", i);
//		//���ж�i�Ƿ�Ϊ����
//		//i    2-> i-1
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		//1,2
//		if(i==j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//printf("%d ", i);
//		//���ж�i�Ƿ�Ϊ����
//		//i    2-> i-1
//		int flag = 1;//������
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		//1,2
//		if(flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		int flag = 1;//������
//		int j = 0;
//		for(j=2; j<=i/2; j++)
//		{
//			if(i%j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		//1,2
//		if(flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		int flag = 1;//������
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		//1,2
//		if(flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//
//int main()
//{
//	int i=0;
//	for(i=1; i<=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//			printf("%d*%d=%2d ", i, j, i*j);
//
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int year=0;
//	int count = 0;
//
//	for(year=1000; year<=2000; year++)
//	{
//		//printf("%d ", year);
//		//�ж�year����
//		//1. �ܱ�4�������Ҳ��ܱ�100 ����
//		//2. ��400����
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if(year%4==0)
//		{
//		if(year%100 != 0)
//		{
//		printf("%d ", year);
//		count++;
//		}
//		}
//		if(year % 400==0)
//		{
//		printf("%d ", year);
//		count++;
//		}*/
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}



