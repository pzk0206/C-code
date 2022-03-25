#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int min = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	while (1)
	{
		if (a % min == 0 && b % min == 0)
		{
			printf("最大公约数为%d", min);
			break;
		}
		min--;
	}
	return 0;
}