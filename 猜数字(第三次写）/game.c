#define _CRT_SECURE_NO_WARNINGS
void menu()
{
	printf("*******************************\n");
	printf("********     1. play     ******\n");
	printf("********     0. exit     ******\n");
	printf("*******************************\n");

}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("��С��\n");
		}
		else if (ret < guess)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}