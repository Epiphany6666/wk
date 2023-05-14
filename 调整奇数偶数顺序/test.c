#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void sort(int arr[])
//{
	//int arr1[10];
	//int i = 0;
	//int j = 0;
	//int t = 0;
	//for (i = 0; i < 10; i++)//法2遍历两遍
	//{
	//	if (arr[i] % 2 != 0)
	//	{
	//		arr[j++] = arr[i];
	//	}
	//	else
	//	{
	//		arr1[t++] = arr[i];
	//	}
	//}
	//int a = 0;
	//for (a = 0; a < t; a++)
	//{
	//	arr[a + j] = arr1[a];
	//}


//}

//法3：左边找偶数，右边找奇数，
void sort(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (arr[left] % 2 == 1)//从左边找一个偶数
		{
			left++;
		}
		while (arr[right] % 2 == 0)//从右边找一个奇数
		{
			right--;
		}
		if (left < right)
		{
			//int tmp = left;
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			right--;
			left++;
		}
	}
}

void DispArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	DispArr(arr, sz);
	sort(arr, sz);
	DispArr(arr, sz);
	return 0;
}