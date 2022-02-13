#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = ADD(a,b);
	printf("%d",sum);
	return 0;
}
