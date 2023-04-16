#include<stdio.h>
//二维数组传参怎么用指针来接收？ 
void DispArr(int* arr[2][3], int sz1, int sz2)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < sz1; i++)
	{
		for(j = 0; j<sz2;j++)
		{
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	//矩阵乘法 
	int arr1[2][3] = { {1,0,2}, {-1,3,1} };
	int arr2[3][2] = { {3,1},{2,1},{1,0} };
	int arr3[2][3] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for(j= 0; j < 3; j++)
		{
			int k = 0;
			arr3[i][j] = 0;//每次一次都需要初始化为0 
			for(k = 0; k < 3; k++)
			{
			arr3[i][j] += arr1[i][k] * arr2[k][j];
			} 
			
		}
	}
	int sz1 = sizeof(arr3)/sizeof(arr3[0]);//行数 
	int sz2 = sizeof(arr3[1])/sizeof(arr3[1][0]);//列数 
	DispArr(arr3, sz1, sz2);
	return 0;
}
