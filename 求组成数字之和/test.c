#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);
	return 0;
}