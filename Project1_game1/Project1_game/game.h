#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  _GAME_H_
#define  _GAME_H_

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComeputerMove(char board[ROW][COL], int row, int col);

//'x'玩家赢
//'o'电脑赢
//'p'平局
//'c'继续
char IsWin(char board[ROW][COL], int row, int col);

#endif
