#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

struct Stu
{
	char name[20];
	float weight;
	short age;
};
int main()
{
	struct Stu s = {"����", 55.5, 20};
	//printf("%s %f %d\n", s.name, s.weight, s.age);
	struct Stu* ps = &s;
	//printf("%s %f %d\n", (*ps).name, (*ps).weight, (*ps).age);
	printf("%s %f %d\n", ps->name, ps->weight, ps->age);
	system("pause");
	return 0;
}
//
//int main()
//{
//	//printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char*));//1
//	printf("%d\n", sizeof(short*));//2
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//8
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//8
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';//�����ò�����/��ӷ��ʲ�����
//	printf("%c\n", ch);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;//4
//	//printf("%p\n", &a);
//	int * p = &a;//ָ�����
//	*p = 20;
//	printf("a = %d\n", a);//20
//	system("pause");
//	return 0;
//}

// #define ADD(X, Y) X+Y
// 
// int main()
// {
// 	printf("%d\n", 10*ADD(3, 4));
// 	//printf("%d\n", 10*3+4);
// 	system("pause");
// 	return 0;
// }

//#define MAX 100
//
//#define MAX(x, y) (x>y)?(x):(y)
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
//	//int max = (a>b)?(a):(b);
//	printf("%d\n", max);
//	//int a = MAX;
//	//MAX = 200;//err
//	//printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//
//1. static���ξֲ�����
//   �ı��˾ֲ��������������ڣ�������ı�������
//2. static����ȫ�ֱ���
//   �ı���ȫ�ֱ�����������ʹ�������̬��ȫ�ֱ���ֻ
//   �����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//3. static���κ���
//   �ı��˺������������ԣ��ⲿ����-->�ڲ��������ԣ�
//   ��C��ָ�롷
//

//
//extern int Add(int x, int y);
//int main()
//{
//	int ret = Add(1, 2);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}


//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}

//
//typedef unsigned int uint;
//
//typedef struct S
//{
//	char name[20];
//	int age;
//}S;
//
//int main()
//{
//	S s;
//
//	unsigned int a = 10;
//	uint b = 20;
//
//	return 0;
//}

//int main()
//{
//	//����
//	register int a = 10;
//
//	return 0;
//}

// 
// int main()
// {
// 	auto int a = 10;
// 	//printf("hehe\n");
// 	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
// 	//printf("%d\n", arr[4]);//arr[4] *(arr+4) *(4+arr) 4[arr]
// 	//printf("%d\n", 4[arr]);
// 	//a+b;
// 	//b+a;
// 	system("pause");
// 	//arr[4] = 5;
// 	//a+b;
// 	return 0;
// }
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 10;
//	int d = (b=a+2, a=b+3, c=a-10);
//
//	printf("%d\n", d);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if(a>b)
//		max = a;
//	else
//		max = b;
//
//	max = (a>b?a:b);
//	/*int a = 0;
//	int b = 0;
//	int c = a || b;
//	printf("c = %d\n", c);*/
//	system("pause");
//	return 0;
//}
// int main()
// {
// 	//int a = (int)3.14;
// 	return 0;
// }

//
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a--;
//	//int b = --a;
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//9
//	system("pause");
//	return 0;
//}


//int main()
//{	
//	int a = 0;
//	int c = -1;
//
//	printf("%d\n", ~a);
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//-1
//	//
//	//int b = 10;
//	//00000000000000000000000000001010
//	//
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	//printf("%d\n", !0);
//	//int a = 3;
//	//int b = 5;
//	//int c = a ^ b;
//	//a = 20;
//	//a = a+10;
//	//a += 10;//���ϸ�ֵ��
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//
//	//printf("%d\n", c);//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010
//	//
//	int b = a<<1;//������λ
//	//a = a<<1;//?
//	printf("b = %d\n", b);//20
//	printf("a = %d\n", a);//10
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//float a = 5/2.0;
//	int a = 5%2;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//����
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n", arr[5]);
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


