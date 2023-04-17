#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int* arr, int sz, int k)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		//int mid = left + (right + left) / 2;
		int mid = left + (right - left) / 2;
		//if (mid > k)
		if(arr[mid]>k)
		{
			right = mid - 1;
		}
		//else if (mid < k)
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, sz, k);
	if (ret != -1)
	{
		printf("找到了，下标为：%d\n", ret);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}