#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int* arr, int k, int sz)
{
	int left = 0; int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] <  k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//找到了返回下标，没找到返回-1，因为下标有可能是0
	//用ret来接收这个值，并且经过分析，需要知道元素的个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}//技巧：先把这个函数这么用给写好，再去写这个函数，这样返回类型，参数之类的也很明了了
	return 0;
}