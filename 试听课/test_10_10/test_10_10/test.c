#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//int i = 0;
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//for(i=0; i<10; i++)
//	//{
//	//	printf("%p\n", &arr[i]);
//	//	//arr[i] = 0;
//	//	//printf("�Ǻ�\n");
//	//}
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=11; i++)
//	{
//		arr[i] = 0;
//		printf("�Ǻ�\n");
//	}
//
//	return 0;
//}


#include <string.h>
#include <stdlib.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬������ڷ����ڹػ���������룺��������ȡ���ػ�\n");
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