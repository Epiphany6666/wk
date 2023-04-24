#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	while (scanf("%d%d%d", &a, &b, &c) != EOF )
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			//if (a == b || a == c || b == c)
			if ((a == b && b != c) || (a == c && b != c) || (b == c && a != c))
			{
				printf("Isosceles triangle!\n");
			}
			else if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			printf("Not a triangle!\n");
		}
	}
	return 0;
}