#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*int ch = getchar();
	putchar(ch);*/
	int ch = 0;
	//EOF -- end of file
	while((ch=getchar()) != EOF)
	{
		if(ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}

	system("pause");
	return 0;
}
//
//int main()
//{
//	int i = 1;
//
//	while(i<=10)
//	{
//		i++;
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	while(1)
//		printf("hehe\n");
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;break;
//	default:break;
//	}
//
//	printf("m = %d, n = %d\n", m, n);//
//	//5 3-8
//	//3 2
//	//4 3
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	//if(1 == day)
//	//{
//	//	printf("����1\n");
//	//}
//	//else if(2 == day)
//	//{
//	//	printf("����2\n");
//	//}
//	//else if(3 == day)
//	//{
//	//	printf("����3\n");
//	//}
//	////..
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if(1 == i%2)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//
//<C�����ȱ��>
//

//
//int main()
//{
//	int a = 3;
//	if(a = 10)
//	{
//
//	}
//
//	if(10 == a)
//		printf("hehe\n");
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char firstname[20];
//	char first_name[20];
//	char FirstName[20];
//
//
//	//int a = 0;//
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//
//	//}
//	//for(i=0;i<10;i++)
//	//{
//
//	//}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//int a = 3;
//	int age = 0;
//	scanf("%d", &age);
//
//	if(age<18)
//		printf("����\n");
//	else if(age>=18 && age<=30)
//		printf("����\n");
//	else if(age>30 && age<50)
//		printf("����\n");
//	else if(age>=50 && age<80)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	/*if(age<18)
//	{
//	printf("δ����\n");
//	printf("���ܽ�Ů����\n");
//	}
//	else
//	{
//	printf("����\n");
//	}*/
//
//	/*if(age<18)
//	printf("δ����\n");
//	*/
//	system("pause");
//	return 0;
//}

//char-short-int ��������
//�ṹ��-�Զ�������
//
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = {"����", 20, "��"};//
//	//printf("name: %s age: %d sex: %s\n", s.name, s.age, s.sex);
//	struct Stu* ps = &s;
//	//printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//
//	system("pause");
//	return 0;
//}

//
//32-4
//64-8
//
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	system("pause");
//	return 0;
//}

//#define M 100

//
//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;
//	//*pc = 'a';
//	//printf("ch = %c\n", ch);
//
//	int a = 10;//4�ֽ�
//	int* p = &a;//ȡ��ַ--ָ�����
//	*p = 20;   //*-�����ò�����
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}

//��
//#define SQUARE(X) ((X)*(X))
//
//int main()
//{
//	//int a = M;
//	//printf("%d\n", a);
//	printf("%d\n", SQUARE(3+2));
//	//printf("%d\n", (3+2)*(3+2));
//	//printf("%d\n", 3*3);
//	system("pause");
//	return 0;
//}

//
//1. static���ξֲ�����-��̬�ֲ�����
//�ı��˾ֲ���������������
//2. static����ȫ�ֱ���-��̬ȫ�ֱ���
//�ı����ȫ�ֱ�����������
//ʹ�ñ����εı���ֻ�����Լ����ڵ�Դ�ļ��ڲ�����ʹ��
//3. static���κ���
//�ı��Ǻ������������ԣ��ⲿ��������->�ڲ��������ԣ�
//
//
//
////�����ⲿ����
//extern void test();
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	system("pause");
//	return 0;
//}
//
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
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
