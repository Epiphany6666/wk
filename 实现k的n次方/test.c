#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Pow(int k, int n)
//{
//	if (n == 1)
//		return k;
//	else
//		//return Pow(k, n - 1);
//		return k * Pow(k, n - 1);
//}

//这里没考虑完全
int Pow(int k, int n)
{
	if (n > 0)
	{
		return k * Pow(k, n - 1);
	}
	else if (n == 0)
	{
		return 1;
	}
	else
		return 1.0 / Pow(k, n - 1);//注意这里是1.0
}

int main()
{
	int k = 0;
	int n = 0;
	scanf("%d%d", &k, &n);
	printf("%d\n", Pow(k, n));
	return 0;
}