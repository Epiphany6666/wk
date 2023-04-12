//（自写）猜数字游戏
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("***********************************\n");
	printf("*******    1.plat    **************\n");
	printf("*******    0.exit    **************\n");
	printf("***********************************\n");
}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;//!!!
	printf("%d\n",ret);
	while(1)
	{
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>"); 
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				//printf("猜数字游戏\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
		}
	}while(input);
	return 0;
} 
