#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	printf("输入一个数i，求<=i的数的阶乘的和:>");
	scanf("%d", &i);
	int a = 1;
	int b = 1;
	int c = 0;
	for(;b < i+1; b++)
	{
		a *= b;
		c += a;
	}
	printf("%d", c);
	return 0;
}
