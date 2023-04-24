#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void reverse_string(char arr, int sz)
void reverse_string(char* arr, int sz)
{
	char* left, * right;
	left = arr;
	right = arr;
	int i = 0;
	//for (i = 0; i < sz; i++)
	for (i = 0; i < sz - 1; i++)
	{
		right++;
	}
	while (right - left > 0)
	{
		//int tmp = *left;
		char tmp = *left;
		*left = *right;
		*right = tmp;
		/*right++;
		left--;*/
		left++;
		right--;
	}
}
int main()
{
	char arr[10001];//因为后面还要放'\0'
	//scanf("%s", arr);//scanf遇到scanf就不读了
	gets(arr);
	int sz = strlen(arr);
	reverse_string(arr,sz);
	printf("%s", arr);
}