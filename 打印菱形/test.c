#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int left = n / 2 ;
//	int right = n / 2 ;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		
//		for (j = 0; j < n; j++)
//		{
//			
//			if (j >= left && j <= right)
//				printf("*");
//			else
//				printf(" ");
//			
//		}
//		if(i < n / 2)
//		{
//			left--;
//			right++;
//		}
//		else
//		{
//			left++;
//			right--;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��2
int main()
{
	int line = 0;
	scanf("%d", &line);
	//��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}