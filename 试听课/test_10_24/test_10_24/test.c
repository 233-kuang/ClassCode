#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//main--������
//
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	
//	//int c = (a+b)/2;
//	int c = a+(b-a)/2;
//	//
//	printf("%d\n", c);//2147483646
//
//	return 0;	
//}
//
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = 0;
//
//	printf("a = %d b = %d\n", a, b);//10 20
//	//3
//	//��� ^
//	//��������λ���
//	//01010-b
//	//10100-a
//	//11110
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	//2
//// 	a = a+b;//a=30  b=20
//// 	b = a-b;//a=30  b=10
//// 	a = a-b;//a=20  b=10
//	//1
//	//c = a;
//	// 	a = b;
//	// 	b = c;
//	printf("a = %d b = %d\n", a, b);//20 10
//
//	return 0;
//}

#include <string.h>
#include <stdlib.h>


int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("������1���Ӻ�ػ�,�������:������,��ȡ���ػ�!\n");
	scanf("%s", input);
	if(strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}




