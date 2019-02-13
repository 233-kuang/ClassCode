#define _CRT_SECURE_NO_WARNINGS 1
//test.c ������������Ϸ��
//game.h ��Ϸģ��ĺ�������
//game.c ��Ϸģ��ĺ���ʵ��

//���Ӯ-'X'
//����Ӯ-'0'
//ƽ��---'P'
//����---'C'

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("*****    1.play  0.exit   ****\n");
	printf("******************************\n");
}

void game()
{
	char ret = 0;
	//�洢���ݵ�����
	char board[ROW][COL] = {0};
	//��ʼ�����̵�ÿ��λ��Ϊ�ո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if(ret == 'X')
	{
		printf("���Ӯ\n");
	}
	else if(ret == '0')
	{
		printf("����Ӯ\n");
	}
	else if(ret == 'P')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
void test()
{
	//��������Ϸ�Ĳ���
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
			printf("ѡ�����, ����ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

