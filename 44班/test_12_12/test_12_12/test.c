#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	int *p = (int *)malloc(INT_MAX);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		system("pause");
//		return 0;
//	}
//
//	*p = 20;
//  free(p);
//  p = NULL;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int *p = (int *)malloc(40);//40-10-int
//
//	int i = 0;
//	if(p == NULL)
//	{
//		system("pause");
//		return 0;
//	}
//	//ʹ��-Խ�����
//	for(i=0; i<=10; i++)
//	{
//		*(p+i) = i;
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//
//	//////////////////////////////////////////////////////////////////////////
//
//	free(pa);
//	pa = NULL;
//	return 0;
//}

//
//int main()
//{
//	int *p = (int *)malloc(40);//40-10-int
//
//	int i = 0;
//	if(p == NULL)
//	{
//		system("pause");
//		return 0;
//	}
//	//ʹ��-Խ�����
//	for(i=0; i<5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	//
//	free(p);
//	system("pause");
//	return 0;
//}
//
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);//printf("hello bit");
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}

//
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(NULL);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//
//void Test(void)
//{
//	char *str = (char *) malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if(str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
//
//��������
//
////
//
//struct S
//{
//	int n;//4
//	int arr[];//���������Ա
//};
//
//
//void test1()
//{
//	struct S* ptr = NULL;
//	struct S*ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	int i = 0;
//	ps->n = 10;
//	for(i=0; i<10; i++)
//	{
//		ps->arr[i] = 1;
//	}
//	//����
//	ptr = (int*)realloc(ps, sizeof(struct S)+20*sizeof(int));
//	if(ptr != NULL)
//		ps = ptr;
//	for(i=0; i<20; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i=0; i<20; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	free(ps);
//	ps = NULL;
//}
//
//struct S2
//{
//	int n;
//	int *arr;
//};
//
//void test2()
//{
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2));
//	int i = 0;
//	int *ptr = NULL;
//	ps->arr = (int*)malloc(10*sizeof(int));
//	for(i=0; i<10; i++)
//	{
//		ps->arr[i] = 1;
//	}
//	//����
//	ptr = (int*)realloc(ps->arr, 20*sizeof(int));
//	if(ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for(i=0; i<20; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i=0; i<20; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	//�ͷ�
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//}
//int main()
//{
//	test1();
//	test2();
//
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	//���ļ�
//	//����·��
//	//FILE* pf = fopen("C:\\ClassCode\\44��\\test_12_12\\test.txt", "r");
//	//���·��
//	FILE* pf = fopen(".\\..\\test.txt", "r");
//	
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//��д
//	//
//	//�ر��ļ�
//	fclose(pf);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include <windows.h>
//
//int main()
//{
//	while(1)
//	{
//		printf("hehe");
//		Sleep(1000);
//	}
//	return 0;
//}


//FILE

//FILE *fopen( const char *filename, const char *mode );
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}



int main()
{
	FILE* pf = fopen("test.txt", "r");
	char ret = 0;
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		system("pause");
		return 0;
	}
	//���ļ�
	ret = fgetc(pf);
	printf("%c\n", ret);//b
	ret = fgetc(pf);
	printf("%c\n", ret);//i
	ret = fgetc(pf);
	printf("%c\n", ret);//t

	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}
