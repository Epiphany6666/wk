#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//别忘了！
	}
}
void reverse_string(char* str, int len)
{

	reverse(str + 1, len - 2);
}

void reverse_string(char* str)
{
	char tmp = *str;
	int len = strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if(strlen(str + 1) >= 2)
	reverse(str + 1);
	*(str + len - 1) = tmp;
}

////若支持有多个参数
void reverse_string(char* str, int left, int right)
{
	char tmp = str[left];
	str[left] = str[right];
	str[right] = tmp;
	if(left < right)
		reverse_string(str,left+1,right-1)
}

int left = 0;
int right = strlen(str) - 1;
reverse_string(str, left, right);
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		int tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		//别忘了！
//		left++;
//		right--;
//	}
//}
int main()
{
	char str[] = "abcdefg";
	int len = my_strlen(str);//一定要记得写头文件
	reverse_string(str,len);
	//reverse_string(str);
	printf("%s\n", str);
	return 0;
}