#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int a = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a =i*a;
	}
	printf("%d", a);
	return 0;
}