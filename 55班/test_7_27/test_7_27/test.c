#define _CRT_SECURE_NO_WARNINGS 1
//�ַ�ָ��

// int main()
// {
// 	char a = 'w';
// 	char* pc = &a;
// 	char arr[10] = "abcdef";
// 	char* pa = arr;
// 
// 	char* p = "abcdef";
// 
// 	return 0;
// }

//��ָoffer
#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if(arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	char*p1 = "abcdef";
//	char*p2 = "abcdef";
//
//	if(p1 == p2)
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	const char*p1 = "abcdef";
//
//	arr1[2] = 'w';
//	*(p1+2) = 'w';//p1[2]
//	return 0;
//}

//ָ������
//
//
//int main()
//{
//	int arr[10];//��������
//	int* arr2[5];//ָ������
//	return 0;
//}

//����ָ��

//
//int main()
//{
//	int a = 10;
//	char c = 'w';
//	int * p1 = &a;
//	char* p2 = &c;
//
//	int arr[10] = {0};
//	char ch[5] = {0};
//	char* arr2[6] = {0};
//	//����ָ�����ָ�������ָ��
//	//arr;//������Ԫ�صĵ�ַ
//	//&arr[0];//������Ԫ�صĵ�ַ
//	int(*p)[10] = &arr;//����ĵ�ַ
//	char (*pc)[5] = &ch;
//	char* (*parr2)[6] = &arr2;
//
//	return 0;
//}
//

//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void print2(int (*p)[10], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//print(arr, sz);
//	print2(&arr, sz);
//	return 0;
//}
//
//void print1(int arr[3][5], int x, int y)
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
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			//printf("%d ", (*(p+i))[j]);
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	int (*p)[3][5] = &arr;
//	p+1;
//	//print1(arr, 3, 5);
//	//print2(arr, 3, 5);
//	//����������Ԫ�صĵ�ַ
//	//
//
//	//int arr[10];
//	//int (*p)[10] = &arr;
//	//p+1
//	return 0;
//}


//����ָ��

//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//int arr[5];
//	//int (*pa)[5] = &arr;
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*p)(int, int) = Add;//p�Ǻ���ָ��
//	int ret = p(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//typedef 
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}Stu;
//
//int main()
//{
//	typedef unsigned int uint;
//
//	void (*signal(int, void(*)(int)))(int);
//
//	//��
//	typedef void (*pfun_t)(int);
//	void(*p)(int);
//
//	pfun_t signal(int, pfun_t);
//
//	//signal��һ����������
//	//signal������������������һ��������int���ͣ�
//	//�ڶ��������Ǻ���ָ������
//	//�ú���ָ��ָ��ĺ�����������int������������void
//	//signal�����ķ���������һ������ָ�룬�ú���ָ��ָ��ĺ�����
//	//������int������������void
//
//	return 0;
//}
//

// int my_strlen(const char*str)
// {
// 	return 0;
// }
// 
// int main()
// {
// 	int* arr[10];
// 	char* arr2[5];
// 	//����ָ������
// 	int (*ps)(const char*) = &my_strlen;
// 	int (*ps2)(const char*) = &my_strlen;
// 	int (*ps3)(const char*) = &my_strlen;
// 	int (*psArr[3])(const char*) = {ps, ps2, ps3};//����ָ������
// 	//��ź���ָ�������
// 	
// 	return 0;
// }
//
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***     1. add    2. sub   ***\n");
//	printf("***     3. mul    4. div   ***\n");
//	printf("***     0.exit             ***\n");
//	printf("******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);	
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***     1. add    2. sub   ***\n");
//	printf("***     3. mul    4. div   ***\n");
//	printf("***     0.exit             ***\n");
//	printf("******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//����ָ������-ת�Ʊ�
//	int (*pArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		printf("����������������:>");
//		scanf("%d%d", &x, &y);
//		ret = pArr[input](x, y);
//		printf("ret = %d\n", ret);
//
//		/*switch(input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}


int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
int main()
{
	int (*p)(int, int);//����ָ��
	int (*pArr[2])(int, int);//����ָ�������
	int(*(*ptr)[2])(int, int) = &pArr;//ָ����ָ�������ָ��
	return 0;
}