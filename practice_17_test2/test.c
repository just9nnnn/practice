#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("输入两个数，求最大公约数:>");
	scanf("%d %d", &a, &b);
	while (0 != a % b)
	{
		int c = a % b;
		a = b;
		b = c;

	}
	printf("最大公约数为:%d", b);
	return 0;
}