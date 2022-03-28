#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("****************************\n");
	printf("*******  1 . play   ********\n");
	printf("*******  0 . exit   ********\n");
	printf("****************************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	int guess = 0;                   //猜数字游戏实现
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &guess);                                     //1.生成随机数 2.猜数字
		if (guess < ret)
			printf("猜小了\n");
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}
}
int main()
{
	
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("游戏开始\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);
	return 0;
}