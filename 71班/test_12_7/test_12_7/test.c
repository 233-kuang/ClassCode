#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 10;
//	/*
//	printf("hehe\n");
//	printf("haha\n");
//	*/
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//for  do while
//while
//
//int main()
//{
//	int line = 0;
//	printf("�������!\n");
//
//	while(line<=20000)
//	{
//		printf("�ô���\n");
//		line++;
//	}
//	if(line > 20000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}

//f(x) = 2*x+1;
//f(x, y) = x+y;
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
//	int num1 = 10;
//	int num2 = 20;
//	int ret = 0;
//	ret = Add(num1, num2);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	////printf("%d\n", arr[4]);
//	//int i = 0;
//	//while(i<10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//
//	//int a = 7%2;
//	//printf("%d\n", a);
//
//	int a = 8;
//	int b = a<<1;
//	//00000000000000000000000000010000
//	//
//	//������λ
//	//8
//	//00000000000000000000000000001000-ԭ��
//	//������ԭ�롢���롢������ͬ
//	//
//	printf("b = %d\n", b);
//	printf("a = %d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;//��λ��-������λ-
//	//int c = a | b;//��λ��-������λ-
//	int c = a ^ b;//��λ���-������λ-
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//	//00000000000000000000000000000111
//	//
//	//00000000000000000000000000000001
//
//
//	//17
//	//1 1 1 1 1 
//	//168 4 2 1
//	//10001
//	printf("c = %d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int num = 10;
//	num = 20;//��ֵ
//	num = num+2;
//	num += 2;
//	num = num>>2;
//	num >>= 2;
//
//	num = num&2;
//	num &= 2;//���ϸ�ֵ��
//	return 0;
//}
//
//int main()
//{
//	int flag = 0;
//	//!flag;
//	if(!flag)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int arr[10] = {0};
//	char arr2[] = "abc";
//	char arr3[] = {'a', 'b', 'c'};
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));//
//	printf("%d\n", sizeof(arr2));//4
//	printf("%d\n", sizeof(arr3));//
//
//	return 0;
//}
//
//int main()
//{
//	//-1
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	//
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//
//	printf("%d\n", ~a);//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	int b = --a;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = (++a)+(++a)+(++a);
//	//7 9 12 6 
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a||b;
//	c = a|b;
//
//	//01
//	//10
//	//11
//	//int c = a&&b;
//	//c = a&b;
//	//int a = (int)3.14;
//	//int a = int(3.14); //err
//	//printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = ((a>b) ? a : b);
//
//	if(a>b)
//		max = a;
//	else
//		max = b;
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 10;
//	int d = (a=b-4, b=a+c, c=10-a);
//	printf("%d\n", d);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x+y;
//}
//int  main()
//{
//	int a[10] = {0};
//	int ret = 0;
//	a[4] = 5;//�±����ò�����
//	ret = Add(2, 3);
//	return 0;
//}

//int main()
//{
//	int a = 10;//auto 
//	return 0;
//}
//
//typedef unsigned int uint;
//
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 0;
//	return 0;
//}
//1. static���ξֲ�����
//�ı��˱�������������
//2. static����ȫ�ֱ���
//�ı�ı�����������-�������ԣ���->�ڣ�
//3. static���κ���
//�ı亯�����������ԣ���->�ڣ�



//extern int g_val;
//
//extern int Add(int, int);
//
//int main()
//{
////	printf("%d\n", g_val);
//	int ret = Add(2, 3);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//#define NUM 100
//#define STR printf("hehe\n")
//
//int main()
//{
//	printf("%d\n", NUM);
//	//printf("%s\n", STR);
//	STR;
//	return 0;
//}
//
//#define MAX(X,Y) (X>Y?X:Y)
//
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	//int max = (a>b?a:y);
//	printf("max = %d\n", max);
//	max = Max(3, 10);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 0x11223344;
//	int a = 10;
//	int* p = &a;//ָ�����
//	char ch = 'w';
//	char* pc = &ch;
//
//	*p = 20;//�����ò�����-��ӷ��ʲ�����
//
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	//printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	return 0;
//}

struct Stu
{
	char name[20];
	short age;
};

int main()
{
	struct Stu s = {"����", 20};
	struct Stu * ps = &s;
	printf("%s\n", s.name);
	printf("%d\n", s.age);

	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);

	printf("%s\n", ps->name);
	printf("%d\n", ps->age);

	return 0;
}
