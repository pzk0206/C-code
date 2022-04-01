#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Max(int x, int y)
{
	if (y > x)
		x = y;
	return x;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = Max(a, b);
	printf("%d", c);
	return 0;
}