#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

struct S
{
	char name[20];
	int age;
};

// size_t fwrite( const void *buffer, size_t size, size_t count, 
// 			  FILE *stream );


//int main()
//{
//	struct S s = {"����", 20};
//
//	FILE* pf = fopen("test.txt", "wb");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д����
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "rb");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//������
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d\n", s.name, s.age);
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
//	int ch = 0;
//	if(pf == NULL)
//		return 0;
//
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	putchar(ch);
//
//	printf("%d\n", ftell(pf));//
//	//fseek(pf, 3,SEEK_CUR);
//	//ch = fgetc(pf);
//	//putchar(ch);
//
//	//fseek(pf, -2,SEEK_CUR);
//	//ch = fgetc(pf);
//	//putchar(ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//IDE-���ɿ�������
//
// 
// int main()
// {
// 	FILE* pf = fopen("test.txt", "r");
// 	int ch = 0;
// 	if(pf == NULL)
// 	{
// 		perror("hehe");
// 		return 0;
// 	}
// 	fclose(pf);
// 	pf = NULL;
// 	return 0;
// }
//pwd   print work directory 
//ls   list �г���ǰĿ¼�µ��ļ����ļ���
//cd change directory �л�Ŀ¼
//mkdir  code -�����ļ���
//rm -rf code -ɾ���ļ���
//vim--�༭��
//��ͨģʽ-->i--->����ģʽ��д���룩--->ESC-->��ͨģʽ-->:-->������ģʽ
//
//gcc-C���Եı�����
//


//�����ⲿ����

extern int Add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}