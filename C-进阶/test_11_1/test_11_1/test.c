#define _CRT_SECURE_NO_WARNINGS 1



//
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//
//int main()
//{
//	/*int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("%d\n", b);
//	*/
//	int a = (int)3.14;
//	
//	return 0;
//}

// int main()
// {
// 	int a = 10;
// 	//int b = a++;//����++����ʹ�ã���++
// 	//int b = ++a;//ǰ��++����++����ʹ��
// 	//int b = a--;//��ʹ�ã���--
// 	//int b = --a;
// 	printf("a = %d b = %d\n", a, b);//
// 	return 0;
// }

//
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//
//	//-1
//	//
//	//-1
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	printf("%d\n", ~a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}
//
//int main()
//{
//	//0-��
//	//��0-��
//	//printf("%d\n", !0);
//	int flag = 0;
//	if(!flag)
//	{
//
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	a = 20;//��ֵ
//	//���ϸ�ֵ
//	a = a+3;
//	a += 1;
//	a++;
//	a += 3;
//	a -= 3;
//	a *= 3;
//	a >>= 3;
//	a &= 3;
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 3;
//	//int c = a&b;//��λ��2����
//	//int c = a|b;//��λ��2����
//	int c = a^b;//��λ���
//	//00000000000000000000000000000101
//	//00000000000000000000000000000011
//	//00000000000000000000000000000110
//	//
//	//00000000000000000000000000000111
//	//00000000000000000000000000000001
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	//5/2.0;
//	//5%2.0;//err
//	int a = 10;
//	//00000000000000000000000000001010
//	//
//	//int b = a>>1;
//	int b = a<<1;
//
//	printf("%d\n", b);
//
//	return 0;
//}

//����
//
//
//int main()
//{
//	int arr[10] = {1,2,3};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//printf("%d\n", arr[2]);
//	//arr[4];
//	//int arr[10] = {0};
//
//	//char ch[5];
//	return 0;
//}
//����
// f(x) = 2*x+1;
// f(x, y) = x+y;
// 
// int Add(int x, int y)
// {
// 	int z = 0;
// 	z = x+y;
// 	return z;
// }
// int main()
// {
// 	int num1 = 10;
// 	int num2 = 20;
// 	//int sum = num1+num2;
// 	int sum = Add(num1, num2);
// 	printf("%d\n", sum);
// 	sum = Add(2, 3);
// 	printf("%d\n", sum);
// 
// 	return 0;
// }

//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while(line<20000)
//	{
//		printf("�ô���\n");
//		line++;
//	}
//	if(line >= 20000)
//		printf("�ҹ���\n");
//
//	return 0;
//}


//
//
//int main()
//{
//	int input = 0;
//	printf("�������, ��Ҫ�ú�ѧϰ��(1/0)\n");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("�� offer\n");
//	}
//	else if(input == 0)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("ѡ�����\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	/*
//	int a = 10;
//	*/
//
//	//int b = 20;
//
//	return 0;
//}

//
//int main()
//{
//	//printf("c:\test\x55\test.c");
//	//printf("%d\n", strlen("c:\test\x55\test.c"));
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("\a\a\a\a\a\a\a\a\a\a");
//	return 0;
//}
//
//int main()
//{
//	/*"abc";
//	"a";
//	"";*/
//	//ASCII
//	char arr1[] = "bit";//bit\0
//	char arr2[] = {'b', 'i', 't'};//bitxxxxx
//
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		/*if(year%4 == 0)
//		{
//		if(year%100 != 0)
//		{
//		printf("%d ", year);
//		}
//		}
//		if(year%400==0)
//		{
//		printf("%d ", year);
//		}*/
//
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		int j = 0;
//		//��ӡһ��
//		for(j=1; j<=i; j++)
//		{
//			//��ӡһ��
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
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
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
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
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<=(i/2); j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j>(i/2))
//		{
//			count++;
//			printf("%d ", i);
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
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j==i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}