#define _CRT_SECURE_NO_WARNINGS

#include "Face.h"
#include<math.h>
int START()
{
	int ret = 0;
	printf("****************************************\n");
	printf("*******1.开始游戏 0结束游戏*************\n");
	printf("*****************************************\n");
}
int game()
{
	printf("游戏开始\n");
	char board[ROW][COL] = { 0 };//棋盘存放走棋信息
	InitBoard(board,ROW,COL);//初始化数组
	DisplayBoard(board, ROW, COL);//打印棋盘
	//开始下棋
	while (1)
	{

		char ret = 0;
		PlayerMove(board, ROW, COL);//玩家走棋
		DisplayBoard(board, ROW, COL);//打印棋盘
		WhoWin(board, ROW, COL);//判断输赢
		ComputerMove(board, ROW, COL);//电脑走棋
		DisplayBoard(board, ROW, COL);//打印棋盘
		WhoWin(board, ROW, COL);//判断输赢
		ret= WhoWin(board, ROW, COL);
		if (ret=='*')
			printf("玩家赢");
	}

}

int test()
{
	int i = 0;
		START();
	do
	{
		scanf("%d", &i);
		printf("%d\n", i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (i);
}
	int main()
	{
		test();
		return 0;
	}