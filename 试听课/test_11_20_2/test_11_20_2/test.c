#define _CRT_SECURE_NO_WARNINGS 1

//
#include <stdio.h>

//������-��������
//int main()
//{
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;
//}

#include <limits.h>
//
//111111111111111111111111111111111111111111111111111111111111
//111111111111111111111111111111111111111111111111111111111111
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	//int avg = (num1+num2)/2;
//
//	int avg = num1 + (num2-num1)/2;//
//
//	printf("avg = %d\n", avg);//15
//
//	return 0;
//}
//

//�ػ�����

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	//1. �ػ�
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�!\n");
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




