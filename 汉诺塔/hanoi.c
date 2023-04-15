#define _CRT_SECURE_NO_WARNINGS
#include"hanoi.h"
void move(char A, char C)
{
	printf("%c -> %c\n", A, C);
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

