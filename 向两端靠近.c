//编写代码，演示多个字符从两端移动，向中间汇聚
#include<stdio.h>
#include<windows.h>
#include<stdlib.h> 
int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	//别忘了字符数组求长度是可以用strlen来求长度的 
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = sz - 2;//不是-1了！！！！
	//int right = strlen(arr1)-1;
	while(left <= right)
	{
		arr2[left] = arr1[left];//arr2在前面！！！ 
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);//单位是毫秒，并引用头文件 #include<windows.h>
		//如果想要一行往前缩进：清空屏幕
		//cmd：有很多指令cls：清理文件
		system("cls");//system是个库函数，它是用来执行系统命令的 ,并引用头文件#include<stdlib.h>  
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}
