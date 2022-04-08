#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime_number(int n)
{
	int i = 0;
	for (i = 2; i < n; i ++ )
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int count = 0;
	int a = 0;
	for (a = 100; a <= 200; a++)
	{
		if (prime_number(a) == 1)
		{
			count ++;
			printf(" %d ", count);
			printf(" %d\n ", a );
			
		}
	}
	return 0;
}