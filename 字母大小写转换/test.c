#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch = 0;
	while (scanf("%c", &ch) == 1)//scanf成功读取到字符就返回成功读取到数据的个数，没读到就返回EOF
		//或者while (scanf("%c", &ch) ！= EOF)
		//并且%c换行之后，scanf没读取换行，下一次就会读取
	{
		if (ch >= 'a' && ch <= 'z')
			printf("%c\n", ch - 32);//正数整形提升不影响结果
		/*else
			printf("%c\n", ch + 32);*/
			//或者
		else if (ch >= 'A' && ch <= 'Z')
			printf("%c\n", ch + 32);
		getchar();//处理\n
	}

	return 0;
}

//islower ----> 判断小写字母：islower（ch）
//isupper ----> 判断大写字母：isupper（ch）

//toupper ----> 小写转大写
//tolower ----> 大写转小写
//头文件：<cytype.h>