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
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	//while(1)
	//{
	//	//�������
	//	PlayerMove(board, ROW, COL);
	//	//�ж���Ӯ
	//	ret = Is_Win(board, ROW, COL);
	//	if (ret != 'C')
	//	{
	//		if (ret == '*')
	//		{
	//			printf("���Ӯ\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("ƽ��\n");
	//			break;
	//		}
	//	}
	//	DisplayBoard(board, ROW, COL);
	//	
	//	//��������
	//	ComputerMove(board, ROW, COL);
	//	DisplayBoard(board, ROW, COL);
	//	Is_Win(board, ROW, COL);//�ж���Ӯ
	//	if (ret != 'C')
	//	{
	//		if (ret == '#')
	//		{
	//			printf("����Ӯ\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("ƽ��\n");
	//			break;
	//		}
	//	}
	//}

	//��
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

		//��������
		ComputerMove(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}//��Ȼ��Ҫ�жϣ���Ϊʲô���ܳ�ѭ��һ���ж��أ�����
	DisplayBoard(board, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				//printf("������\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}