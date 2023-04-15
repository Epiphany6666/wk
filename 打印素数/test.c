#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool is_prime(int i)
{
	int j = 0;
	if (i == 1)
		return 0;
	//for (j = 2; j < i; j++)
	//¼ò»¯
	for(j = 2;j<sqrt(i);j++)
	{
		if (i % j == 0)
			return 0;
	}
	if (j >= i)
	{
		return 1;
	}
}
int main()
{
	int i = 0;
	for (i = 1; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}