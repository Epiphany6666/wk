#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��1��
//int main()
//{
//	int n = 1;
//	int m = 1;
//	printf("��������������:>");
//	scanf("%d%d", &n, &m);
//	int min = n > m ? m : n;
//	int i = 0;
//	for (i = min; i > 1; i--)
//	{
//		if (n % i == 0 && m % i == 0)
//		{
//			break;
//		}
//	}
//	printf("���Լ��Ϊ��%d\n", i);
//	return 0;
//}

//��2��շת�����
int main()
{
	int n = 0;
	int m = 0;
	printf("��������������:>");
	scanf("%d%d", &n, &m);
	//while (n % m == 0)
	/*while (n % m)
	{
		int ret = n % m;
		n = m;
		m = ret;
	}*/
	//��ʱ�ᷢ���жϺ�ѭ�����涼����n % m���Ľ���
	int ret = 0;
	while (ret = n % m)
	{
		n = m;
		m = ret;
	}
	printf("���Լ��Ϊ��%d\n", m);
	return 0;
}

//����С��������m * n/���Լ��