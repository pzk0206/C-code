#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, d, e, max, min;
	printf("������һ����λ������\n");
	scanf("%d", &a);
	if (a / 100 < 10 && a / 100 > 0)
	{
		b = a / 100;
		c = a % 100 / 10;
		d = a % 10;
		printf("����%d %d %d  ", d, c, b);
		if (b < c)
		{
			e = b;
			b = c;
			c = e;
		}
		if (b < d)
		{
			e = b;
			b = d;
			d = e;
		}
		if (c < d)
		{
			e = c;
			c = d;
			d = e;
		}
		printf("max = %d%d%d   ", b, c, d);
		printf("min = %d%d%d   ", d, c, b);
	}
	else
	{
		printf("�������ݴ���");
	}
	return 0;
}