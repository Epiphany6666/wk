#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					printf("*");
				else if (i + j == n - 1)
					printf("*");

				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}