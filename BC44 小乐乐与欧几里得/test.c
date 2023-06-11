#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//int n = 0;
	//int m = 0;
	long n = 0;
	long m = 0;
	//int i = 0;
	int i = 0;
	long ret = 0;
	while (scanf("%ld%ld", &n, &m) == 2)
	{
		/*int a = n;
		int b = m;*/
		long max = (m > n ? m : n);
		long min = (m > n ? n : m);
		while (ret = n % m)
		{
			n = m;
			m = ret;
		}
		//long temp = 0;
		/*for (i = max;; i++)
		{
			if (i % max == 0 && i % min == 0)
			{
				break;
			}
		}*/
		printf("%ld", m + max * min / m);
	}
	return 0;
}