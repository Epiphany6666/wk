#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int arr[], int i,int n)
{
	int j = 0;
	for (j = i; j < n; j++)
	{
		arr[j] = arr[j + 1];
	}
}
int main()
{
	int arr[50];
	int n = 0, i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int k;
	int a = 0;
	scanf("%d", &k);
	for (i = 0; i < n; i++)
		{
			if (k == arr[i])
			{
				fun(arr, i,n);
				a++;
				i--;
			}
		}
	
	for (i = 0; i < n - a; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50];//ţ������֧��C99��
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	scanf("%d", &del);
	int j = 0;//j��Ϊ�±�������λ�þ���������Ų�ɾ��������
	for (i = 0; i < n; i++)
	{
		for(i = 0; i < n; i++)
		{
			if (arr[i] != del)
			{
				arr[j++] = arr[i];
			}
		}
	}

	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
}

//����һ�������������飬����ɾ�������־ͷŽ�ȥ�����Ƿѿռ䣩
//��������
