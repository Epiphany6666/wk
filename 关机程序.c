#include<stdio.h>
int main()
{
	char input[20];
	int i = 0, count = 3;
	system("shutdown -r -t 60");
	printf("请注意，你的电脑将在60s内重启，如果输入：刘诗是猪，就取消关机\n");
	for(i = 0; i < 3; i++)
	{
		scanf("%s",input);
		if(strcmp(input,"刘诗是猪") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			count--;
			printf("请输入\"刘诗是猪\"，您还剩%d两次机会\n",count);
		}
	}
	if(count == 0)
	{
		for(i = 0;i<3 ;i++)
		{
			printf("真不听话，等着关机吧你\n");
		}
	}
	return 0;
}
