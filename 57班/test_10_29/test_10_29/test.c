#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//"bit";
//	//"b";
//	//'b';
//	//"";
//	char arr1[] = "bit";
//	char arr2[] = {'b', 'i', 't', '\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
#include <string.h>

//int main()
//{
//	//int len =  strlen("bit");
//	//printf("%d\n", len);
//
//	char arr[] = {'b', 'i', 't', '\0'};
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", strlen("c:\test\code"));
//	//printf("%s\n", "c:\\test\\code");
//	//printf("\a\a\a\a\a\a");
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("%d\n", strlen("c:\test\057\test.c"));
//	//printf("%c\n", '\057');
//	//12 14 13 6
//	printf("%c\n", '\x40');
//
//	return 0;
//}


/*
int main()
{
	int a = 10;

	//int b = 20;

	return 0;
}
*/
//
//int main()
//{
//	int input = 0;
//	printf("�������,��Ҫѧϰ��?��1/0��:");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("��offer\n");
//	}
//	else if(input == 0)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//

//while
//for
//do while
//
//int main()
//{
//	int line = 0;
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
//	return 0;
//}

//f(x)  = 2*x+1;
//f(x, y) = x+y;

//����
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//
//	sum = Add(3, 6);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//
//int main()
//{
//	//����
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};//0-9
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	while(i<10)
//	{
//		arr[i] = 0;
//		i++;
//	}
//	i = 0;
//	while(i<10)
//	{
//		//printf("%d ", i);
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//
//int main()
//{
//	//int a = 5%2;
//	//int a = 5/2;
//	//printf("%d\n", a);
//	//int a = 12;
//	//int b = a<<1;
//	//00000000000000000000000000001100
//	//printf("%d\n", b);
//
//	int a = 1;
//	int b = 3;
//	//int c = a&b;//��(������)λ��
//	//int c = a|b;//��(������)λ��
//	int c = a^b;//��(������)���
//	//00000000000000000000000000000001
//	//00000000000000000000000000000011
//	//00000000000000000000000000000010
//	//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a+2;
//	a += 2;
//
//	a = a^3;
//	a ^= 3;
//
//	//= 
//	//+=
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 0;
//	//printf("%d\n", !a);
//	//int flag = 0;
//	//if(!flag)
//	//{
//		//printf("hehe\n");
//	//}
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int arr[10] = {0};
//	//printf("%d\n", sizeof(arr));
//
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof(a));  //4
//	//printf("%d\n", sizeof a);  //4
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//
//	//ԭ��
//	//����
//	//����
//	//-1
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	//
//	printf("%d\n", ~a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	int b = --a;//ǰ��++����++����ʹ��
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int max = 0;
//
//	//if(a>b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	//max = a>b ? a : b;
//
//
//	//int arr[10] = {0};
//	arr[4] = 10;
//	int a = Add(2, 3);
//	//printf();
//	a+b;
//	return 0;
//}

//
//int main()
//{
//	register int num = 0;//����
//	/*{
//		int a;
//	}
//*/
//	return 0;
//}
//
//
//typedef unsigned int uint;
//
//int main()
//{
//	//signed ;
//	//unsigned ;
//	unsigned int num = 0;
//	uint num = 0;
//	return 0;
//}
