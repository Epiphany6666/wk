#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a, b,c;
//	int max = 0;
//	int i = 0;
//	/*for (i = 0; i < 3; i++)
//	{
//		max > 
//	}*///这种方法在这里还行不通，除非用数组储存
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		max>
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int max = 0;
	int score = 0;
	 
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &score);
		//max > score ? max : score;
		max = max > score ? max : score;

	}
	printf("%d", max);
	return 0;
}