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
		printf("�÷���û��ʵ����,������������\n");
		printf("�ֱ�Ϊ��%lf��%lf\n",(-b)/(2*a),sqrt(ret)/(2*a));
	}
	else if(ret == 0)
	{
		printf("�÷�����������ȵ�ʵ����Ϊ��%lf\n",((-2)*a)/(2*a));
	}
	else
	{
		printf("�÷��������ֱ�Ϊ��%lf��%lf\n",(((((-2)*a)+sqrt(ret))/(2*a)),(((-2)*a)-sqrt(ret))/(2*a)));
	}
	return 0;
}
