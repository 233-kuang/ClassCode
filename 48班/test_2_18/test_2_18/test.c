#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

// int main()
// {
// 	const char *str = "abcdef";
// 	*str = 'e';
// 	return 0;
// }
//int main()
//{
//	//int arr1[10];
//	//char arr2[5];
//	////ָ������
//	//char* arr3[5];
//	//double* arr4[6];
//	//int a = 10;
//	//int* p1 = &a;//����ָ��-ָ�����͵�ָ��
//	//char* p2;//�ַ�ָ��-ָ���ַ���ָ��
//	////����ָ��-ָ�������ָ��
//	//int arr[10];
//	//&arr;
//	int arr[10] = {0};
//	int (*p)[10]  = &arr;//����ָ��
//
//	//char* ch[5];
//	//char* (*pc)[5] = &ch;//����ĵ�ַ->����ָ��
//
//	//int arr[10] = {0};
//	//printf("%p\n", arr);//������Ԫ�صĵ�ַ
//	//printf("%p\n", arr+1);
//
//	////printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr);//����ĵ�ַ
//	//printf("%p\n", &arr+1);
//
//	//&arr//����ĵ�ַ
//	//arr//������Ԫ�صĵ�ַ
//
//	//sizeof(������)-��������ʾ����������
//	//&������-��������ʾ�������飬����ȡ����������ĵ�ַ
//	//����֮�⣬���������е���������ʾ������Ԫ�صĵ�ַ
//
//	system("pause");
//	return 0;
//}


//void print(int *p, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//void print(int(*p)[10], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(*p+i));
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//&arr;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(&arr, sz);
//	system("pause");
//	return 0;
//}
//
//void print(int arr[3][4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print(int (*p)[4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[5];
//	int *p = a;
//	*(p+2)  ==  p[2]
//
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	print(arr, 3, 4);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int arr[5];
//	int (* parr3[10])[5];
//	//parr3��һ�����飬������10��Ԫ�أ�ÿ��Ԫ����һ������ָ��
//	//������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
//	//parr3��һ���������ָ�������
//
//	return 0;
//}
//
//void test(int **p)
//{
//
//}
//int  main()
//{
//	int* arr[5];//int* 
//	test(arr);
//	return 0;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int (*p)(int, int) = Add;
//	//printf("%d\n", *p(2,3));//err
//	printf("%d\n", (*p)(2,3));
//	printf("%d\n", Add(2,3));
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//(*(void(*)())0)();
//	//��0ǿ������ת��Ϊһ������ָ�룬����0��Ϊ�����ĵ�ַ���Ǹ�����
//	//����0��ַ���Ǹ��޲��޷���ֵ�ĺ�����
//
//	//int (*p)(int, int) = Add;//����ָ��
//	//int (*)(int, int);//����ָ������
//	//int (*)[5];
//	//printf("%d\n", (*p)(2, 3));
//
//	void (* signal(int, void(*)(int)) )(int);
//	//signal��һ����������
//	//signal�����ĵ�һ��������int���ڶ��������Ǻ���ָ��
//	//signal�����ķ���������һ������ָ��
//	//
//	//signal�����ĵڶ������������ͺͷ���������ͬ�����Ǻ���ָ��
//	//�ú���ָ��ָ��ĺ�����������int������������void
//	//
//	typedef void(* ptr)(int);
//	ptr signal(int, ptr);
//
//	//
//	//������ - ���������
//	//
//	//typedef unsigned int uint;
//
//
//	//int arr[10];
//	//&arr;
//	//printf("%p\n", &test);
//	//printf("%p\n", test);
//	//(*&test)();
//	//(*test)();
//
//	system("pause");
//	return 0;
//}

//
//����ָ��
//����ָ������
//
//����ָ��
//����ָ������
//
int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x/y;
}


void menu()
{
	printf("*************************************\n");
	printf("****    1. add     2. sub         ***\n");
	printf("****    3. mul     4. div         ***\n");
	printf("****    0.exit                    ***\n");
	printf("*************************************\n");
}
void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("����������������:>");
	scanf("%d%d", &x, &y);
	ret = pf(x, y);
	printf("ret = %d\n", ret);
}
int main()
{
	int input = 0;
	//����ָ�������ʹ��
	//ת�Ʊ�
	int (*pfun[5])(int, int) = {0, Add, Sub, Mul, Div};
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		Calc(pfun[input]);
		/*switch(input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}*/
	} while (input);
	return 0;
}


//int main()
//{
//	//int* arr[4];
//	int(*parr[4])(int, int)  = {Add, Sub, Mul, Div};//int(*)(int, int);
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		printf("%d\n", parr[i](4, 2));//6 2 8 2
//	}
//	system("pause");
//	return 0;
//}