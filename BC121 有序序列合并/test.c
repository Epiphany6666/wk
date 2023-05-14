#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	//不支持变长数组，直接放1000
	int arr1[1000];
	int arr2[1000];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int j = 0;
	int t = 0;
	/*for (i = 0; i < n + m; i++)
	{
		if (arr1[t] < arr2[j])
		{
			printf("%d ", arr1[t++]);
		}
		else
		{
			printf("%d ", arr2[j++]);
		}
	}*/

	while (t <n && j < m)
	{
		if (arr1[t] < arr2[j])
		{
			printf("%d ", arr1[t++]);
		}
		else
		{
			printf("%d ", arr2[j++]);
		}
	}
	/*if (j < m)
		while (j < m)
		{
			printf("%d ", arr2[j++]);
		}
	if (t < n)
		while (t < n)
		{
			printf(" %d ", arr1[t++]);
		}*/
	//法2：
	if (t < n)
	{
		for (; t < n; t++)
		{
			printf("%d ", arr1[t++]);
		}
	}
	else
	{
		for (; j < m; j++)
		{
			printf("%d ", arr2[j]);
		}
	}
	return 0;
}