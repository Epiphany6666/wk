//猜数字：
//电脑产生一个随机数（1~100）
//猜数字
//电脑需要反馈 猜大了 或者 猜小了 
//猜对了就结束 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("******  1.play  ********\n");
	printf("******  2.exit  ********\n");
	printf("************************\n");
}

void game()
{
	int guess = 0;
	//这里不能传常量，而应该传时间
	//头文件：#include<stdlib.h> 
	//时间戳
	//time函数：获取系统时间戳，参数是指针(用的时候传空指针即可），返回time_t的值就是时间撮，
	//本质上time_t是个整数，然后再强制类型转化成整形类型 
	//头文件：#include<time.h> 
	//1.生成随机数
	int ret = rand()%100 + 1;//如果想让它生成0~100的数字，只需要让它模上100即可
	//因为%100后得到的是余数，所以范围在0~99，再+1，就变成了1~100 
	 //rand函数返回一个随机的整形值，头文件：#include<stdlib.h>
	//生成的随机数范围：0 ~ RAND_MAX;
	//printf("%d\n",ret);
	//此处使用错误，调用函数之前，得调用srand随机数生成器
	pirntf("请猜数字:>\n");
	scanf("%d",&guess);
	if(guess<ret)
	{
		printf("猜小了\n"); 
	}
} 
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//不是每一次调用随机数的时候都要生成，只需要生成一次即可 
	//首先创建菜单 
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d",&input); 
		//用switch判断输入的值
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择!\n");
				break;
		} 
	}while(input);//巧妙之处：直接把input放这里，0为假，退出游戏 
	return 0;
}

//补充
//指针的初始化： int *p = NULL;(NULL本质上就是0） 
//2.随机数的生成：
//使用rand没使用srand：每次生成的随机数都是一样的
//使用srand时，参数如果设置常数，每次生成的随机数都一样 
//不是每次生成随机数的时候都要调用srand，而是整个工程只需要调用一次 
//并且srand也最好不要放到switch语句里面，srand和rand最好隔开一点 
