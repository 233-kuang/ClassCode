#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//
agian:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if(strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto agian;
	}
	return 0;
}

//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//15
//	/*total = money;
//	empty = total;
//
//	while(empty>=2)
//	{
//	total = total + empty/2;
//	empty = empty/2 + empty%2;
//	}*/
//
//	total = money*2-1;
//
//	printf("total = %d\n", total);
//	system("pause");
//	return 0;
//}
//

//main-�캯��-��������
//
//int main()
//{
//	//printf-�⺯��-�������
//	printf("hehe\n");
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