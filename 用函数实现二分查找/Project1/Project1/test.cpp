#include<stdio.h>
int find_elem(int* arr, int sz, int k)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (k > arr[mid])
		{
			//left = mid;
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			//right = mid;
			right = mid - 1;
		}
		else if(k == arr[mid])
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 9;//要查找的元素
	int sz = sizeof(arr) / sizeof(arr[0]);//ret
	int j = find_elem(arr, sz, k);//找到了返回下标，没找到返回-1
	if (j != -1)
	{
		printf("找到了，下标为：%d\n", j);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}