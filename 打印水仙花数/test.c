#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count(int n)
{
	if (n <= 9)
		return 1;
	else
		return 1 + count(n / 10);

}

int Pow(int n, int k)
{
	if (k >= 1)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(n , k);
}
//int main()
//{
//	//sumֻ�ܷŵ�ѭ���ڣ�
//	//int sum = 0;
//	int i = 0;
//	for(i = 0; i <= 100000; i++)
//	{
//		int k = count(i);
//		int sum = 0;
//
//		//������Ҳ�������������ѭ�����ڸı������ʮ��Σ�գ�����
//		/*while (i)
//		{
//			sum += Pow(i % 10, k);
//			i = i / 10;
//		}*/
//		int tmp = i;
//		while (tmp)
//		{
//			sum += Pow(tmp % 10, k);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	
//	return 0;
//}

////��2��
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;//�κ�һ����������һλ��
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 1;//��Ҫ��ѭ���ڲ�
//		}
//
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//	}
//}

//��װ�ɺ�����
int if_narcissistic_number(int i)
{
		int k = count(i);
		int sum = 0;
		int tmp = i;
		while (tmp)
		{
			sum += Pow(tmp % 10, k);
			tmp /= 10;
		}
		/*if (sum == i)
		{
			return 1;
		}
		else
		{
			return 0;
		}*/
		//����
		return sum == i;//sum ==i Ϊ�淵��1��Ϊ�ٷ���0
}

int main()
{
	int i = 0;
	for(i = 0; i <= 100000; i++)
	{
		if (if_narcissistic_number(i))
			printf("%d ", i);
	}
	return 0;
}

//����ע�⣬�⺯����pow�ķ���������double�������int���գ��ͻᶪʧ���ȣ�������������ȷ��֪��pow������Ǹ�����