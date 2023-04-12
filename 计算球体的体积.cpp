#include<stdio.h>
//收获：结算结果为浮点数，两端至少有一个为浮点数 
int main()
{
	double r = 0,t = 3.1415926;
	scanf("%lf",&r);
	printf("%.3lf\n",4/3.0*t*r*r*r);
	return 0;
}
