#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("shutdown -s -t 60");
	printf("������������������Խ���1����֮���Զ��ػ�\n");
	int i = 0 ,count = 3;
	char input[20];
	for (i = 0; i < 3; i++)
	{
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
			
		else
		{
			count--;
			printf("������%d�λ��ᣬ����������\n");
		}
	}
	if (count == 0)
	{
		for (i = 0; i < 3; i++)
		{
			printf("�治���������Źػ�����\n");
		}
	}
	return 0;
}