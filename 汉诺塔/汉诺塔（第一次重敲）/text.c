#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void move(char A, char C)
{
	//printf("A->C\n");
	printf("%c->%c\n", A, C);
}
void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		move(A, C);
	else
	{
		hanoi(n - 1, A, C, B);
		move(A, C);
		hanoi(n - 1, B, A, C);
	}
}

int main()
{
	int n = 0;
	printf("ÇëÊäÈë²ãÊý£º>");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}