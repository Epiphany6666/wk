#include<stdio.h>
#include<math.h>
int main()
{
	double a = 0, b = 0, c = 0;
	scanf("%lf%lf%lf",&a,&b,&c);
	double ret = 0;
	ret = b * b - 4*a*c;
	if(ret < 0)
	{
		printf("该方程没有实数根,但有两个复根\n");
		printf("分别为：%lf和%lf\n",(-b)/(2*a),sqrt(ret)/(2*a));
	}
	else if(ret == 0)
	{
		printf("该方程有两个相等的实数根为：%lf\n",((-2)*a)/(2*a));
	}
	else
	{
		printf("该方程两根分别为：%lf和%lf\n",(((((-2)*a)+sqrt(ret))/(2*a)),(((-2)*a)-sqrt(ret))/(2*a)));
	}
	return 0;
}
