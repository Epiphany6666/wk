#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)
			count++;
		if (i % 10 == 0)
			count++;
	}
	printf("1~100֮�����������г���%d��9\n", count);
	return 0;
}