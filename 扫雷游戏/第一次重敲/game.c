#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------ɨ����Ϸ--------------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------ɨ����Ϸ--------------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;
	//x = rand() % row + 1;
	//y = rand() % col + 1;

	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;//���������Ҫ�ŵ�ѭ���ڲ���
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
			//break;//���ﲻ��break��
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	//return (board[x - 1][y - 1] +
	//	board[x - 1][y] +
	//	board[x][y - 1] +
	//	board[x][y + 1] +
	//	board[x + 1][y - 1] +
	//	board[x + 1][y] +
	//	board[x + 1][y + 1] - 8*'0');//ps������һ��Ҫע��ת��Ϊ����
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += board[x+i][y+j];
		}
	}
	count - board[x][y] - 8 * '0';
}

void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = row * col - EASY_COUNT;
	while(win)
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�������ѱ��Ų��������������:>");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, row, col);
					break;
				}
				else			
				{
					win--; 
					int ret = get_mine_count(mine, x, y);
					//show[x][y] = ret;
					show[x][y] = ret + '0';//ת��Ϊ�����ַ�������
					DisplayBoard(mine, row, col);

				}
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == 0)
	{
		printf("��ϲ�����׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}