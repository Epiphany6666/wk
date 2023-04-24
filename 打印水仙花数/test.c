#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count(int n)
{
	if (n <= 9)
		return 1;
	else
		return 1 + count(n / 10);

}

int Pow(int n, int k)
{
	if (k >= 1)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(n , k);
}
//int main()
//{
//	//sum只能放到循环内！
//	//int sum = 0;
//	int i = 0;
//	for(i = 0; i <= 100000; i++)
//	{
//		int k = count(i);
//		int sum = 0;
//
//		//我这里也犯了这个错误，在循环体内改变变量，十分危险！！！
//		/*while (i)
//		{
//			sum += Pow(i % 10, k);
//			i = i / 10;
//		}*/
//		int tmp = i;
//		while (tmp)
//		{
//			sum += Pow(tmp % 10, k);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	
//	return 0;
//}

////法2：
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;//任何一个数至少是一位数
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 1;//不要在循环内部
//		}
//
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//	}
//}

//封装成函数：
int if_narcissistic_number(int i)
{
		int k = count(i);
		int sum = 0;
		int tmp = i;
		while (tmp)
		{
			sum += Pow(tmp % 10, k);
			tmp /= 10;
		}
		/*if (sum == i)
		{
			return 1;
		}
		else
		{
			return 0;
		}*/
		//或者
		return sum == i;//sum ==i 为真返回1，为假返回0
}

int main()
{
	int i = 0;
	for(i = 0; i <= 100000; i++)
	{
		if (if_narcissistic_number(i))
			printf("%d ", i);
	}
	return 0;
}

//这里注意，库函数的pow的返回类型是double，如果用int接收，就会丢失精度，但是这里是明确的知道pow算出来是个整数