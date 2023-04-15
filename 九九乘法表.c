#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;//这里j全完不能放在循环外面！！！ 
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%02d ", i, j,i*j);//（%2d：右对齐，%-2d：左对齐） 
			//或者把空格改成\t 
		}
		printf("\n");
	}
	return 0;
}

