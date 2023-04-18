#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	/*int n = 0;
	scanf("%d", &n);
	int k = 0;

	do
	{
		if()
	} while (k = n / 10);
	if(k == 0)*/

	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		//判断i是否为Lily Number
		int j = 0;
		int sum = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = (int)pow(10, j);//pow返回的是一个浮点数的值
			sum += (i % k) * (i / k);
		}
		if (sum == i)
			printf("%d ", i);
	}

	return 0;
}