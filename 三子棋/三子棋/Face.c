#define _CRT_SECURE_NO_WARNINGS
#include "Face.h"
void InitBoard(char board[ROW][COL], int row, int col)//初始化棋盘，清空
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)//画出棋盘
{
    int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)

	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				printf("|");
			}
		}
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)//选手下棋

{
	int i = 0;
	int j = 0;
	while (1)
	{
		scanf("%d%d", &i, &j);
		if (i > 0 && i < row + 2 && j>0 && j < col + 2)
		{
			if (board[i-1][j-1] == ' ')
				board[i - 1][j - 1] = '*';
			else
				printf("非法输入，请重新输入\n");
			break;
		}
		else
			printf("非法输入，请重新输入\n");
    }
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
		while(1)
		{
			x = rand() % row;
			y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
}
char WhoWin(char board[ROW][COL], int row, int col)//判断输赢
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i][j + 1] == board[i][j + 2] == board[i][j + 3] == board[i][j + 4] && board[i][j] != ' ')
				return board[i][j];

			else if (board[i][j] == board[i + 1][j] == board[i + 2][j] == board[i + 3][j] == board[i + 4][j] && board[i][j] != ' ')
				return board[i][j];

			else if (board[i][j] == board[i + 1][j + 1] == board[i + 2][j + 2] == board[i + 3][j + 3] == board[i + 4][j + 4] && board[i][j] != ' ')
				return board[i][j];
			else
				return 0;
		}
	}

}



























































