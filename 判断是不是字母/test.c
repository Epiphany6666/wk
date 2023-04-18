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

//或者
#include<stdio.h>
int main()
{
	char n = 0;
	while (scanf(" %c", &n) == 1)
		//在%c前加空格：跳过下一个字符之前所有的空白字符
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

//ifalpha(ch) ---> 判断是不是字母