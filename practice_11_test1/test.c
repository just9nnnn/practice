#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("输入一个数，判断是否为奇数:>");
	scanf("%d", &a);
	if (0 == a % 2)
		printf("NO");
	else
		printf("YES");
	return 0;
}