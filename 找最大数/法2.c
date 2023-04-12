#include <stdio.h>
int main() 
{
    int arr[4] = {0};
    //0 1 2 3
    int i = 0;
    while(i<4)
    {
    	scanf("%d",&arr[i]);
    	i++; 
    }
    //找最大值
	//设第一个元素为最大值
	int max = arr[0];
	i = 1;
	while(i<4)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}//这里最好arr[i]放前面，这样就不用写else了
		i++; 
	} 
	printf("%d",max);

    return 0;
}
