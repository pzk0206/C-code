#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float x , y;
	printf("������x��ֵ\n");
	scanf("%f", &x);
	if (x < 0)
		y = x * x + x - 6;
	else if (10 > x && x >= 0 && x != 3)
		y = x * x - 5 * x + 6;
	else
		y = x * x - x - 1;
	printf("������ֵΪ%.2f", y);
	return 0;
}