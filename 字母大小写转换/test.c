#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch = 0;
	while (scanf("%c", &ch) == 1)//scanf�ɹ���ȡ���ַ��ͷ��سɹ���ȡ�����ݵĸ�����û�����ͷ���EOF
		//����while (scanf("%c", &ch) ��= EOF)
		//����%c����֮��scanfû��ȡ���У���һ�ξͻ��ȡ
	{
		if (ch >= 'a' && ch <= 'z')
			printf("%c\n", ch - 32);//��������������Ӱ����
		/*else
			printf("%c\n", ch + 32);*/
			//����
		else if (ch >= 'A' && ch <= 'Z')
			printf("%c\n", ch + 32);
		getchar();//����\n
	}

	return 0;
}

//islower ----> �ж�Сд��ĸ��islower��ch��
//isupper ----> �жϴ�д��ĸ��isupper��ch��

//toupper ----> Сдת��д
//tolower ----> ��дתСд
//ͷ�ļ���<cytype.h>