#include<stdio.h>
int main()
{
	int i = 0,n = 0, ret = 1, sum = 0;
	scanf("%d",&n);
	for(i = 1; i <= n;i++)//i只能从1开始！！！ 
	{
		ret*=i;
		sum+=ret;
	}
	printf("sum = %d\n",sum);
	return 0;
}
