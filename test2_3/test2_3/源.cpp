#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char d = 0;
	int a , b , c , e;
	printf("请输入计算表达式:data op data2,op为运算符+.-.*./\n");
	scanf("%d %c %d", &a,&d,&b);
	if (d == '/' && b == 0)
		printf("数据不合法");
	else
	{
		switch (d)
		{
		case '+':
			e = a + b;
			break;
		case '-':
			e = a - b;
			break;
		case '*':
			e = a * b;
			break;
		case '/':
			e = a / b;
			break;
		}
		printf("%d %c %d = %d", a, d, b, e);
	}
	return 0;
}