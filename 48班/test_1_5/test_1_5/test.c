#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);//
//	//2 9 
//	printf("%d\n", b);
//	//int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a--;//��ʹ�ã���--
//	//int b = --a;//
//	//printf("%d\n", a);//9
//	//printf("%d\n", b);//
//
//	//-1
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	//unsigned int a;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//
//	//
//	//printf("%d\n", ~a);//11111111111111111111111111111111
//
//	//printf("%d\n", sizeof(int));
//	//int a = 10;
//	//printf("%d\n", !a);
//	//int b = -a;
//	//printf("%d\n", b);
//	//a = a<<1;
//	//a <<= 1;
//	//a = a+5;//1
//	//a += 5; //2
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	double f = 3.14;
//	int a = (int)f;
//	//int a = int(f);//err
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int max = 0;
//
//	max = (a>b) ? (a) : (b);
//
//	/*if(a>b)
//	max = a;
//	else
//	max = b;*/
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = (a=1+2,3-1,5-5,a+6);
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//
//int Add(int a, int b)
//{
//	return a+b;
//}
//
//int main()
//{
//	int sum = Add(3, 4);//�������ò�����
//	printf("sum = %d\n", sum);
//	//int arr[10] = {1,2,3,4,5};
//	//arr[4]
//	system("pause");
//	return 0;
//}
//
//typedef unsigned int uint;
//int main()
//{
//	//int a = 10;
//	unsigned int num = 10;
//
//	//uint num = 10;
//
//	return 0;
//}
//
//void test()
//{
//	static int a = 1;//static���ξֲ�����
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	//
//	system("pause");
//	return 0;
//}

//extern int g_val;//extern �����������ⲿ���ŵ�
//extern void print();
//
//int main()
//{
//	//printf("%d\n", g_val);
//	print();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//����
//	//������
//	register int a = 10;
//
//	return 0;
//}


//#define MAX 1000
//
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
////��
//#define MAX(X,Y) (X > Y ? X : Y)
//
//
//int main()
//{
//	//int a = MAX;
//	//printf("a = %d\n", a);
//	//int max = Max(3, 5);
//	int max = MAX(3, 5);
//	printf("%d\n", max);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 15;//4
//	char c = 'w';//1
//	int* p = &a;//ָ�����
//	char* pc = &c;
//	float f = 3.14f;
//	float* pf = &f;
//
//	//&a;//ȡ��ַ������
//	//printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;//&ȡ��ַ����
//	printf("a = %d\n", a);//10
//	*pa = 20;//�����ò�����
//	printf("a = %d\n", a);//20
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//32λ��ִ�г�����ָ��Ĵ�С��4���ֽ�
//	//64λ��ִ�г�����ָ��Ĵ�С��8���ֽ�
//
//	//int* pa = &a;//&ȡ��ַ����
//	//printf("%d\n", sizeof(pa));
//	//printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//
//
//	system("pause");
//	return 0;
//}
#include <string.h>

//�ṹ��
//����
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char id[15];
//};
//
//int main()
//{
//	//int a;
//	struct Stu s = {"����", 20, "��", "20190101"};
//	//s.name = "����";
//	/*strcpy(s.name, "����");
//	s.age = 20;*/
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//	printf("%s\n", s.id);
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	char arr[20] = {0};
//	//arr = "hello";//err
//	strcpy(arr, "hello");
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int age = 10;
//	/*if(age>=18)
//	printf("����\n");
//	else
//	printf("δ����\n");*/
//	if(age<18)
//	{
//		printf("δ����\n");
//		printf("����ȥ����\n");
//	}
//	else if(age>=18 && age<30)
//		printf("����\n");
//	else if(age>=30 && age<45)
//		printf("����\n");
//	else if(age>=45 && age<60)
//		printf("������\n");
//	else
//		printf("����\n");
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int a=10;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}

int main()
{
	char firstname[10];
	char first_name[10];
	char FirstName[20];
	return 0;
}