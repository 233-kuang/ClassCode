#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//չ��һƬ

void menu()
{
	printf("************************\n");
	printf("****    1. play     ****\n");
	printf("****    0. exit     ****\n");
	printf("************************\n");
}

void game()
{
	//���úõ��׵���Ϣ
	char mine[ROWS][COLS] = {0};//'0'
	//�Ų���׵���Ϣ
	char show[ROWS][COLS] = {0};//'*'

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}
//����ɨ�״���
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	//����
	test();
	system("pause");
	return 0;
}