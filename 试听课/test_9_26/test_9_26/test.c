#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
//
//int main()
//{
//	int num1 = 2147483646;
//	int num2 = 2147483646;
//	int avg = 0;
//
//	//scanf("%d%d", &num1, &num2);
//	//avg = (num1+num2)/2;
//	avg = num1 + (num2-num1)/2;
//	printf("avg = %d\n", avg);
//
//	return 0;
//}

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	//�ػ�
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�!\n");
	scanf("%s", input);
	//�ж�
	if(strcmp(input , "������") == 0)
	{
		//ȡ���ػ�
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}