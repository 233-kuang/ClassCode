#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע��,��õ�����1���Ӻ�ػ�,�������:������, ��ȡ���ػ�\n");
	scanf("%s", input);
	if(strcmp("������", input) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

// int main()
// {
// 	int a = 3;
// 	int b = 5;
// 	int c = 0;
// 	printf("a = %d b = %d\n", a, b);
// 	//��������λ���
// 	//011-b
// 	//101-a
// 	//110-
// 	//
// 	a = a^b;
// 	b = a^b;
// 	a = a^b;
// 	printf("a = %d b = %d\n", a, b);
// 
// 	return 0;
// }

// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = 0;
// 	printf("a = %d b = %d\n", a, b);
// 	a = a+b;
// 	b = a-b;
// 	a = a-b;
// 	printf("a = %d b = %d\n", a, b);
// 
// 	return 0;
// }

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("a = %d b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}



