#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char d = 0;
	int a , b , c , e;
	printf("�����������ʽ:data op data2,opΪ�����+.-.*./\n");
	scanf("%d %c %d", &a,&d,&b);
	if (d == '/' && b == 0)
		printf("���ݲ��Ϸ�");
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