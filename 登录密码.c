#include<stdio.h>
#define Max 1024
int main()
{
	int i = 0;
	char password[] = "123456";
	for(i = 0;i<3;i++)
	{
		char password2[Max];
		printf("����������:>\n");
		scanf("%s",password2);
		if(strcmp(password,password2) == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
			continue;
		}
	}
	if(i>=3)
	{
		printf("�����������������˳�����\n");
	}
	return 0;
}

//��д 
int main()
{
	int i = 0;
	char password[Max] = { 0 };
	for(i = 0;i<3;i++)
	{
		printf("����������:>\n");
		scanf("%s",password);
		if(strcmp(password,"123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
			continue;
		}
	}
	if(i>=3)
	{
		printf("�����������������˳�����\n");
	}
	return 0;
}
