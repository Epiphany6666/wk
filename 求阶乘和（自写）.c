#include<stdio.h>
int main()
{
	int i = 0,n = 0, ret = 1, sum = 0;
	scanf("%d",&n);
	for(i = 1; i <= n;i++)//iֻ�ܴ�1��ʼ������ 
	{
		ret*=i;
		sum+=ret;
	}
	printf("sum = %d\n",sum);
	return 0;
}
