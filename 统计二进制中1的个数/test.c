#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��1��%2��/2���õ�2���Ƶ�ÿһλ�͵õ�ʮ���Ƶ�ÿһλ��Ƚ�
//�����ָ����Ͳ����ˣ����ǿ��Ը���:�����������޷�����
//int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	//while (n / 2)
//	while(n)//������1������
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}

int count_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		if (n & 1 == 1)
			count++;
		n >>= 1;
	}
	return count;
}

int count_num_of_1(int n)
{
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & i) == 1)
		{
			count++;
		}
	}
	return count;
}

//������ķ���������Ч
int count_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//&һ������һ��1
		count++;
	}
	return count;
}
//���Ҫ�ж�һ�����ǲ���2��n�η���
//2�ļ��η�һ��ֻ��һ��1
if(n & (n - 1) == 0)//��Ϊ��ֻȥ��һ��1

int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = count_num_of_1(n);
	printf("%d\n", count);
	return 0;
}