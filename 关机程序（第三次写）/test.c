#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("shutdown -s -t 60");
	printf("请输入我是猪，否则电脑将在1分钟之后自动关机\n");
	int i = 0 ,count = 3;
	char input[20];
	for (i = 0; i < 3; i++)
	{
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
			
		else
		{
			count--;
			printf("您还有%d次机会，请重新输入\n");
		}
	}
	if (count == 0)
	{
		for (i = 0; i < 3; i++)
		{
			printf("真不听话，等着关机吧你\n");
		}
	}
	return 0;
}