#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	//最好不要用i，而习惯用year
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			printf("%d ", i);
	}
	return 0;
}