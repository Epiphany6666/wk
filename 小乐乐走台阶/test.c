#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fib(int n)
{
	/*if (n == 1)
		return 1;
	else if (n == 2)*/

	if(n<=2)
		return n;
	else
		return fib(n - 1) + fib(n-2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);

	printf("%d", ret);
}