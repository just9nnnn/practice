#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("输入一个数，判断奇偶:>");
	scanf("%d", &a);
	if (0 == a % 2)
		printf("偶数\n");
	else
		printf("奇数\n");
	return 0;
}