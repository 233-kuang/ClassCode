#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//������-��������
//int main()
//{
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	return 0;
//}
//
//int main()
//{
//	//INT_MAX
//	int num1 = 2147483646;
//	int num2 = 2147483646;
//
//	//int avg = (num1+num2)/2;
//	int avg = num1 + (num2-num1)/2;
//	printf("%d\n", avg);
//	return 0;
//}
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	total = money*2-1;
//	//total += money;
//	//empty = money;
//
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2 + empty%2; 
//	//}
//	printf("total = %d\n", total);
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
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
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