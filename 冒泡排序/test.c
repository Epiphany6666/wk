#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void  bubble_sort(int*arr, int sz)
{
	int i = 0, j = 0;
	/*for (i = 0; i < sz; i++)
	{
		for (j = i; j < sz ; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}*/
	//正确的冒泡排序核心思想：相邻的两两比较
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
	}
}
int main()
{
	int arr[] = { 4,2,6,8,1,3,9,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);//sz只能在函数外部求
	printf("排序前：\n");
	print(arr,sz);

	bubble_sort(arr, sz);
	printf("排序后：\n");
	print(arr, sz);
	return 0;
}