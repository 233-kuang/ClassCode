#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//
//char *GetMemory(void)
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
//
//int main()
//{
//	Test();
//	return 0;
//}

//
//int* Test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = Test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//	return 0;
//}
//
//int Test()
//{
//	int a = 10;
//	return a;
//}
//
//int main()
//{
//	int b = Test();
//	return 0;
//}
//
//void GetMemory2(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory2(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//void Test(void)
//{
//	char *str = (char *) malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
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
//	return 0;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	*p = 'w';
//	return 0;
//}


//
//struct S
//{
//	int a;
//	char arr[0];//��������
//};
//
//struct B
//{
//	int a;//4
//	char* arr;//4
//};
//
//void test2()
//{
//	char *ptr = NULL;
//	struct B* ps = (struct B*)malloc(sizeof(struct B));
//	ps->arr = (char *)malloc(100*sizeof(char));
//
//	ps->a = 20;
//	strcpy(ps->arr, "abcdef");
//	printf("%s\n", ps->arr);
//	printf("%d\n", ps->a);
//	ptr = realloc(ps->arr, 200s*sizeof(char));
//	if(ptr != NULL)
//		ps->arr = ptr;
//	//...
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//}
//
//void test1()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+100*sizeof(char));
//	struct S* ptr = NULL;
//	ps->a = 20;
//	strcpy(ps->arr, "abcdef");
//	printf("%s\n", ps->arr);
//	printf("%d\n", ps->a);
//
//	ptr = realloc(ps, sizeof(struct S)+200*sizeof(char));
//	if(ptr  != NULL)
//		ps = ptr;
//	//....
//	free(ps);
//	ps = NULL;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}
//





// int main()
// {
// 	printf("%d\n", sizeof(struct S));//
// 	return 0;
// }

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

//FILE

//FILE *fopen( const char *filename, const char *mode );

#include <stdio.h>
#include <errno.h>
#include <string.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0 ;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//���ļ�
//	ch = fgetc(pf);
//	//putchar(ch);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	int ch = 0 ;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fputs("hello world", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	char arr[20] = {0};
//	int ch = 0 ;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//scanf
//printf
//��ʽ���������������---��׼����/���
//

//fscanf
//fprintf
//��ʽ������ʽд���ļ����߱�׼���-fprintf
//��ʽ������ʽ�����ļ����߱�׼�����ȡ-fscanf
//

//
//sscanf
//sprintf
//

struct S
{
	char name[20];
	int age;
};

//
//���л��ͷ����л�
//xml
//json-cjson
//

int main()
{
	struct S s = {"����", 20};
	char buf[20] = {0};
	struct S tmp = {0};

	//��һ���ṹ������������Ը�ʽ������ʽת��Ϊ�ַ����洢
	sprintf(buf, "%s %d", s.name, s.age);
	
	//�ַ���ת��Ϊ�ṹ��
	sscanf(buf, "%s %d", tmp.name, &(tmp.age));

	printf("%s %d\n", tmp.name, tmp.age);

	return 0;
}

//
//struct S
//{
//	char name[20];
//	int age;
//};
//
////
////stdin -��׼����-����  FILE*
////stdout-��׼���-��Ļ FILE*
////stderr-��׼����-��Ļ FILE*
////
////
//
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("C:\\ClassCode\\51��\\test_11_18\\test.txt","r");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��
//	fscanf(pf, "%s %d", s.name, &(s.age));
//	//fscanf(stdin, "%s %d", s.name, &(s.age));//ok
//
//	//��ӡ
//	printf("%s %d\n", s.name, s.age);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//int main()
//{
//	struct S s = {"zhangsan", 20};
//	
//	FILE* pf = fopen("C:\\ClassCode\\51��\\test_11_18\\test.txt","w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д
//	fprintf(stdout, "%s %d", s.name, s.age);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

