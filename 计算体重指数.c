#include<stdio.h>
//�ջ�1.�����������ʱ�����ʹ������������� 
//2.������Ŀ 
int main()
{
	int weight,high;
	scanf("%d %d",&weight,&high);
	printf("%.2f\n",weight/(pow(high,2)*pow(0.1,4)));
	return 0;
}
