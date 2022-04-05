#include <stdio.h>
void swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 2;
	int b = 3;
	printf("交换前a = %d b = %d", a, b);
	swap(&a, &b);
	printf("交换后a = %d b = %d", a, b);
	return 0;
}