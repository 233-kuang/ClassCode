#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<12; i++)
//	{
//		//arr[i] = 0;
//		//printf("hello\n");//�⺯��
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	//01 00 00 00
//	//00 00 00 01
//	char* pa = (char*)&a;
//	if(*pa == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	/*int a = 0x11223344;
//	char* p = &a;
//	*p = 0;*/
//	//int* p = &a;
//	//*p  = 0;//������
//
//	//printf("%d\n", a);
//	//char ch = 'w';
//	//char* pc = &ch;
//	//int a = 1;
//	//0x 00 00 00 01
//
//	return 0;
//}
#include <string.h>

char Find(char arr[])
{
	int count[256] = {0};
	//ͳ��ÿ���ַ����ֵĸ���
	int i = 0;
	int len = strlen(arr);
	for(i=0; i<len; i++)
	{
		count[arr[i]]++;
	}
	//�ҵ�һ��ֻ����һ�ε��ַ�
	for(i=0; i<len; i++)
	{
		if(count[arr[i]] == 1)
			return arr[i];
	}

	return -1;//û��
}
int main()
{
	char arr[] = "aqwrawd";
	char ret = Find(arr);
	if(ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%c\n", ret);
	}

	return 0;
}