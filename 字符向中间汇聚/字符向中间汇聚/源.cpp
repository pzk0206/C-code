#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!!!!";
	char arr2[] = "######################";
	int left = 0;
	int right = strlen(arr1) - 1;  //strlen���ַ���������Ҫ����ͷ�ļ�<string.h>
	while(left <= right )
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);              //��λ���룬��Ҫ����ͷ�ļ�<windows.h>��S��д
		left++;
		right--;
	}
	return 0;
}