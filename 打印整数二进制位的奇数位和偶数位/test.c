#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//这种题有争议，第一位是从第一位开始算还是第0位
//void print_binary(int n)
//{
//	int i = 0;
//	//for (i = 0; i < 32; i++)
//	for (i = 0; i < 32; i+=2)
//	{
//		printf("%d", (n | (1 >> (32 - i))));
//	}
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d", (n | (1 >> (32 - i))));
//	}
//
//}

//void print_binary(int n)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	for (i = 31; i <= 1; i += 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;

	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	for (i = 31; i <= 1; i += 2)
	{
		printf("%d", (n >> i) & 1);
	}

	return 0;
}