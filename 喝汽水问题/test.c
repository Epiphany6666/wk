#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int money = 20;
//	int count = 0;//total
//	int empty = 0;
//	while (money)
//	{
//		while(money)
//		{
//				money -= 1;
//				empty++;
//				count++;
//		}
//		while (empty >1)
//		{
//			empty-=2;
//			count++;
//		}
//	}
//	printf("%d", count);
//}

int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;//total
	int empty = money;
	while (empty >= 2)
		{
			total += empty / 2;
			empty = empty / 2 + empty % 2;
		}
	if (money > 0)
		printf("%d\n", total);
	else
		printf("%d\n", 0);
}

//¹æÂÉ£º2 * money - 1
if (money > 0)
	printf("%d\n", 2 * money - 1);
else
	printf("%d\n", 0);