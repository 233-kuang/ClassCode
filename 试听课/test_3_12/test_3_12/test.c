#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//������-��������
//int main()
//{
//	//�������
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	//��ͣ
//	system("pause");
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
//	/*total = money;
//	empty = money;
//
//	while(empty>=2)
//	{
//	total += empty/2;
//	empty = empty/2 + empty%2;
//	}*/
//	//
//	printf("total = %d\n", total);
//	system("pause");
//	return 0;
//}


#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1���Ӻ�ػ���������룺��������ȡ���ػ�\n");
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