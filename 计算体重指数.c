#include<stdio.h>
//收获：1.定义变量名的时候最好使用有意义的名字 
//2.看清题目 
int main()
{
	int weight,high;
	scanf("%d %d",&weight,&high);
	printf("%.2f\n",weight/(pow(high,2)*pow(0.1,4)));
	return 0;
}
