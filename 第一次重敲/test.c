#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool if_prime(int i)
{
	if (i == 1 || i == 0)
		return 0;
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)//这里<即可
	{
		if (i % j == 0)
		{
			break;
		}
	}
	if(j >= sqrt(i))
	{
		return 1;
	}
}
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)//这里可以直接从2开始，然后+=2
	{
		if (if_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}