#include<stdio.h>
 
int main()
{
	int i = 0, ret = 1,n = 0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		ret*=i;
	}
	printf("ret = %d\n",ret);
	return 0;
}
