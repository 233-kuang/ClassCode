#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//static
//���α���
	//���ξֲ�����
	//�ı��˾ֲ���������������
	//����ȫ�ֱ���
	//�ı���������
//���κ���
	//�ı���������
	
//extern �����������ⲿ���ŵ�
extern int g_val;
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
//	//���ξֲ�����
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
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
// typedef unsigned int  uint;
// 
// int main()
// {
// 	unsigned int a = 10;
// 	uint a = 10;
// 
// 	//register int a = 10;
// 	//�����������a�浽�Ĵ�����
// 
// 	//int arr[10];
// 	//arr[4] = 5;
// 	//int a = 10;
// 	//int b = 20;
// 	//int max = 0;
// 
// 	//if(a>b)
// 	//	max = a;
// 	//else
// 	//	max = b;
// 
// 	//a>b ? max=a: max=b;
// 	//max = a>b?a:b;//?
// 	return 0;
// }
// 
// int main()
// {
// 	int a = (int)3.14;
// 	printf("%d\n", a);
// 	return 0;
// }

//int main()
//{
//	int a = 10;
//	int b = a--;
//	
//	printf("a = %d b = %d\n", a, b);
//	//11 11
//	return 0;
//}

//
//int main()
//{
//	//char ch[20] = {0};
//	//float f[30];
//	int num = 0;
//	//ԭ��
//	//����
//	//����
//
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111--����
//	//11111111111111111111111111111110--����
//	//10000000000000000000000000000001--ԭ��
//	//-1
//
//	printf("%d\n", ~num);//
//
//	//00000000000000000000000000001111
//	//
//	//num = num>>2;
//	//num>>=2;
//	//num = num+2;
//	//num += 2;
//	//printf("%d\n", num);
//
//	return 0;
//}


//void print_arr(int arr[], int sz)
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
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
//
//	printf("����������������:>");
//	scanf("%d%d", &num1, &num2);
//
//	//sum = num1+num2;//
//	sum = Add(num1, num2);
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//30000
//
//int main()
//{
//	int line = 0;
//	printf("�������!\n");
//	while(line<=30000)
//	{
//		printf("д����\n");
//		line++;
//	}
//	if(line>30000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int coding = 0;
//	printf("������أ�\n");
//	printf("����ô�����(1/0)>:");
//	scanf("%d", &coding);
//	if(coding == 1)
//	{
//		printf("��offer\n");
//		printf("Ů����\n");
//	}
//	else
//		printf("������\n");
//	return 0;
//}


//int main()
//{
//	/*
//	--C���Ե�ע�ͷ��
//	���⺯��printf����"hehe"��ӡ�ڱ�׼�����
//	printf("hehe\n");
//	*/
//	//C++��ע�ͷ��
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}




//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if(year%4==0)
//		{
//			if(year%100 != 0)
//			{
//				count++;
//				printf("%d ", year);
//			}
//		}
//		if(year%400 == 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
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
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//�����ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//�Գ���

//����������n�־��硷
//int main()
//{
//	//
//	int i = 0;
//	int count = 0;//������
//
//	for(i=101; i<=200; i+=2)
//	{
//		//printf("%d ", i);
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		//...
//		if(j>sqrt(i))
//		{
//			count = count+1;
//			printf("%d ",i);
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//
//int main()
//{
//	//
//	int i = 0;
//	int count = 0;//������
//
//	for(i=101; i<=200; i+=2)
//	{
//		//printf("%d ", i);
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<=i-1; j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		//...
//		if(j>i-1)
//		{
//			count = count+1;
//			printf("%d ",i);
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	return 0;
//}