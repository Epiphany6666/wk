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
			printf("�ҵ��ˣ��±�Ϊ%d",i);
				break;
		}
		
	}
	if(i>=sz) 
		printf("û�ҵ�");
		
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
		printf("�ҵ��ˣ��±�Ϊ%d",i);
		break;
	}
	}
	if(left>rigth)
	{
		printf("�Ҳ���");
	}
	
	return 0;
}
