#define _CRT_SECURE_NO_WARNINGS 1

#include "Snake.h"

//����̰������Ϸ

void test()
{
	Snake snake = {0};//��
	GameStart(&snake);
	GameRun(&snake);
	GameEnd(&snake);
}

int main()
{
	test();
	return 0;
}
