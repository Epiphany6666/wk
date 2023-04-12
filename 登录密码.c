#include<stdio.h>
#define Max 1024
int main()
{
	int i = 0;
	char password[] = "123456";
	for(i = 0;i<3;i++)
	{
		char password2[Max];
		printf("请输入密码:>\n");
		scanf("%s",password2);
		if(strcmp(password,password2) == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("输入错误\n");
			continue;
		}
	}
	if(i>=3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}
	return 0;
}

//简写 
int main()
{
	int i = 0;
	char password[Max] = { 0 };
	for(i = 0;i<3;i++)
	{
		printf("请输入密码:>\n");
		scanf("%s",password);
		if(strcmp(password,"123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("输入错误\n");
			continue;
		}
	}
	if(i>=3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}
	return 0;
}
