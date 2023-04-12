#include <stdio.h>
//²»´¢´æ 
int main() 
{
    //0 1 2 3
    int i = 1, n = 0, max = 0;
    scanf("%d",&max);
    while(i<4)
    {
    	scanf("%d",&n);
    	if(n>max)
    	{
    		max = n;
    	}
    	i++; 
    }
    
	printf("%d",max);

    return 0;
}
