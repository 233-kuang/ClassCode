#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void test()
{
	//������Ϸ
	char mine[ROWS][COLS];//����׵���Ϣ
	char show[ROWS][COLS];//����Ų鵽���׵���Ϣ
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'
	//������
	SetMine(mine, ROW, COL);
	PrintBoard(show, ROW, COL);
	PrintBoard(mine, ROW, COL);

	//����
	FindMine(mine, show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}