#define _CRT_SECURE_NO_WARNINGS 1

//���������ͷ�ļ�
#include <stdio.h>

//int main()
//{
//	//�⺯��
//	printf("hello world\n");
//	return 0;
//}
//<C�����ȱ��>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=11; i++)
//	{
//		//printf("&arr[%d] = %p\n",i,  &arr[i]);
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	char* pa = &a;
//	if(*pa == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	//int a = 0x11223344;
//	//char* pa = &a;
//	//*pa = 0;
//
//	//0x 00 00 00 01
//	//
//
//	//int a = 10;
//	//int* pa = &a;//ָ�����
//	//*pa = 20;
//	//printf("%d\n", a);
//// 	char ch = 'w';
//// 	char* pc = &ch;
//
//	return 0;
//}
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
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