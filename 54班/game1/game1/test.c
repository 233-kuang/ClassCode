#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****     1. play     ****\n");
	printf("*****     0. exit     ****\n");
	printf("**************************\n");
}

void game()
{
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����Ϸ
	while(1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}

//������Ϸ
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
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
			printf("ѡ�����!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	system("pause");
	return 0;
}