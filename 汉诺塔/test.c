#define _CRT_SECURE_NO_WARNINGS
#include"hanoi.h"
#include<stdio.h>
int main()
{
	int n = 0;
	printf("������ģ��ĸ���:>");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}