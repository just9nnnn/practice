#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	printf("输入一个数，求它的阶乘:>");
	scanf("%d", &i);
	int a = 1;
	int b = 1;
	for (; b < i+1; b++)
	{
		a *= b;
	}
	printf("%d ", a);
	return 0;
}
