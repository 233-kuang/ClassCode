#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
// 
// int main()
// {
// 	int ch = 0;
// 	while((ch=getchar()) != EOF)
// 	{
// 		putchar(ch);
// 	}
// 	return 0;
// }
//
//int main()
//{
//	FILE* pf = fopen("80.txt", "w");
//	char *p = "hello  bit";
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	while(*p)
//	{
//		fputc(*p, pf);
//		p++;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("80.txt", "r");
//	int ch = 0;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ȡ�ļ�
//
//	while((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("80.txt", "r");
//	char arr[20] = {0};
//	int ch = 0;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ȡ�ļ�
//	fgets(arr, 20, pf);
//
//	printf("%s\n", arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	system("pause");
//
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char name[20];
//};
//
//int main()
//{
//	struct S s = {100, "zhangsan"};
//	//���ļ�
//	FILE* pf = fopen("80.txt", "w");
//	if(pf == NULL)
//	{
//		//�쳣����
//		return 0;
//	}
//	//д�ļ�
//	//printf("%d %s", )
//	fprintf(pf, "%d %s", s.a, s.name);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//struct S
//{
//	int a;
//	char name[20];
//};


//�κ�һ��C���Եĳ���
//Ĭ�ϻ��3����
//stdin--��׼������
//stdout--��׼�����
//stderr--��׼������
//FILE*

//fscanf
//fprintf
//��ʽ���Ķ���д�ļ�
//
//int main()
//{
//	struct S s = {0};
//	//���ļ�
//	FILE* pf = fopen("80.txt", "r");
//	if(pf == NULL)
//	{
//		//�쳣����
//		return 0;
//	}
//	//���ļ�
//	//scanf("%d %s", )
//	//fscanf(pf, "%d %s", &(s.a), s.name);
//	fscanf(stdin, "%d %s", &(s.a), s.name);
//	//fprintf(pf, "%d %s\n", s.a, s.name);
//	fprintf(stdout, "%d %s\n", s.a, s.name);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//scanf--�ӱ�׼��������ȡ��ʽ��������
//printf--���׼���д���ʽ��������

//fscanf--��������������ȡ��ʽ��������
//fprintf--�����������д���ʽ��������

//sscanf-���ڴ��ж�ȡ��ʽ��������
//sprintf-д��ʽ�����ݵ��ڴ���


//
//struct S
//{
//	int a;
//	char name[20];
//	float sc;
//};
//
////���л��ͷ����л�
//int main()
//{
//	char buf[100] = {0};
//	struct S tmp = {0};
//
//	struct S s = {100, "zhangsan", 95.7f};
//	//sprintf
//	sprintf(buf, "%d %s %f\n", s.a, s.name, s.sc);
//	printf("%s", buf);//
//	sscanf(buf, "%d %s %f", &(tmp.a), tmp.name, &(tmp.sc));
//
//	printf("%d %s %f\n", tmp.a, tmp.name, tmp.sc);
//
//	system("pause");
//	return 0;
//}
//

//
//���ŷ�
//CVTE
//
//
//struct S
//{
//	char name[20];
//	int age;
//	float sc;
//};
//
////������
//
//int main()
//{
//	struct S s  = {0};
//	FILE* pf = fopen("80.txt", "rb");
//	if(pf == NULL)
//		return 0;
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %s %f\n", s.age, s.name, s.sc);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//  //д����
//	struct S s  = {"zhangsan", 20, 55.5};
//	FILE* pf = fopen("80.txt", "wb");
//	if(pf == NULL)
//		return 0;
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//


int main()
{
	FILE* pf = fopen("80.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		return 0;
	}
	//���ļ�
	ch = fgetc(pf);

	//��λ�ļ�ָ���λ��
	fseek(pf, 4, SEEK_SET);
	ch = fgetc(pf);//
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));//
	fclose(pf);
	pf = NULL;

	system("pause");
	return 0;
}