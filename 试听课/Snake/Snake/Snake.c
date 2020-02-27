#define _CRT_SECURE_NO_WARNINGS 1

#include "Snake.h"

//���ù�������
void SetPos(int x, int y)
{
	COORD pos = {0};
	HANDLE hOutput = NULL;
	pos.X = x;
	pos.Y = y;
	//��ȡ��׼����ľ��(������ʶ��ͬ�豸����ֵ)
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	//���ñ�׼����Ϲ���λ��Ϊpos
	SetConsoleCursorPosition(hOutput, pos);
}

void WelcomeToGame()
{
	SetPos(40, 15);
	printf("��ӭ����̰����С��Ϸ");
	SetPos(40, 25);
	system("pause");
	system("cls");
	SetPos(25, 12);
	printf("�á�.��.��.���ֱ�����ߵ��ƶ��� F1Ϊ���٣�F2Ϊ����\n");
	SetPos(25, 13);
	printf("���ٽ��ܵõ����ߵķ�����\n");
	system("pause");
	system("cls");
}

void CreateMap()
{
	int i = 0;
	//��(0,0)-(56, 0)
	SetPos(0, 0);
	for(i=0; i<58; i+=2)
	{
		printf(WALL);
	}
	//��(0,26)-(56, 26)
	SetPos(0, 26);
	for(i=0; i<58; i+=2)
	{
		printf(WALL);
	}
	//��
	for(i=1; i<26; i++)
	{
		SetPos(0, i);
		printf(WALL);
	}
	for(i=1; i<26; i++)
	{
		SetPos(56, i);
		printf(WALL);
	}
}

void InitSnake(pSnake ps)
{
	pSnakeNode cur = NULL;
	int i = 0;
	//��ʼ��������
	cur = (pSnakeNode)malloc(sizeof(SnakeNode));
	cur->x = POS_X;
	cur->y = POS_Y;
	cur->next = NULL;
	for(i=1; i<=4; i++)
	{
		ps->_pSnake = (pSnakeNode)malloc(sizeof(SnakeNode));
		ps->_pSnake->next = cur;
		ps->_pSnake->x = POS_X + i*2;
		ps->_pSnake->y = POS_Y;
		cur = ps->_pSnake;
	}
	while(cur)
	{
		SetPos(cur->x, cur->y);
		printf(FOOD);
		cur = cur->next;
	}
	//��ʼ��̰����
	ps->_SleepTime = 200;
	ps->_Socre = 0;
	ps->_Status = OK;
	ps->_Dir = RIGHT;
	ps->_Add = 10;
}

void CreateFood(pSnake ps)
{
	//ά��ʳ��Ľڵ�
	pSnakeNode pFood = NULL;
	pSnakeNode cur = NULL;//��ȡָ����ͷ��ָ��
again:
	pFood = NULL;
	cur = ps->_pSnake;//��ȡָ����ͷ��ָ��
	srand((unsigned int)time(NULL));
	pFood = (pSnakeNode)malloc(sizeof(SnakeNode));
	//������x����Ӧ����2�ı����������ſ��ܺ���ͷ������롣
	do
	{
		pFood->x = rand()%53+2;
	}while(pFood->x % 2 != 0);
	pFood->y = rand()%25+1;
	
	//ʳ�ﲻ�ܺ������ͻ
	while(cur)
	{
		if(cur->x == pFood->x && cur->y == pFood->y)
		{
			free(pFood);
			pFood = NULL;
			//CreateFood(ps);
			goto again;
		}
		cur = cur->next;
	}
	SetPos(pFood->x, pFood->y);
	printf(FOOD);
	ps->_pFood = pFood;
}

void PrintHelpInfo()
{
	//��ӡ��ʾ��Ϣ
	SetPos(64, 15);
	printf("���ܴ�ǽ������ҧ���Լ�\n");
	SetPos(64, 16);
	printf("�á�.��.��.���ֱ�����ߵ��ƶ�.");
	SetPos(64, 17);
	printf("F1 Ϊ���٣�F2 Ϊ����\n");
	SetPos(64, 18);
	printf("ESC ���˳���Ϸ.space����ͣ��Ϸ.");
	SetPos(64,20);
	printf("���ؿƼ�@��Ȩ");
}
void pause()//��ͣ
{
	while(1)
	{
		Sleep(300);
		if(GetAsyncKeyState(VK_SPACE))
		{
			break;
		}
	}
}

int NextHasFood(pSnakeNode psn, pSnake ps)
{
	return (psn->x == ps->_pFood->x)&&(psn->y == ps->_pFood->y);
}
void EatFood(pSnakeNode psn, pSnake ps)
{
	pSnakeNode cur = NULL;

	psn->next = ps->_pSnake;
	ps->_pSnake = psn;
	cur = ps->_pSnake;
	//��ӡ��
	while(cur)
	{
		SetPos(cur->x, cur->y);
		printf(FOOD);
		cur=cur->next;
	}
	ps->_Socre += ps->_Add;
	CreateFood(ps);
}

void NoFood(pSnakeNode psn, pSnake ps)
{
	pSnakeNode cur = NULL;

	psn->next = ps->_pSnake;
	ps->_pSnake = psn;
	cur = ps->_pSnake;
	while(cur->next->next)
	{
		SetPos(cur->x, cur->y);
		printf(FOOD);
		cur = cur->next;
	}
	SetPos(cur->next->x, cur->next->y);
	printf(" ");
	free(cur->next);
	cur->next = NULL;
}

