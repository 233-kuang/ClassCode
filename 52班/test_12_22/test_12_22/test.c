#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	//һά����
	//sizeof(������)--��������ʾ�������飬�����������Ĵ�С
	//&������--��������ʾ�������飬�������������ĵ�ַ
	//����֮�⣬���е�������������������Ԫ�صĵ�ַ
	//
	//int a[] = {1,2,3,4};
	//printf("%d\n",sizeof(a));//16-sizeof(������)-�����ܴ�С
	//printf("%d\n",sizeof(a+0));//4-��Ԫ�صĵ�ַ
	//printf("%d\n",sizeof(*a)); //4-��Ԫ��
	//printf("%d\n",sizeof(a+1));//4-�ڶ���Ԫ�صĵ�ַ
	//printf("%d\n",sizeof(a[1]));//4-�ڶ���Ԫ��
	//printf("%d\n",sizeof(&a)); //4-����ĵ�ַ
	//printf("%d\n",sizeof(*&a));//16-��������
	//printf("%d\n",sizeof(&a+1));//4-����һ������ָ����4�ĺ���
	//printf("%d\n",sizeof(&a[0]));//4-��Ԫ�صĵ�ַ
	//printf("%d\n",sizeof(&a[0]+1));//4-�ڶ���Ԫ�صĵ�ַ
	//�ַ�����
	//char arr[] = {'a','b','c','d','e','f'};
	//printf("%d\n", strlen(arr));//x-���ֵ
	//printf("%d\n", strlen(arr+0));//x���ֵ
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//x
	//printf("%d\n", strlen(&arr+1));//x-6
	//printf("%d\n", strlen(&arr[0]+1));//x-1

	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4

	

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr+0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr+1));
	//printf("%d\n", sizeof(&arr[0]+1));

	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr+0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr+1));
	//printf("%d\n", strlen(&arr[0]+1));

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p+1));
	//printf("%d\n", sizeof(*p));
	//printf("%d\n", sizeof(p[0]));
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p+1));
	//printf("%d\n", sizeof(&p[0]+1));

	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p+1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p+1));
	//printf("%d\n", strlen(&p[0]+1));

	////��ά����
	//int a[3][4] = {0};
	//printf("%d\n",sizeof(a));
	//printf("%d\n",sizeof(a[0][0]));
	//printf("%d\n",sizeof(a[0]));
	//printf("%d\n",sizeof(a[0]+1));
	//printf("%d\n",sizeof(*(a[0]+1)));
	//printf("%d\n",sizeof(a+1));
	//printf("%d\n",sizeof(*(a+1)));
	//printf("%d\n",sizeof(&a[0]+1));
	//printf("%d\n",sizeof(*(&a[0]+1)));
	//printf("%d\n",sizeof(*a));
	//printf("%d\n",sizeof(a[3]));
	system("pause");

	return 0;
}

//int main()
//{
//	int arr[10];
//	int (*p)[10] = &arr;
//	//p+1;//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	void* pf = &a;
//	*pf;
//	pf++;
//	return 0;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i= 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////
//int cmp_int(const void *e1, const void *e2 ) 
//{
//	return *(int*)e1  - *(int*)e2;
//}

//void _Swap(char* buf1, char* buf2, size_t width)
//{
//	size_t i = 0;
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
////���ͱ��
////C++-- ģ����
//
//void bubble_sort(void*base, size_t sz, size_t width, 
//				int (*cmp)(const void* e1, const void*e2))
//{
//		size_t i = 0;
//		//����
//		for(i=0; i<sz-1; i++)
//		{
//			//��������Ԫ�صıȽ�
//			size_t j = 0;
//			for(j=0; j<sz-1-i; j++)
//			{
//				//�Ƚ�
//				//����cmp������Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
//				if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//				{
//					//����
//					_Swap((char*)base+j*width,(char*)base+(j+1)*width, width);
//				}
//			}
//		}
//}
//
//void test1()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//qsort(arr, sz, 4, cmp_int);
//	print_arr(arr, sz);
//}
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int cmp_s_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//}
//
//int cmp_s_by_age(const void*e1, const void*e2)
//{
//	return ((struct S*)e1)->age - ((struct S*)e2)->age;
//}
//
//void test2()
//{
//	struct S arr[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 5}};
//	//qsort(arr, 3, sizeof(struct S), cmp_s_by_age);
//	bubble_sort(arr, 3, sizeof(struct S), cmp_s_by_name);
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}

//void qsort( void *base, 
//	size_t num, 
//	size_t width, 
//	int (*cmp)(const void *e1, const void *e2 ) 
//	);
//


//
//int main()
//{
//	int arr[5];
//	int (*parr[4])(int, int);
//	//&arr;
//	//ָ����ָ�������ָ��
//	int (* (*p)[4])(int, int) = &parr;
//	return 0;
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
//
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("***   1. add      2. sub    ***\n");
//	printf("***   3. mul      4. div    ***\n");
//	printf("***   0. exit               ***\n");
//	printf("*******************************\n");
//}
//
//void calc(int (*pf)(int, int))
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
//	//
//	//����ָ������
//	//ת�Ʊ�-��C��ָ�롷
//	//
//	int (*p[5])(int, int) = {NULL, Add, Sub, Mul, Div};
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if(input>=1 && input<=4)
//			calc(p[input]);
//		/*switch(input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);		
//			break;
//		case 3:
//			calc(Mul);			
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}*/
//	} while (input);
//
//	system("pause");
//	return 0;
//}

//char* my_strcpy(char* dest, const char*src)
//{
//	return NULL;
//}
//int main()
//{
//	//int* arr[5];//����ָ�������
//	//char* arr2[4];//�ַ�ָ�������
//	//����ָ�������
//	int i = 0;
//	int (*p[4])(int, int) = {Add, Sub, Mul, Div};
//
//	for(i=0; i<4; i++)
//	{
//		printf("%d\n", p[i](6, 3));//9 3 18 2
//	}
//	system("pause");
//	return 0;
//}

//int get_max(int, int);

//����������ȥд
//void ( *signal(int , void(*)(int)) )(int);
//
////typedef unsigned int uint;
////�򻯵İ汾
//typedef void(*pf_t)(int);
//pf_t signal(int a, pf_t p);

//void(*pf)(int);


//ע��:
//signal ��һ����������
//signal�����ĵ�һ��������int���ڶ��������Ǻ���ָ��
//signal�����ķ�������Ϊ����ָ��
//signal�����ĵڶ��������Ǻ���ָ�룬��ָ��ָ��ĺ���
//������int���Ż�����Ϊvoid
//signal�����ķ�������Ҳ��һ������ָ�룬�ú�ָ��ָ��ĺ���
//������int���Ż�����Ϊvoid
//C++ - STL-Դ��

//
//int get_max(int x, int y)
//{
//	return (x>y?x:y);
//}
//
//int main()
//{
//	//get_max;
//	//printf("%p\n", get_max);
//	int (*pf)(int, int) = get_max;
//	int max = pf(2, 5);
//	//int max = get_max(2, 5);
//
//	printf("max = %d\n", max);
//	system("pause");
//	//char ch = 'w';
//	//char* pc = &ch;
//	//char *p1 = "abcdef";
//	//char arr[20] = "hello";
//	//char *p2 = arr;
//
//	//int arr[10] = {0};
//	//int*p = arr;//int*
//	//char ch = 'w';
//	//char* pc = &ch;
//	//int (*pa)[10] = &arr;//����ָ��
//
//	return 0;
//}