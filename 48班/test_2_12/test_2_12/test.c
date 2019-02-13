#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("****** 1. play    0.exit *****\n");
	printf("******************************\n");
}

void game()
{
	char board[ROW][COL];
	char ret = 0;
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	//'X'
	//'0'
	//'Q'
	//' '
	while(1)
	{
		player_move(board, ROW, COL);
		//
		ret = is_win(board, ROW, COL);
		if(ret != ' ')
		{
			break;
		}
		print_board(board, ROW, COL);
		computer_move(board, ROW, COL);
		//
		ret = is_win(board, ROW, COL);
		if(ret != ' ')
		{
			break;
		}
		print_board(board, ROW, COL);
	}
	if(ret == 'X')
	{
		printf("���Ӯ\n");
	}
	else if(ret == '0')
	{
		printf("����Ӯ\n");
	}
	else if(ret == 'Q')
	{
		printf("ƽ��\n");
	}
	print_board(board, ROW, COL);
}
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

