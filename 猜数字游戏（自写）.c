//����д����������Ϸ
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
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
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
		printf("��ѡ��:>"); 
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				//printf("��������Ϸ\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�����������������\n");
		}
	}while(input);
	return 0;
} 
