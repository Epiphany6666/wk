#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//法1：%2和/2，得到2进制的每一位和得到十进制的每一位相比较
//但这种负数就不行了，但是可以改造:将负数看成无符号数
//int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	//while (n / 2)
//	while(n)//这里是1就行了
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}

int count_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		if (n & 1 == 1)
			count++;
		n >>= 1;
	}
	return count;
}

int count_num_of_1(int n)
{
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & i) == 1)
		{
			count++;
		}
	}
	return count;
}

//但上面的方法都不高效
int count_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//&一个就少一个1
		count++;
	}
	return count;
}
//如果要判断一个数是不是2的n次方。
//2的几次方一定只有一个1
if(n & (n - 1) == 0)//因为它只去掉一个1

int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = count_num_of_1(n);
	printf("%d\n", count);
	return 0;
}