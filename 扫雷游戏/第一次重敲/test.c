#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("*****************************************\n");
	printf("*******          1. play        *********\n");
	printf("*******          0. exit        *********\n");
	printf("*****************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');//注意这里是11个格子全部要初始化
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//设置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//排查雷
	Find_Mine(mine, show,ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("扫雷游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}