#define _CRT_SECURE_NO_WARNINGS

#include "Face.h"
#include<math.h>
int START()
{
	int ret = 0;
	printf("****************************************\n");
	printf("*******1.��ʼ��Ϸ 0������Ϸ*************\n");
	printf("*****************************************\n");
}
int game()
{
	printf("��Ϸ��ʼ\n");
	char board[ROW][COL] = { 0 };//���̴��������Ϣ
	InitBoard(board,ROW,COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	//��ʼ����
	while (1)
	{

		char ret = 0;
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);//��ӡ����
		WhoWin(board, ROW, COL);//�ж���Ӯ
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);//��ӡ����
		WhoWin(board, ROW, COL);//�ж���Ӯ
		ret= WhoWin(board, ROW, COL);
		if (ret=='*')
			printf("���Ӯ");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (i);
}
	int main()
	{
		test();
		return 0;
	}