#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("***************************\n");
	printf("****       1. play     ****\n");
	printf("****       0. exit     ****\n");
	printf("***************************\n");
}

//
//RAND_MAX
//1970.1.1  0:0:0
//

// void game()
// {
// 	//1. ���������
// 	int guess = 0;
// 	int ret = rand()%100+1;
// 
// 	//2. ������
// 	while(1)
// 	{
// 		printf("�������:>");
// 		scanf("%d", &guess);
// 		if(guess > ret)
// 		{
// 			printf("��´���\n");
// 		}
// 		else if(guess < ret)
// 		{
// 			printf("��С��\n");
// 		}
// 		else
// 		{
// 			printf("��ϲ�㣬�¶���\n");
// 			break;
// 		}
// 	}
// }
// 
// int main()
// {
// 	int input = 0;
// 	srand((unsigned int)time(NULL));
// 
// 	do 
// 	{
// 		menu();
// 		printf("��ѡ��:>");
// 		scanf("%d", &input);
// 		switch(input)
// 		{
// 		case 1:
// 			game();
// 			break;
// 		case 0:
// 			printf("�˳���Ϸ\n");
// 			break;
// 		default:
// 			printf("ѡ�����\n");
// 			break;
// 		}
// 	} while (input);
// 	return 0;
// }
// 


// int main()
// {
// again:
// 	printf("hehe\n");
// 	goto again;
// 	return 0;
// }

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
// 
// int main()
// {
// 	char input[20] = {0};
// 	system("shutdown -s -t 60");
// 	while(1)
// 	{
// 		printf("��ע�⣬��ĵ�����1���Ӻ�ػ���������룺��������ȡ��\n");
// 		scanf("%s", input);
// 		if(strcmp(input, "������") == 0)
// 		{
// 			system("shutdown -a");
// 			break;
// 		}
// 	}
// 	return 0;
// }
// 
// void test()
// {
// flag:
// 	printf("test\n");
// }
// 
// int main()
// {
// 	printf("hehe\n");
// 	goto flag;
// 	return 0;
// }

//f(x, y) = x+y;

//NULL
// 
// int main()
// {
// // 	int a = 0;
// // 	int* p = &a;
// // 	p = NULL;
// // 	//
// 	//Null  NUL '\0'
// 	//
// 	return 0;
// }

//size_t 

// 
//  int main()
// {
// 	char arr1[20] = {'a', 'b', 'c','c','c','c'};//20
// 	//char arr2[] = "hello bit";	
// 	char arr2[] = {'b', 'i', 't', '\0'};//3
// 	//char arr2[] = "bit";
// 	strcpy(arr1, arr2);
// 	printf("%s\n", arr1);
// 	return 0;
// }
// 
// int main()
// {
// 	char arr[] = "hello bit";
// 	printf("%s\n", arr);
// 	memset(arr, '*', 5);
// 	printf("%s\n", arr);
// 	return 0;
// }
// 
// int get_max(int n1, int n2)
// {
// 	return (n1>n2?n1:n2);
// }
// 
// int main()
// {
// 	int x = 10;
// 	int y = 20;
// 
// 	//int max = x>y? x:y;
// 	int max = get_max(x, y);
// 	printf("%d\n", max);
// 	return 0;
// }
//
//�β�
//��ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���ı�ʵ��
//
void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* p1, int* p2)
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
// 
//  int get_max(int n1, int n2)
//  {
//  	return (n1>n2?n1:n2);
//  }
//
// int main()
// {
// 	int a = 10;
// 	int b = 20;
////	get_max(a, 2+3);
// 	printf("a = %d b = %d\n", a, b);
// 	//ʵ��
//	//��������
//	//��ַ����
// 	Swap2(&a, &b);
//	//��ֵ����
//	Swap1(a, b);
//
// 	printf("a = %d b = %d\n", a, b);
// 	return 0;
// }

// 
// int main()
// {
// 	int a = 10;
// 	int* p = &a;
// 	*p = 20;
// 
// 	return 0;
// }

#include <math.h>
// 
// int is_prime(int n)//9
// {
// 	//�ж�n�Ƿ�Ϊ����
// 	int i = 0;
// 	for(i=2; i<=sqrt(n); i++)
// 	{
// 		if(n%i == 0)
// 			return 0;
// 	}
// 	return 1;
// }
// int main()
// {
// 	int i = 0;
// 	for(i=100; i<=200; i++)
// 	{
// 		if(is_prime(i) == 1)
// 		{
// 			printf("%d ", i);
// 		}
// 	}
// 	return 0;
// }

// 
// int is_leap_year(int y)
// {
// 	return (y%4==0 && y%100!=0) || (y%400==0);
// 	//if((y%4==0 && y%100!=0) || (y%400==0))
// 	//	return 1;
// 	//else
// 	//	return 0;
// }
// 
// int main()
// {
// 	int year = 0;
// 	for(year=1000; year<=2000; year++)
// 	{
// 		if(is_leap_year(year) == 1)
// 		{
// 			printf("%d ", year);
// 		}
// 	}
// 	return 0;
// }
//
//


