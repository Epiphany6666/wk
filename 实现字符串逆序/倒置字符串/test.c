#define _CRT_SECURE_NO_WARNINGS
//��1����ÿ�����ʴ�������Ȼ��ŵ�������
//��2����ǰ��һ���ո��ҵ����ʾͽ����ˣ�Ȼ�󿽱�����һ���ַ�������ȥ
//��3�������Ȱ����������ٰ�ÿ����������
#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		
		char tmp = *left;
		*left = *right;
		//*right = *left;
		*right = tmp;
		right--;
		left++;
	}
}
int main()
{
	char arr[101] = { 0 };//'\0'
	//����
	gets(arr);//�пո�
	//����
	int len = strlen(arr);
	reverse(arr, arr + len - 1);//���������ַ���
	char* start = arr;
	//����ÿ������
	while(*start)
	{
		char* end = start;

		while (*end != ' ' &&*end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if(*end != '\0')
			end++;
		start = end;
	} 
	//���
	printf("%s\n", arr);
	return 0;
}