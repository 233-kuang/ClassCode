#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <windows.h>
#include <time.h>
#include <stdio.h>


//����
enum DIRECTION
{
	UP=1,
	DOWN,
	LEFT,
	RIGHT
};

//��Ϸ״̬
enum GAME_STATUS
{
	OK,//��������
	KILL_BY_WALL,//ײǽ
	KILL_BY_SELF,//ҧ���Լ�
	END_NOMAL//��������
};

#define WALL "��"
#define FOOD "��"

//�ߵĳ�ʼλ��
#define POS_X 24
#define POS_Y 5

//����ڵ�
typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode *next;
}SnakeNode, *pSnakeNode;

typedef struct Snake
{
	pSnakeNode _pSnake;//ά�������ߵ�ָ��
	pSnakeNode _pFood;//ά��ʳ���ָ��
	enum DIRECTION _Dir;//��ͷ�ķ���Ĭ��������
	enum GAME_STATUS _Status;//��Ϸ״̬
	int _Socre;//��ǰ��÷���
	int _Add;//Ĭ��ÿ��ʳ��10��
	int _SleepTime;//ÿ��һ������ʱ��
}Snake, *pSnake;

void GameStart(pSnake ps);
void GameRun(pSnake ps);
void GameEnd(pSnake ps);

#endif //__SNAKE_H__
