#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("zhangsan");//ok
//		system("pause");
//		return 0;
//	}
//	//д�ļ�
//	fputc('w', pf);
//	fputc('e', pf);
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//stdin
//	//stdout
//	//stderr
//
//
//	//int ch = fgetc(stdin);//�ӱ�׼����(����)�ж�ȡ
//	//fputc(ch, stdout);//������д����׼�������Ļ��
//
//	//printf("%c\n", ch);
//	//putchar();
//	//FILE* pf = fopen("test.txt", "r");
//	//if(pf == NULL)
//	//{
//	//	//printf("%s\n", strerror(errno));
//	//	perror("zhangsan");//ok
//	//	system("pause");
//	//	return 0;
//	//}
//	////���ļ�
//	//printf("%c\n", fgetc(pf));
//	//printf("%c\n", fgetc(pf));
//
//
//	//fclose(pf);
//	//pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("zhangsan");//ok
//		system("pause");
//		return 0;
//	}
//	//дһ��
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	char buf[20] = {0};
//	if(pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("zhangsan");//ok
//		system("pause");
//		return 0;
//	}
//	//��һ��
//	fgets(buf, 20, stdin);
//	fputs(buf, stdout);
//	//printf("%s", buf);//hello bit
//	//fgets(buf, 20, pf);
//	//printf("%s", buf);//hello world
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//
//scanf/printf
//��ʽ��������������
//fscanf/fprintf
//����������ĸ�ʽ������������
//sscanf/sprintf
//���ַ����л�ԭһ����ʽ��������/�Ѹ�ʽ��������ת��Ϊ�ַ���
//


//struct S
//{
//	char name[20];
//	int age;
//};

//int printf(                const char *format [, argument]... );
//int fprintf( FILE *stream, const char *format [, argument ]...);
//int sprintf( char *buffer, const char *format [, argument] ... );


//
//int main()
//{
//	struct S s = {"zhangsan", 20};
//
//	FILE*pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		perror("open file for write");
//		system("pause");
//		return 0;
//	}
//	//д�ļ�
//	//printf("%s %d\n", s.name, s.age);
//	fprintf(pf, "%s %d\n", s.name, s.age);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}


//int scanf(                const char *format [,argument]... );
//int fscanf( FILE *stream, const char *format [, argument ]... );

// 
// int main()
// {
// 	struct S s = {0};
// 
// 	FILE*pf = fopen("test.txt", "r");
// 	if(pf == NULL)
// 	{
// 		perror("open file for read");
// 		system("pause");
// 		return 0;
// 	}
// 	//���ļ�
// 	//scanf("%s %d", s.name, &(s.age));
// 	fscanf(stdin, "%s %d", s.name, &(s.age));
// 	//��ӡ
// 	printf("%s %d\n", s.name, s.age);
// 	//�ر��ļ�
// 	fclose(pf);
// 	pf = NULL;
// 	system("pause");
// 	return 0;
// }
// 
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S s = {"lisi", 34};
//	struct S tmp = {0};
//
//	char arr[20] = {0};
//	//
//	//���л��ͷ����л�
//	//
//	//�Ѹ�ʽ��������ת���ַ���
//	sprintf(arr, "%s %d", s.name ,s.age);
//	printf("%s\n", arr);//
//	//���ַ���ת��Ϊ��ʽ��������
//	sscanf(arr, "%s %d", tmp.name, &(tmp.age));
//	printf("%s %d\n", tmp.name, tmp.age);
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	struct S s = {"����", 20, 3.14f};
//	if(pf == NULL)
//	{
//		perror("open file for write\n");
//		system("pause");
//		return 0;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");
//	struct S s = {0};
//	if(pf == NULL)
//	{
//		perror("open file for write\n");
//		system("pause");
//		return 0;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	//���� 20 3.14
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}


//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	if(pf == NULL)
//	{
//		perror("open file for read\n");
//		system("pause");
//		return 0;
//	}
//	//���ļ�
//	ch = fgetc(pf);
//	putchar(ch);
//	//�����ļ�ָ��
//	//fseek(pf, 3,SEEK_SET);
//	printf("%d\n", ftell(pf));//1
//	ch = fgetc(pf);
//	putchar(ch);
//	printf("%d\n", ftell(pf));//1
//	rewind(pf);
//	printf("%d\n", ftell(pf));//1
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}



int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		perror("open file for read");
		system("pause");
		return 0;
	}
	//���ļ�
	while((ch=fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	//
	if(ferror(pf))
	{
		printf("��ȡʧ��\n");
	}
	else if(feof(pf))
	{
		printf("��ȡ����������EOF\n");
	}
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}
//
//pwd  print work directory
//cd   change directory
//ls   list
//mkdir  make directory
//vim --�༭��
//gcc --������
//eg: gcc test.c
//rm -remove
//.  ��ǰĿ¼
//.. ��һ��Ŀ¼
//
//


