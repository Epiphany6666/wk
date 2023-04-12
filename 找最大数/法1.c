#include <stdio.h>
int Max(int a,int b)
{
    return a>b?a:b;
}
int main() 
{
    int a, b, c, d, max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max = Max(a,b);
    max = Max(max,c);
    max = Max(max,d);
    printf("%d",max);

    return 0;
}
