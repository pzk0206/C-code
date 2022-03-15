#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int a = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		int a = 1;
		for (i = 1; i <= n; i++)
		{
			a = i * a;
		}
		sum += a;
	}
	printf("%d", sum);
	return 0;
}