//二分查找 
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//查找素k的位置 
	int k = 3;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0, right = sz - 1;
	while(left <= right)
	{
<<<<<<< HEAD
		//int mid = (left + right)/2;�����������
=======
		//int mid = (left + right)/2;（可能溢出）
>>>>>>> 18325cabdeef4e9561d0973dfa19e7bbef8542db
		int mid = left + (right - left) / 2 
		if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else if(arr[mid] > k)
		{
			right = mid -1;
		}
		else
		{
			printf("找到了，下标为%d\n",mid);
			break;
		}
	}
	if(left > right)
		printf("找不到\n");
	return 0;
}