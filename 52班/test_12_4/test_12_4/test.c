#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//
//	/*for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}*/
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);//�ϵ�
//	}
//
//	return 0;
//}
////

//void test2()
//{
//	printf("test2\n");
//}
//void  test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	const int a = 10;
//	int *p = (int *)&a;
//	*p = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;		
//	//scanf("%d", &n);
//	//1 2 6 = 9
//	for(j=1; j<=3; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//
//	//<C�����ȱ��>-<C��ָ��>-��Cר�ұ�̡�
//	//
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

#include <string.h>
#include <assert.h>

//
//10-8
//

//char *strcpy( char *strDestination, const char *strSource );
//ΪʲôҪconst����src��--˼��--const��������ʲô��
//char* my_strcpy(char*dest, const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);//����
//	assert(dest != NULL);//����
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = "***********";
//	char*p = "abcdef";
//	char *q = my_strcpy(arr, p);
//	printf("%s\n", q);
//	system("pause");
//	return 0;
//}


