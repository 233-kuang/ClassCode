#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	//����ָ��
//	//int* arr[10] = {0};
//	//int* (*p)[10]  = &arr;
//
//	//����ָ��
//	//int (*pfun)(int, int) = Add;
//
//	return 0;
//}

//typedef unsigned int u_int;


// 
// typedef void(*pfun_t)(int);
// 
// //void(*pf)(int);
// 
// void (*signal(int, void(*)(int)))(int);
// //signal��һ������������
// //signal�����ĵ�һ��������int���ڶ��������Ǻ���ָ��
// //signal�����ķ�������Ϊһ������ָ��
// //signal�����ĵڶ�������������ָ�룩����ָ��һ������
// //ָ��ĺ����Ĳ�����int����������Ϊvoid
// //...
// 
// pfun_t signal(int, pfun_t);
// 
// 
// int main()
// {
// 
// 	return 0;
// }
// 
// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int Sub(int x, int y)
// {
// 	return x-y;
// }
// int Mul(int x, int y)
// {
// 	return x*y;
// }
// int Div(int x, int y)
// {
// 	return x/y;
// }
// 
// void menu()
// {
// 	printf("************************************\n");
// 	printf("*****   1. add     2. sub       ****\n");
// 	printf("*****   3. mul     4. div       ****\n");
// 	printf("*****        0. exit            ****\n");
// 	printf("************************************\n");
// }
// 
// 
// void calc(int (*p)(int, int))
// {
// 	int x = 0;
// 	int y = 0;
// 	int ret = 0;
// 	printf("����������������:>");
// 	scanf("%d%d", &x, &y);
// 	ret = p(x, y);
// 	printf("%d\n", ret);
// }
// 
// int main()
// {
// 	int input = 0;
// 	
// 	//����ָ�������
// 	//ת�Ʊ�--<C��ָ��>
// 	//int (*p1)(int, int);//����ָ��
// 	//int (*p2[4])(int, int);//����ָ������
// 	//int (*(*p3)[4])(int, int);//ָ����ָ�������ָ��
// 
// 	//����ָ������
// 	int (*pfun[5])(int, int) = {NULL, Add, Sub, Mul, Div};
// 	//int (*(*p)[5])(int, int) = &pfun;//ָ����ָ�������ָ��
// 	do 
// 	{
// 		menu();
// 		printf("��ѡ��:>");
// 		scanf("%d", &input);
// 		/*if(input>=1 && input<=4)
// 		{
// 			printf("����������������:>");
// 			scanf("%d%d", &x, &y);
// 			ret = pfun[input](x, y);
// 			printf("%d\n", ret);
// 		}
// 		else if(input == 0)
// 			break;
// 		else
// 		{
// 			printf("ѡ�����\n");
// 		}*/
// 		switch(input)
// 		{
// 		case 1:
// 			calc(Add);
// 			break;
// 		case 2:
// 			calc(Sub);
// 			break;
// 		case 3:
// 			calc(Mul);
// 			break;
// 		case 4:
// 			calc(Div);
// 			break;
// 		case 0:
// 			printf("�˳�\n");
// 			break;
// 		default:
// 			printf("ѡ�����\n");
// 			break;
// 		}
// 	} while (input);
// 	return 0;
// }

//
//int main()
//{
//	//int (*p)(int, int);//����ָ��
//	int (*pfun[4])(int, int) = {Add, Sub, Mul, Div};//����ָ�������
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		printf("%d\n", pfun[i](9, 3));//12 6 27 3
//	}
//	return 0;
//}
//
//#include <stdlib.h>
//#include <string.h>
////
////void bubble_sort(int arr[], int sz)
////{
////	//����
////	int i = 0;
////	for(i=0; i<sz-1; i++)
////	{
////		int j = 0;
////		for(j=0; j<sz-1-i; j++)
////		{
////			if(arr[j] > arr[j+1])
////			{
////				int tmp = arr[j];
////				arr[j] = arr[j+1];
////				arr[j+1] = tmp;
////			}
////		}
////	}
////}
////
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////void qsort( void *base, size_t num, size_t width,
////		   int (*cmp )(const void *e1, const void *e2 ) );
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int *)e1 - *(int *)e2;
//}
//
//void test1()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	//bubble_sort(arr, sz);//ð������
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int cmp_s_by_name(const void*e1, const void* e2)
//{
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//}
//
//int cmp_s_by_age(const void*e1, const void* e2)
//{
//	return ((struct S*)e1)->age - ((struct S*)e2)->age;
//}
//void test2()
//{
//	struct S s[3] = {{"zhangsan", 20}, {"lisi", 5}, {"wangwu", 30}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_s_by_age);
//}
//
//void Swap(char *buf1, char* buf2, int width)
//{
//	int i = 0;
//	for(i=0; i<width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void*base, int num, int width, 
//			int(*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	int j = 0;
//	//����
//	for(i=0; i<num-1; i++)
//	{
//		//����Ԫ�صıȽ�
//		for(j=0; j<num-1-i; j++)
//		{
//			//�Ƚ�-����ָ��
//			if(cmp((char*)base+width*j, (char*)base+width*(j+1))>0)
//			{
//				//����
//				Swap((char*)base+width*j, (char*)base+width*(j+1), width);
//			}
//			
//		}
//	}
//}
//void test3()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);//ð������
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	struct S s[3] = {{"zhangsan", 20}, {"lisi", 5}, {"wangwu", 30}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_s_by_name);
//}
//
////��������Լ��
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}
//

