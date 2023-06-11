#include"Contact.h"
void menu()
{
	printf("**************************************************\n");
	printf("****** 1. add                   2. del      ******\n");
	printf("****** 3. search                4.modify    ******\n");
	printf("****** 5. show                  6. sort     ******\n");
	printf("*******0. exit                                ****\n");
	printf("**************************************************\n");
}

int main()
{
	int input = 0;
	Contact con;//通讯录
	//int count = 0;//记录有几个人的信息//但是这样太麻烦了
	//初始化通讯录
	InitContact(&con);//模块化工作，而且有时候结构体有时候还不能直接初始化
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 7:
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}