#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char n = 0;
	while (scanf("%c", &n) == 1)
	{
		if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))
		{
			printf("%c is an alphabet.\n",n);
		}
		//else if (n >= '0' && n <= '9')
		else
		{
			//printf("%c is not an alphabet.\n",n - '0');
			printf("%c is not an alphabet.\n", n);
		}
		getchar();
	}
	return 0;
}

//����
#include<stdio.h>
int main()
{
	char n = 0;
	while (scanf(" %c", &n) == 1)
		//��%cǰ�ӿո�������һ���ַ�֮ǰ���еĿհ��ַ�
	{
		if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))
		{
			printf("%c is an alphabet.\n", n);
		}
		//else if (n >= '0' && n <= '9')
		else
		{
			//printf("%c is not an alphabet.\n",n - '0');
			printf("%c is not an alphabet.\n", n);
		}
		//getchar();
	}
	return 0;
}

//ifalpha(ch) ---> �ж��ǲ�����ĸ