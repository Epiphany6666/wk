#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//利用冒泡法使数组从小到大排列
void bubble_sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)//这里是只要比较sz-1
		{
			if (arr[j] > arr[j + 1])
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
	int arr[10] = { 9,5,3,1,4,6,7,8,2,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("排列前的数组：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sort(arr, sz);
	printf("排列后的数组：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}