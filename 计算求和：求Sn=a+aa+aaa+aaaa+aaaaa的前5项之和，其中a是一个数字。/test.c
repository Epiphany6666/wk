#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Add(int n, int m)
//{
//	if(m == 1)
//
//	else
//		return 
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		sum = Add(n, 5);
//	}
//	printf("%d", sum);
//	return 0;
//}

//˼·����ðѴ���д��ͨ��һ��
int main()
{
	//a��ɵ�n��֮��
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int i = 0;
	int sum = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d", sum);

	return 0;
}