int KillByWall(pSnake ps)
{
	if(  (ps->_pSnake->x == 0)
		||(ps->_pSnake->x == 56)
		||(ps->_pSnake->y == 0)
		||(ps->_pSnake->y == 26))
	{
		ps->_Status = KILL_BY_WALL;
		return 1;
	}
	return 0;
}

int KillBySelf(pSnake ps)
{
	pSnakeNode cur = ps->_pSnake->next;
	while(cur)
	{
		if((ps->_pSnake->x == cur->x)
			&&(ps->_pSnake->y == cur->y))
		{
			ps->_Status = KILL_BY_SELF;
			return 1;
		}
		cur = cur->next;
	}
	return 0;
}

void SnakeMove(pSnake ps)
{
	pSnakeNode nextNode = (pSnakeNode)malloc(sizeof(SnakeNode));
	switch(ps->_Dir)
	{
	case UP:
		{
			nextNode->x = ps->_pSnake->x;
			nextNode->y = ps->_pSnake->y-1;
			//�����һ��λ�þ���ʳ��
			if(NextHasFood(nextNode, ps))
			{
				EatFood(nextNode, ps);
			}
			else//���û��ʳ��
			{
				NoFood(nextNode, ps);
			}
		}
		break;
	case DOWN:
		{
			nextNode->x = ps->_pSnake->x;
			nextNode->y = ps->_pSnake->y+1;
			//�����һ��λ�þ���ʳ��
			if(NextHasFood(nextNode, ps))
			{
				EatFood(nextNode, ps);
			}
			else//���û��ʳ��
			{
				NoFood(nextNode, ps);
			}
		}
		break;
	case LEFT:
		{
			nextNode->x = ps->_pSnake->x-2;
			nextNode->y = ps->_pSnake->y;
			//�����һ��λ�þ���ʳ��
			if(NextHasFood(nextNode, ps))
			{
				EatFood(nextNode, ps);
			}
			else//���û��ʳ��
			{
				NoFood(nextNode, ps);
			}
		}
		break;
	case RIGHT:
		{
			nextNode->x = ps->_pSnake->x+2;
			nextNode->y = ps->_pSnake->y;
			//�����һ��λ�þ���ʳ��
			if(NextHasFood(nextNode, ps))
			{
				EatFood(nextNode, ps);
			}
			else//���û��ʳ��
			{
				NoFood(nextNode, ps);
			}
		}
		break;
	}
	KillByWall(ps);
	KillBySelf(ps);
}

void GameStart(pSnake ps)
{
	//���ÿ���̨���ڵĴ�С��30�У�100��
	//mode ΪDOS����
	system("mode con cols=100 lines=30");
	//��ӡ��ӭ����
	WelcomeToGame();
	//��ӡ��ͼ
	CreateMap();
	//��ʼ����
	InitSnake(ps);
	//�����һ��ʳ��
	CreateFood(ps);
}


void GameRun(pSnake ps)
{
	//��ӡ�Ҳ������Ϣ
	PrintHelpInfo();
	do
	{
		SetPos(64, 10);
		printf("�÷֣�%d ",ps->_Socre);
		printf("ÿ��ʳ��÷֣�%d��", ps->_Add);
		if(GetAsyncKeyState(VK_UP) && ps->_Dir != DOWN)
		{
			ps->_Dir = UP;
		}
		else if(GetAsyncKeyState(VK_DOWN) && ps->_Dir != UP)
		{
			ps->_Dir = DOWN;
		}
		else if(GetAsyncKeyState(VK_LEFT) && ps->_Dir != RIGHT)
		{
			ps->_Dir = LEFT;
		}
		else if(GetAsyncKeyState(VK_RIGHT) && ps->_Dir != LEFT)
		{
			ps->_Dir = RIGHT;
		}
		else if(GetAsyncKeyState(VK_SPACE))
		{
			pause();
		}
		else if(GetAsyncKeyState(VK_ESCAPE))
		{
			ps->_Status = END_NOMAL;
			break;
		}
		else if(GetAsyncKeyState(VK_F1))
		{
			if(ps->_SleepTime >= 50)
			{
				ps->_SleepTime -= 30;
				ps->_Add += 2;
			}
		}
		else if(GetAsyncKeyState(VK_F2))
		{
			if(ps->_SleepTime < 350)
			{
				ps->_SleepTime += 30;
				ps->_Add -= 2;
				if(ps->_SleepTime == 350)
				{
					ps->_Add = 1;
				}
			}
		}
		Sleep(ps->_SleepTime);
		SnakeMove(ps);
	}while(ps->_Status == OK);
}
void GameEnd(pSnake ps)
{
	pSnakeNode cur = ps->_pSnake;
	//system("cls");
	SetPos(24,12);
	switch(ps->_Status)
	{
	case END_NOMAL:
		printf("�������˳���Ϸ\n");
		break;
	case KILL_BY_SELF:
		printf("��ײ���Լ��� ,��Ϸ����!\n");
		break;
	case KILL_BY_WALL:
		printf("��ײǽ��,��Ϸ����!\n");
		break;
	}
	while(cur)
	{
		pSnakeNode del = cur;
		cur = cur->next;
		free(del);
	}
}




