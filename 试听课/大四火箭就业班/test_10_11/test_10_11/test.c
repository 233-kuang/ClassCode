#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//shutdown -s t 60
	char input[20] = {0};
	system("shutdown -s -t 60");

	while(1)
	{
		printf("��ע��,������1�����ڹؽ�,�������:������,��ȡ���ػ�!\n");
		scanf("%s", input);
		if(0 == strcmp(input, "������"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = 0;
//
//	printf("a = %d b = %d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//
//	//a = a+b;
//	//b = a-b;
//	//a = a-b;
//	//^ --- ��������λ��������
//	//
//	//01010-b
//	//10100-a
//	//11110-
//	//
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//
//	int c = a+(b-a)/2; 
//
//	//int c = (a+b)/2;//OK??
//	printf("%d\n", c);
//	return 0;
//}
//

//
//VC6.0
//
//������--��������
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