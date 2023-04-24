#define _CRT_SECURE_NO_WARNINGS
//法1：把每个单词存起来，然后放到数组里
//法2：往前找一个空格，找到单词就结束了，然后拷贝到另一个字符串里面去
//法3：逆序，先把整体逆序，再把每个单词逆序
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
	//输入
	gets(arr);//有空格
	//逆置
	int len = strlen(arr);
	reverse(arr, arr + len - 1);//逆序整个字符串
	char* start = arr;
	//逆序每个单词
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
	//输出
	printf("%s\n", arr);
	return 0;
}