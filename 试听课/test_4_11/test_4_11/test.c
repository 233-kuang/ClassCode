#define _CRT_SECURE_NO_WARNINGS 1

//��׼�������ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>


//������-��������
//int main()
//{
//	//��ӡ����-�������-�⺯��
//	printf("hello world\n");//��ӡ
//	printf("hello world\n");//��ӡ
//	printf("hello world\n");//��ӡ
//	printf("hello world\n");//��ӡ
//	printf("hello world\n");//��ӡ
//
//	//��ͣ
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	//int c = (a+b)/2;
//	int c = a + (b-a)/2;
//	printf("%d\n", c);//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;//��ƿ
//	scanf("%d", &money);//10
//	//total = money;
//	//empty = money;
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2 + empty%2;
//	//}
//	total = money*2-1;
//
//	printf("total = %d\n", total);
//	system("pause");
//	return 0;
//}

#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if(strcmp(input, "������") == 0)//string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	system("pause");
	return 0;
}