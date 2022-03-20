#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!!!!";
	char arr2[] = "######################";
	int left = 0;
	int right = strlen(arr1) - 1;  //strlen求字符串长度需要引用头文件<string.h>
	while(left <= right )
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);       //单位毫秒，需要引用头文件<windows.h>，S大写
		system("cls");      //清空屏幕
		left++;
		right--;
	}
	return 0;
}