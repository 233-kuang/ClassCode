#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//extern int g_val;

extern int Add(int x, int y);

int main()
{
	//printf("%d\n", g_val);
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("c = %d\n", c);
	return 0;
}

//static-��̬
//
//
//void test()
//{
//	//static���ξֲ�����
//	//�ı��˱�������������
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
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
//

//
//typedef unsigned int uint;
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
//	//unsigned int num = 10;
//	//uint num = 10;
//	S s;
//	return 0;
//}

//��������
// extern int g_val;
// 
// int main()
// {	
// 	unsigned int a = 1;
// 	printf("g_val = %d", g_val);
// 	return 0;
// }
// 
//
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	int arr[10] = {0};
//	Add(a, b);//�������ò�����
//	//a+b;
//	//arr[4] = 5;//�±����ò�����
//
//	//a>b ? max=a : max=b;//1
//	//max = a>b ? a:b;    //2
//// 	if(a>b)
//// 		max = a;
//// 	else
//// 		max = b;
//
//	//printf("%d\n", b);
//	//int a = (int)3.14;
//	//int a = int(3.14);//err
//	return 0;
//}

// 
// int main()
// {
// 	int a = 10;
// 	int b = --a;
// 	//
// 	//a = 9
// 	//b = 10
// 	//
// 	return 0;
// }
//
//int  main()
//{
//	int a = 10;
//	int b = ++a;
//	//ǰ��++
//	//��++,��ʹ��
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//10
//	printf("%d\n", a); //11
//
//	//int b = a++;
//	//����++
//	//��ʹ��,��++
//	//printf("a = %d\n", a);
//	//printf("b = %d\n", b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//
//	//00000000000000000000000000000000-����
//	//11111111111111111111111111111111-����
//	//11111111111111111111111111111110-����
//	//10000000000000000000000000000001-ԭ��
//
//	//ԭ��-����-����
//	//
//	printf("%d\n", ~a);//1 
//	//printf("%p\n", &a);
//	//printf("%d\n", !a);
//
//	return 0;
//}


//
//int main()
//{
//	int a = 10;
//	a = a+1;
//	a += 1;
//	a++;
//
//	a = a+5;
//	a += 5;
//
//	a = a&4;
//	a &= 4;
//
//	a = a>>1;
//	a >>= 1;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011
//	//101
//	//110
//	//
//	int c = a^b;
//	printf("c = %d\n", c);
//	//int a = 5;
//	//int b = a>>1;//������λ
//	//a = a<<1;
//	//printf("a = %d\n", a);//5
//	//printf("b = %d\n", b);//10
//
//	//00000000000000000000000000000101;
//
//	return 0;
//}
//
//int main()
//{
//	int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		arr[i] = 0;
//	}
//
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//arr[i];//0-9
//	//arr[0] = 0;
//	//arr[1] = 0;
//	//...
//	//char arr2[26] = {0};
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//void test()
//{
//	int m = 100;
//	int n = 200;
//	int sum = Add(m, n);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
//
//  notepad++
//
//
//int main()
//{
//	int line = 0;
//
//	while(line<=20000)
//	{
//		printf("�ô���\n");
//		line++;
//	}
//	
//	if(line>20000)
//	{
//		printf("��ţ,��offer\n");
//	}
//
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("���ú�ѧϰ��?\n");
//	scanf("%d", &input);
//
//	if(input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	/*
//	C���Ե�ע�ͷ��
//	int a = 10;
//	int b = 20;
//	*/
//
//	//
//	//C++ע�ͷ��
//	//��ɼӷ�����
//	//
//	//int c = a+b;
//	//printf("%d\n", c);
//	return 0;
//}

//
//int main()
//{
//	
//	//printf("%c\n", '\070');//070=56
//	//@!#QW
//	//ASCII����
//	//
//	//printf("%d\n", strlen("c:\test\3218\test.c"));
//	printf("%c\n", '\x040');
//	//printf("\a\a\a\a\a\a\a\a\a");
//	//����ĸ��--<C��ָ��>
//	//printf("(are you ok\?\?)");
//	//printf("%c", '\'');
//	//printf("%s\n", "\"");
//	//printf("hehe\n");
//	//printf("%s", "c:\\code\\test.c");
//	//printf("c:code\test.c");
//	
//	// 	"abcdef";
//	// 	"ab";
//	// 	"a";
//	// 	"";
//	//char arr1[] = "abcdef";//'\0'
//	//char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	//printf("%s\n", "abcdef");//abcdef
//	//printf("%s\n", arr1);//abcdef
//	//printf("%s\n", arr2);//abcdef
//	//printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}

