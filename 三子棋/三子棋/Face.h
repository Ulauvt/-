#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 10
#define COL 10
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char WhoWin(char board[ROW][COL], int row, int col);