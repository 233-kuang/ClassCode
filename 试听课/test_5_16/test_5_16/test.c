#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//
//	total = money*2-1;
//
//	//total = money;
//	//empty = money;
//	////
//	//while(empty>=2)
//	//{
//	//	total = total + empty/2;
//	//	empty = empty/2 + empty%2;
//	//}
//	printf("total = %d\n", total);
//	//printf("hehe\n");
//	//��ͣ
//	system("pause");
//	return 0;
//}

#include <string.h>

int main()
{
	char input[20] = {0};
	//�ػ�
	system("shutdown -s -t 60");
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
	return 0;
}