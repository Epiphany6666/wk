#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;//����jȫ�겻�ܷ���ѭ�����棡���� 
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%02d ", i, j,i*j);//��%2d���Ҷ��룬%-2d������룩 
			//���߰ѿո�ĳ�\t 
		}
		printf("\n");
	}
	return 0;
}

