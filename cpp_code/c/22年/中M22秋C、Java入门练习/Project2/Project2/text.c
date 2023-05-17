#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"game.h"


void menu()
{
	printf("************************\n");
	printf("******  1.play    ******\n");
	printf("******  0.exit    ******\n");
	printf("************************\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("go!\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}