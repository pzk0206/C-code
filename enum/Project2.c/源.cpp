#include<stdio.h>
enum Sex
{MALE,
 FEMALE,
 SECRET
};
int main()
{
	enum Sex s = MALE;
	printf("%d", MALE);
	printf("%d", FEMALE);
	printf("%d", s);
	return 0;
}