int main()
{
	//һά����

// 	int a[] = {1,2,3,4};
// 	//int sz = sizeof(a)/sizeof(*a);
// 
// 	printf("%d\n",sizeof(a));//16
// 	printf("%d\n",sizeof(a+0));//4
// 	printf("%d\n",sizeof(*a)); //4  *a == a[0]
// 	printf("%d\n",sizeof(a+1));//4
// 	printf("%d\n",sizeof(a[1]));//4
// 	printf("%d\n",sizeof(&a));//4  
// 	printf("%d\n",sizeof(*&a));//16
// 	printf("%d\n",sizeof(&a+1));//4
// 	printf("%d\n",sizeof(&a[0]));//4
// 	printf("%d\n",sizeof(&a[0]+1));//4

	//�ַ�����
	//char arr[] = {'a','b','c','d','e','f'};
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4

	//printf("%d\n", strlen(arr));//x
	//printf("%d\n", strlen(arr+0));//x
	////printf("%d\n", strlen(*arr));//'a'-97//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//x
	//printf("%d\n", strlen(&arr+1));//y
	//printf("%d\n", strlen(&arr[0]+1));//z

// 	char arr[] = "abcdef";
// 	printf("%d\n", sizeof(arr));//7
// 	printf("%d\n", sizeof(arr+0));//4
// 	printf("%d\n", sizeof(*arr));//1
// 	printf("%d\n", sizeof(arr[1]));//1
// 	printf("%d\n", sizeof(&arr));//4
// 	printf("%d\n", sizeof(&arr+1));//4
// 	printf("%d\n", sizeof(&arr[0]+1));//4
// 
// 	printf("%d\n", strlen(arr));//6
// 	printf("%d\n", strlen(arr+0));//6
// 	//printf("%d\n", strlen(*arr));//err
// 	//printf("%d\n", strlen(arr[1]));//err
// 	printf("%d\n", strlen(&arr));//6
// 	printf("%d\n", strlen(&arr+1));//x
// 	printf("%d\n", strlen(&arr[0]+1));//5


	//char *p = "abcdef";

	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p+1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p+1));//4
	//printf("%d\n", sizeof(&p[0]+1));//4

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p+1));//5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//x
	//printf("%d\n", strlen(&p+1));//y
	//printf("%d\n", strlen(&p[0]+1));//5


	//��ά����
	int a[3][4] = {0};
	//int (*p)[4] = a+1;

	printf("%p\n", &a[0][0]);
	printf("%p\n", &a[0]+1);

	printf("%d\n",sizeof(a));//48 
	printf("%d\n",sizeof(a[0][0]));//4
	printf("%d\n",sizeof(a[0]));//16 
	printf("%d\n",sizeof(a[0]+1));//4-��һ�еڶ���Ԫ�صĵ�ַ
	printf("%d\n",sizeof(*(a[0]+1)));//4-��һ�еڶ���Ԫ�صĴ�С
	printf("%d\n",sizeof(a+1));//4
	printf("%d\n",sizeof(*(a+1)));//16
	printf("%d\n",sizeof(&a[0]+1));//4
	printf("%d\n",sizeof(*(&a[0]+1)));//16
	printf("%d\n",sizeof(*a));//16
	printf("%d\n",sizeof(a[3]));//16

	return 0;
}

