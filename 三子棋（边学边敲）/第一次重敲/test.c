#include"game.h"
void menu()
{
	printf("***********************************\n");
	printf("********       1.play     *********\n");
	printf("********       0.exit     *********\n");
	printf("***********************************\n");

}

void game()
{
	char ret = 0;
	int board[ROW][COL];
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
	//while(1)
	//{
	//	//玩家下棋
	//	PlayerMove(board, ROW, COL);
	//	//判断输赢
	//	ret = Is_Win(board, ROW, COL);
	//	if (ret != 'C')
	//	{
	//		if (ret == '*')
	//		{
	//			printf("玩家赢\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("平局\n");
	//			break;
	//		}
	//	}
	//	DisplayBoard(board, ROW, COL);
	//	
	//	//电脑下棋
	//	ComputerMove(board, ROW, COL);
	//	DisplayBoard(board, ROW, COL);
	//	Is_Win(board, ROW, COL);//判断输赢
	//	if (ret != 'C')
	//	{
	//		if (ret == '#')
	//		{
	//			printf("电脑赢\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("平局\n");
	//			break;
	//		}
	//	}
	//}

	//简化
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

		//电脑下棋
		ComputerMove(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}//既然都要判断，那为什么不能出循环一起判断呢？？！
	DisplayBoard(board, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				//printf("三子棋\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);
	return 0;
}