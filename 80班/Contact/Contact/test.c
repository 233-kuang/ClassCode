#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("******************************\n");
	printf("*******      1. add      *****\n");
	printf("*******      2. del      *****\n");
	printf("*******      3. search   *****\n");
	printf("*******      4. modify   *****\n");
	printf("*******      5. show     *****\n");
	printf("*******      6. sort     *****\n");
	printf("*******      0. exit     *****\n");
	printf("******************************\n");
}
void test()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con = {0};
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SeachContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	//����ͨѶ¼�Ĺ���
	test();
	return 0;
}

