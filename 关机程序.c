#include<stdio.h>
int main()
{
	char input[20];
	int i = 0, count = 3;
	system("shutdown -r -t 60");
	printf("��ע�⣬��ĵ��Խ���60s��������������룺��ʫ������ȡ���ػ�\n");
	for(i = 0; i < 3; i++)
	{
		scanf("%s",input);
		if(strcmp(input,"��ʫ����") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			count--;
			printf("������\"��ʫ����\"������ʣ%d���λ���\n",count);
		}
	}
	if(count == 0)
	{
		for(i = 0;i<3 ;i++)
		{
			printf("�治���������Źػ�����\n");
		}
	}
	return 0;
}
