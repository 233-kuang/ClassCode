#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int money = 0;
	int empty = 0;
	int total = 0;
	scanf("%d", &money);

	total = money*2-1;
	
	/*
	total = money;
	empty = money;
	
	while(empty>=2)
	{
		total += empty/2;
		empty = empty/2+empty%2;
	}
	*/
	printf("%d\n", total); 

	return 0;
}


int main()
{
	char input[20] = {0};

	system("shutdown -s -t 60");
	//
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



//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//
//	//int c = (a+b)/2;
//	int c = a + (b-a)/2;
//
//	printf("%d\n", c);//15
//	return 0;
//}


//������
//
//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}

//
//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}
//





