#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//int main()
//{
//	//һά����
//	//int a[] = {1,2,3,4};
//	//printf("%d\n",sizeof(a));//16
//	//printf("%d\n",sizeof(a+0));//4 16 
//	//printf("%d\n",sizeof(*a));//4
//	//printf("%d\n",sizeof(a+1));//4 16
//	//printf("%d\n",sizeof(a[1]));//4
//	//printf("%d\n",sizeof(&a));//16 4
//	//printf("%d\n",sizeof(*&a));//16
//	//printf("%d\n",sizeof(&a+1));//4
//	//printf("%d\n",sizeof(&a[0]));//4
//	//printf("%d\n",sizeof(&a[0]+1));//4
//
//	//�ַ�����
//	//char arr[] = {'a','b','c','d','e','f'};
//
//	//printf("%d\n", strlen(arr));//6 �������
//	//printf("%d\n", strlen(arr+0));
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));
//	//printf("%d\n", strlen(&arr+1));
//	//printf("%d\n", strlen(&arr[0]+1));
//
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr+0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr+1));//4
//	//printf("%d\n", sizeof(&arr[0]+1));//4
//
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", strlen(arr));//6 
//	//printf("%d\n", strlen(arr+0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr+1));//���ֵ
//	//printf("%d\n", strlen(&arr[0]+1));//5
//
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr+0));//4
//	//printf("%d\n", sizeof(*arr));//
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr+1));
//	//printf("%d\n", sizeof(&arr[0]+1));
//
//	
//	//char *p = "abcdef";
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p+1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//���ֵ
//	//printf("%d\n", strlen(&p+1));//
//	//printf("%d\n", strlen(&p[0]+1));//5
//
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p+1));//4
//	//printf("%d\n", sizeof(*p));//
//	//printf("%d\n", sizeof(p[0]));
//	//printf("%d\n", sizeof(&p));
//	//printf("%d\n", sizeof(&p+1));
//	//printf("%d\n", sizeof(&p[0]+1));
//
//
//	//��ά����
//	int a[3][4] = {0};
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", &a[0]+1);
//	//printf("%p\n", a[0]+1);
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16
//	printf("%d\n",sizeof(a[0]+1));//4//
//	//a[0]+1-��ʾ��һ�е�һ��Ԫ�صĵ�ַ
//	//a[0]��ʾ��һ�е�����������sizeof(a[0]+1)����У�a[0]�����ǵ�������sizeof�ڲ�
//	//����a[0]��ʾ��Ԫ�صĵ�ַ����һ�е�һ��Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(*(a[0]+1)));//4
//	printf("%d\n",sizeof(a+1));//4
//	printf("%d\n",sizeof(*(a+1)));//16--a[1]
//	printf("%d\n",sizeof(&a[0]+1));//4--�ڶ��еĵ�ַ
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16 *a == *(a+0)  == a[0]
//	printf("%d\n",sizeof(a[3]));//16
//
//
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//2 5-3
//	//2 1
//	//2 x
//	//2 x
//	//
//	system("pause");
//	return 0;
//}
//
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	p = (struct Test*)0x100000;
//
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//
//	system("pause");
//	return 0;
//}

//
//<C������Ƚ���>-100-
//
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
// 
//	system("pause");
//	return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf( "%d", p[0]);
//
//	system("pause");
//	return 0;
//}


int main()
{
	int a[5][5] = {0};
	int(*p)[4];
	p = a;
	printf( "%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	//-4
	//10000000 00000000 00000000 00000100
	//11111111 11111111 11111111 11111011
	//11111111 11111111 11111111 11111100
	//FF FF FF FC
	system("pause");
	return 0;
}




