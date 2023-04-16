#include<stdio.h>
unsigned int DigitSum(unsigned int n)
{
	//if(n == 1)
//		return n%10;
//	else
//		return DigitSum(n/10);
	if(n > 9)
		return DigitSum + n % 10;
	else
		return n;
}
int main()
{
	unsigned int n = 0;
	scanf("%u",&n);
	int sum = DigitSum(n);
	printf("%d\n",sum);
	return 0;
}
