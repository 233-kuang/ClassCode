#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
//void menu()
//{
//	printf("**************************\n");
//	printf("*****     1. play    *****\n");
//	printf("*****     0. exit    *****\n");
//	printf("**************************\n");
//}
//
////RAND_MAX
//
//void game()
//{
//	//1. ���������
//	//ʱ���
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("ret = %d\n", ret);
//	//2. ������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
//


//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if(strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if(strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}



//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	/*a = a+b;
//	b = a-b;
//	a = a-b;*/
//	//���������ƣ�λ���
//	//01010-b
//	//10100-a
//	//11110
//	a = a^b;//1
//	b = a^b;//2
//	a = a^b;//3
//
//	printf("a = %d b = %d\n", a, b);
//
//// 	int c = 0;//��ƿ
//// 	printf("a = %d b = %d\n",a, b);
//// 	c = a;
//// 	a = b;
//// 	b = c;
//// 	printf("a = %d b = %d\n",a, b);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int max = arr[0];
//	for(i=1; i<sz; i++)
//	{
//		if(max<arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int m = 18;
//	int n = 24;
//	int k = 0;
//	while(k=m%n)
//	{
//		m = n;
//		n = k;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	/*for(i=0; i<sz; i++)
//	{
//	printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for(i=0; i<sz; i++)
//	{
//	printf("%d ", arr2[i]);
//	}
//	printf("\n");*/
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	for(i=0; i<line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for(i=0; i<line-1; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<=10000000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ����λ��-N
//		//123
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp/=10)//i=i/10 == i/=10
//		{
//			count++;
//		}
//		//2. ����ÿλ��N�η�֮��
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		if(i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//
//	for(i=0; i<n; i++)
//	{
//		ret = ret*10+a;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}
// f(x) = 2*x+1;
// f(x, y) = x+y;

//NULL-ָ��
//null-NUL-'\0'
//
//
//int main()
//{
//	char arr1[20] = "aaaaaa";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	system("pause");
//	return 0;
//}

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	system("pause");
	return 0;
}


