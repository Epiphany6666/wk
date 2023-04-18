#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int arr[], int i,int n)
{
	int j = 0;
	for (j = i; j < n; j++)
	{
		arr[j] = arr[j + 1];
	}
}
int main()
{
	int arr[50];
	int n = 0, i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int k;
	int a = 0;
	scanf("%d", &k);
	for (i = 0; i < n; i++)
		{
			if (k == arr[i])
			{
				fun(arr, i,n);
				a++;
				i--;
			}
		}
	
	for (i = 0; i < n - a; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50];//牛客网是支持C99的
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	scanf("%d", &del);
	int j = 0;//j作为下标锁定的位置就是用来存放不删除的数据
	for (i = 0; i < n; i++)
	{
		for(i = 0; i < n; i++)
		{
			if (arr[i] != del)
			{
				arr[j++] = arr[i];
			}
		}
	}

	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
}

//方法一：创建两个数组，不是删除的数字就放进去（但是费空间）
//方法二：
