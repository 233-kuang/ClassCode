#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//switch case
//if else
//
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��");
//	scanf("%d", &input);
//	//ѡ�����
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
//		printf("���ڸ�ɶ\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int line = 0;//��¼��������
//	printf("�������\n");
//
//	while(line < 20000)
//	{
//		printf("д����\n");
//		line++;
//	}
//	if(line == 20000)
//	{
//		printf("�ҹ���\n");
//	}
//
//	return 0;
//}

//for
//do while
//�Զ��庯��
//int Add(int x, int y)
//{
//// 	int z = 0;
//// 	z = x+y;
//// 	return z;
//	return x+y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//
//	printf("����������������:>");
//	scanf("%d%d", &num1, &num2);
//	//sum = num1+num2;//�ӷ�
//	//����
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	//sum = a+b;//�ӷ�
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	//����
//	int a = 1;
//	int b = 2;
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//0-9
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	/*printf("%d\n", arr[0]);
//	printf("%d\n", arr[6]);*/
//
//	//char arr2[20] = {0};
//
//	return 0;
//}


//>> <<
//
//int main()
//{
//	int a = 20;//4*3=32
//	//00000000000000000000000000010100
//	//
//	//
//	//int b = a>>2;//����-������λ
//	int b = a<<1;  //
//	printf("%d\n", b);
//	printf("%d\n", a);
//	
//	return 0;
//}

//& ��λ��-������
//^ ��λ���
//| ��λ��
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//
//	/*int c = a | b;*/
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//7
//
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//	printf("%d\n", c);
//	return 0;
//}
//

// int main()
// {
// 	int a = 10;
// 	a = 20;//��ֵ
// 	a = a+10;//1
// 	a += 10;//2  ���ϸ�ֵ
// 	a = a+b;
// 	return 0;
// }
//
//int main()
//{
//	int flag = 0;
//	if(!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	return 0;
//}

//
//f-1111
  //8421
//
//int main()
//{
//	int a = 0;
//	//ԭ��
//	//10000000000000000000000000000001
//	//����
//	//11111111111111111111111111111110
//	//����
//	//11111111111111111111111111111111
//
//
//	printf("%d\n", ~a);
//	//
//	//
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//��ʹ�ã���++
//	//int b = ++a;  //��++����ʹ��
//	//int b = a--;
//	int b = --a;
//
//	printf("a = %d\n", a);//
//	printf("b = %d\n", b);//
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//
//	//int a = int(3.14);//err
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = a|b;//7
//	int d = a || b;//1
//
//	//int c = a&b;//011  100  000
//	//int d = a && b;
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	int max = 0;
//	if(a>b)
//	max = a;
//	else
//	max = b;
//	max = (a>b ? a : b);*/
//
//	int a = 3;
//	int b = 5;
//	int c = 10;
//	int d = (b=a+3, a=b-5, c=c+b);//16
//	printf("%d\n", d);
//	return 0;
//}
//
//void test()
//{
//	printf("test\n");
//}
//int Add(int x, int y)
//{
//	return x+y;
//}

//int main()
//{
//	//int arr[10] = {0};
//	test();//�������ò�����
//	//arr[4] = 5;//�±����ò�����
//	Add(2, 3);
//	return 0;
//}


//�����������ŵ�
//extern int g_val;
//
//int main()
//{
//	//register-����
//	register int a = 10;
//
//	//int a = 10;//�ֲ�����
//	printf("%d\n", g_val);
//	return 0;
//}
//
//typedef unsigned int u_int;
//
//typedef struct S
//{
//	int a;
//	char c;
//	double d;
//}S;
//
//int main()
//{
//	//int char;
//	struct S s;
//	S ss;
//	unsigned int num = 0;
//	u_int num2 = 0;
//	return 0;
//}

//static
//1. ���ξֲ�����
//�ı��˾ֲ���������������
//2. ����ȫ�ֱ���
//�ı���ȫ�ֱ�����������-�ı����������ԣ��ⲿ-->�ڲ���
//3. ���κ���
//�ı��˺�����������-�ı����������ԣ��ⲿ-->�ڲ���

//void Test()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		Test();
//	}
//	return 0;
//}

//extern int g_val;
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//	//printf("g_val = %d\n", g_val);
//	return 0;
//}


//#define MAX 1000
//��
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	//int a = MAX;
//	printf("%d\n", MAX(3, 5));
//	return 0;
//}

int main()
{
	int a = 0;
	int * p = &a;//ָ�����
	*p = 20;//�����ò���
	//printf("%p\n", &a);
	printf("%d\n", a);

	return 0;
}