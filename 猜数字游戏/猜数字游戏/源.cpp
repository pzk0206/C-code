#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("****************************\n");
	printf("*******  1 . play   ********\n");
	printf("*******  0 . exit   ********\n");
	printf("****************************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	int guess = 0;                   //��������Ϸʵ��
	while (1)
	{
		printf("�������\n");
		scanf("%d", &guess);                                     //1.��������� 2.������
		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶���");
			break;
		}
	}
}
int main()
{
	
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("��Ϸ��ʼ\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}