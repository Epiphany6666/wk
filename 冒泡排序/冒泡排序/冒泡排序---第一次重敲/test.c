#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ð�ݷ�ʹ�����С��������
void bubble_sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)//������ֻҪ�Ƚ�sz-1
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
	printf("����ǰ�����飺\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sort(arr, sz);
	printf("���к�����飺\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}