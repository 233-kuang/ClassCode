#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("a = %d b = %d\n",a , b);
//	//c = a;
//	//a = b;
//	//b = c;
//
//	/*a = a+b;
//	b = a-b;
//	a = a-b;*/
//	//01010-b
//	//10100-a
//	//11110
//
//	a = a^b;//1
//	b = a^b;//2
//	a = a^b;//3
//	//���������ƣ�λ���
//
//	printf("a = %d b = %d\n",a , b);
//
//	return 0;
//}

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





