#include<stdio.h>
//��������� 
int main()
{
	int i = 0, n = 0;
	int sum = 0; 
	int ret = 1; 
	int r = 0;
	scanf("%d",&n);
	//while(r<=n)
//	{
//		int ret = 1;
//		r = 1;
//		for(i = 1;i <= r;i++,r++)
//		{
//		ret*=i;
//		}
//		sum+=ret;
//	}
	//int j = 0;
//	for(j = 1;j <= n; j++) 
//	{
//		int ret = 1;
//		for(i = 1;i <= j;i++)
//		{
//			ret*=i;
//		
//		}
//		sum+=ret;
//	}

//�Ż���
	int j = 0;
//	for(j = 1;j <= n; j++) 
//	{
//		for(i = j;i <= j;i++)
//		{
//			ret*=i;
//		}
//		sum+=ret;
//	}
	
	//���Ż� 
	for(j = 1;j <= n; j++) 
	{
		ret*=j;
		sum+=ret;
	}
	printf("sum = %d\n",sum);
	return 0;
}
