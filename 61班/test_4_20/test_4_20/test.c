#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>//��ѧ�⺯��
#include <string.h>


int main()
{
	int sum = 0;
	//100 
	//1-99

	return 0;
}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int num1 = 10;
//	uint num2 = 10;
//	Node n;
//	return 0;
//}
//
//int main()
//{
//	//register int a = 10;//����
//
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;//�Զ�����
// 	return 0;
// }
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	//int arr[10] = {0};
//	//arr[6] = 6;//�±����ò�����
//	test();	//�������ò�����
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 10;
//	int d = 20;
//	d = (a=d-5, b=a+3, c=3+d);
//
//	printf("%d\n", d);//0 20 
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	int max = 0;
//	max = (a>b) ? (a) : (b);
//	/*
//	if(a>b)
//	max = a;
//	else
//	max = b;*/
//
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 5;
//	//int c = a&&b;//�߼���
//	int c = a||b;//�߼���
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

// 
// int main()
// {
// 	int a = (int)3.14;
// 	//int a = int(3.14);//err
// 	return 0;
// }

//
//int main()
//{
//	int i = 1;
//	int ret = (++i)+(++i)+(++i);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}

//
//int  main()
//{
//	int a = 10;
//	//int b = ++a;//ǰ��++�� ��++����ʹ��
//	int b = a--;//
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//10
//	//int b = a++;//����++����ʹ�ã���++
//	//printf("a = %d\n", a);//11
//	//printf("b = %d\n", b);//10
//	//printf("%d\n", a++);
//	//printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}


//
//
//int  main()
//{
//	int a = 0;
//	//
//	printf("%d\n", ~a);//-1 -127 
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	//printf("%d\n", !0);
//	int flag = 0;
//	if(!flag)
//	{
//		//
//	}
//	system("pause");
//	return 0;
//}
// int  main()
// {
// 	int a = 10;
// 	a = a+1;
// 	a += 1;//���ϸ�ֵ��
// 	
// 	return 0;
// }
// 
// int main()
// {
// 	int a = 3;
// 	int b = 5;
// 	//011
// 	
// 	//101
// 	//110
// 	//int c = a&b;//���������ƣ�λ��
// 	//int c = a|b;//���������ƣ�λ��
// 	int c = a^b;//���������ƣ�λ���
// 	printf("%d\n", c);
// 	system("pause");
// 	return 0;
// }
// 



//
//int main()
//{
//	int a = -1;
//	//11111111111111111111111111111111
//	//
//	//00000000000000000000000000001010
//	int b = a>>1;
//	//��������
//	//�ұ߶�������߲�ԭ����λ
//	//�߼�����
//	//�ұ߶�������߲�0
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//
//	//ԭ��
//	//����
//	//����
//	//
//	//1000 0000 0000 0000 0000 0000 0000 0001-ԭ��
//	//1111 1111 1111 1111 1111 1111 1111 1110-����
//	//1111 1111 1111 1111 1111 1111 1111 1111-����
//	//ff ff ff ff
//
//	//0000 0000 0000 0000 0000 0000 0000 1010-ԭ��
//	//0000000a
//	//
//	int a = -1;
//	
//	int b = a<<1;
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010
//	//-2
//	//
//	printf("%d\n", b);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 7%2;
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//int a = 7/2;
//	double a = 7.0/2;
//	printf("%lf\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//����
//	int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		scanf("%d", &arr[i]);
//// 	}
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//printf("%d\n", arr[4]);//5
//	system("pause");
//	//char arr2[15];
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//
//	sum = Add(num1, num2);
//	
//	printf("sum = %d\n", sum);
//	
//	sum = Add(2, 3);
//
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int line = 0;
//	printf("�������!\n");
//
//	while(line<20000)
//	{
//		printf("�ô���\n");
//		line++;
//	}
//	if(line == 20000)
//	{
//		printf("��offer\n");
//	}
//	system("pause");
//	return 0;
//}

//
//int  main()
//{
//	int input = 0;
//	printf("������أ���Ҫ�ú�ѧϰ��");
//	scanf("%d", &input);
//	if(1 == input)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	//switch
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	/*
//	����һ�����ͱ���
//	�Ǻ�
//	*/
//	//����
//	int a = 10;
//	return 0;
//}

//
//int main()
//{
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//	//@#!E
//	//A-65
//	//a-97
//	//ASCII ����
//	//ASCII ��ֵ
//	//printf("%c\n", '\101');
//	printf("%c\n", '\x040');
//	system("pause");
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
//		////�ж�year�Ƿ�Ϊ����
//		//if(year%4==0)
//		//{
//		//	if(year%100 != 0)
//		//	{
//		//		printf("%d ", year);
//		//	}
//		//}
//		//if(year%400 == 0)
//		//{
//		//	printf("%d ", year);
//		//}
//	}
//	system("pause");
//	return 0;
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//��������n�־���
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for(i=101; i<=200; i+=2)
//	{
//		//printf("%d ", i);
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		//sqrt(i)��i��ƽ��
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j==0)
//				break;
//		}
//		if(j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);//scanf_s
//	printf("age = %d\n", age);
//	system("pause");
//	return 0;
//}
