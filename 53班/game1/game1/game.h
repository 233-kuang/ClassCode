
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//�����ķ��Ŷ���

#define ROW 10
#define COL 10

//����������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplatBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//'*'-���Ӯ
//'#'-����Ӯ
//'Q'-ƽ��
//'C'-����

char IsWin(char board[ROW][COL], int row, int col);