#define _CRT_SECURE_NO_WARNINGS 1
//��̬�ڴ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//void Test()
//{
//	//��̬����
//	int* p = (int*)malloc(40);
//	//ʹ��
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i+1;
//	}
//	if(1)
//	{
//		return;
//	}
//
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//�ͷ�
//	free(p);
//}
//int main()
//{
//	//int a = 0;//4
//	//int arr[10] = {0};//40
//	//��̬�����ڴ棬�ͷ��ڴ�--��̬�ڴ����
//	//malloc
//	//calloc
//	//realloc
//	//free
//	//�ڴ�й©
//
//	Test();
//	system("pause");
//
//	return 0;
//}
//
//
//int main()
//{
//	int*p = (int*)malloc(40);
//	int i = 0;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ٳɹ�
//	//ʹ��
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i+1;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	free(p);
//	p = NULL;
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//ʹ��
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int*p = (int*)calloc(5, sizeof(int));
//	int i = 0;
//	int *ptr = NULL;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//ʹ��
//	for(i=0; i<5; i++)
//	{
//		*(p+i) = i+1;
//	}
//	for(i=0; i<5; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	printf("\n");
//	//realloc
//	//��չ
//	ptr = realloc(p, 400);
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	printf("\n");
//	//�ͷ�
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

int main()
{
	realloc(NULL, 40);//malloc
	return 0;
}