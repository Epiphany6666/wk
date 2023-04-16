#include<stdio.h>
int main()
{
	int arr[3][3] = { {1,0,2}, {-1,3,1},{3,2,1} };
	int b[3][3];
	printf("转置前的矩阵：\n");
	int i = 0;
	int j = 0;
	for(i = 0; i < 2;i++)
	{
		for(j = 0; j < 3;j++)
		{
			b[j][i] = arr[i][j];
			printf("%4d",arr[i][j]);
		} 
		printf("\n");
	}
	printf("转置后的矩阵：\n");
	for(i = 0; i < 3;i++)
	{
		for(j = 0; j < 2;j++)
		{
			printf("%4d",b[i][j]);
		} 
		printf("\n");
	}
	return 0;
}
