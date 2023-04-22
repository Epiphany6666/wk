#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//法1：
//int main()
//{
//	int n = 1;
//	int m = 1;
//	printf("请输入两个数字:>");
//	scanf("%d%d", &n, &m);
//	int min = n > m ? m : n;
//	int i = 0;
//	for (i = min; i > 1; i--)
//	{
//		if (n % i == 0 && m % i == 0)
//		{
//			break;
//		}
//	}
//	printf("最大公约数为：%d\n", i);
//	return 0;
//}

//法2：辗转相除法
int main()
{
	int n = 0;
	int m = 0;
	printf("请输入两个数字:>");
	scanf("%d%d", &n, &m);
	//while (n % m == 0)
	/*while (n % m)
	{
		int ret = n % m;
		n = m;
		m = ret;
	}*/
	//此时会发现判断和循环里面都用了n % m，改进：
	int ret = 0;
	while (ret = n % m)
	{
		n = m;
		m = ret;
	}
	printf("最大公约数为：%d\n", m);
	return 0;
}

//求最小公倍数：m * n/最大公约数