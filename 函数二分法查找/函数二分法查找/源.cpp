#include <stdio.h>
int binary_search(int a[], int x, int y)
{
	int left = 0;
	int right = y - 1;
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (a[mid] > x)
		{
			right = mid - 1;
		}
		else if (a[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}		
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 4;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标为%d\n", ret);
	}
	return 0;
}