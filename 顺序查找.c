#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int k = 2;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < sz; i++)
	{
		if(5 == arr[i])
		{
			printf("找到了，下标为%d",i);
				break;
		}
		
	}
	if(i>=sz) 
		printf("没找到");
		
	int left = 0,right = sz-1;
	while(left <= rigth)
	{
		int mid = (left+right)/2;
		if(arr[mid] < k)
		{
			left = mid + 1 ;
		}
		else if(arr[mid]<=5)
		{
			right = mid - 1;
		}
		else
	{
		printf("找到了，下标为%d",i);
		break;
	}
	}
	if(left>rigth)
	{
		printf("找不到");
	}
	
	return 0;
}
