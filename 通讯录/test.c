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
	Contact con;//ͨѶ¼
	//int count = 0;//��¼�м����˵���Ϣ//��������̫�鷳��
	//��ʼ��ͨѶ¼
	InitContact(&con);//ģ�黯������������ʱ��ṹ����ʱ�򻹲���ֱ�ӳ�ʼ��
	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}