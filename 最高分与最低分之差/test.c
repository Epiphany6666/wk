#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[100] = { 0 };
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	for (i = 0; i < n; i++)//这里i可以直接用1开始
	{
		max > arr[i] ? max : arr[i];
		min < arr[i] ? min : arr[i];
	}
	printf("%d", max - min);
	return 0;
}

//简化
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[100] = { 0 };
	int i = 0;
	int n = 0;
	int max = 0;
	int min = 100;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		max > arr[i] ? max : arr[i];
		min < arr[i] ? min : arr[i];
	}
	printf("%d", max - min);
	return 0;
}