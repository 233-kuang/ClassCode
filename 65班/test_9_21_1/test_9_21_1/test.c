#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	//0-��
//	//��0-��
//	//&  |
//	//&& ||
//	//int a = 0 || 0;
//	//1+2;
//	
//	//printf("%d\n", a);
//
//	int a = 10;
//	int b = 0;
//	if(a>10)
//		b = 3;
//	else
//		b = -3;
//
//	//a>10 ? b=3 : b=-3;
//
//	//b = (a>10 ? 3 :-3);
//	return 0;
//}
//
//int main()
//{
//	//int a = (2,3,4,5,8-2);
//	int a =2;
//	int b = 3;
//	int c = 6;
//	int d = (c=b+2, b=c-a, c=c-b);
//
//	printf("%d\n", d);
//
//	return 0;
//}

//int main()
//{
//	int a[10] = {0};
//	//0-9
//	//a+b;
//	a[5] = 30;//�±����ò�����
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int ret = Add(2, 3);//�������ò�����
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//char int;
//	//int a = 20;
//	//����
//	//register int a = 10;
//
//	unsigned int a = 10;
//	typedef unsigned int u_int;
//
//	u_int b = 20;
//	return 0;
//}
//
//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	return ;
//}


//static-��̬
//1. ���ξֲ�����
//2. ����ȫ�ֱ���
//3. ���κ���

//���ξֲ�����
//�޸��˾ֲ���������������
//
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//static����ȫ�ֱ���
//ʹ��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ��޷�����
//�ı�����������ԣ��ⲿ->�ڲ���-<C��ָ��>

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static���κ���
//�ı���Ǻ������������ԣ���->�ڣ�
//
//C++/JAVA/����
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

//��ʶ������
//#define MAX 10000

//��
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////����
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//int main()
//{
//	//int a = MAX;
//	//MAX = 20000;
//	int max = MAX(2, 5);
//	printf("%d\n", max);
//	max = Max(2, 5);
//	printf("%d\n", max);
//
//	return 0;
//}
//char -1-8
//char c;

//0-9
//0-7
//0-15
//0-9 a b c d e f
//10
//00 00 00 0a
//
//
//int main()
//{
//	int a = 10;//4
//	//%d %c %s %f %lf %u %p
//	//printf("%p\n", &a);
//	int* p = &a;//ָ�����
//	*p =  20;//�����ò�����
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//
//	return 0;
//}

//����ѧ��
//ѧ������
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[12];
//	char addr[30];
//};
//
//int main()
//{
//	struct Stu s = {"����", 20, "����", "12345", "����"};//ѧ������
//	struct Stu* ps = &s;
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//	//�ṹ���Ա�ķ���
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	return 0;
//}


//int a = 10;
//
//int main()
//{
//	char name[5] = {0};
//	scanf("%s", name);
//	printf("%s\n", name);
//	//int a = 0;
//	//int b = 0;
//	//scanf("%d%d", &a, &b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//
//	/*a = a+b;
//	b = a-b;
//	a = a-b;*/
//	//011-b
//	//101-a
//	//110
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�����ֵ
//	max = arr[0];
//	for(i=1; i<sz; i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 1;
//	int c = 2;
//
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	//printf("%d %d %d\n", a, c, b);
//	return 0;
//}


//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = 0;
//
//	while(c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//
//	return 0;
//}



