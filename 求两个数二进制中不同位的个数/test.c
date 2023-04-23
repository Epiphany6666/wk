#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//·¨1£º
int count_diff_bit(int n, int m)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >>i) & 1))
			count++;
	}
	return
}

//·¨2£º
int count_diff_bit(int n, int m)
{
	int count = 0;
	int i = 0;
	int c = n ^ m;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1)
			count++;
	}
	return
}

int count_diff_bit(int n, int m)
{
	int count = 0;
	int i = 0;
	int ret = n ^ m;
	while(ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	return
}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n,&m);
	int ret = count_diff_bit(n,m);
	printf("%d\n", ret);
	return 0;
}