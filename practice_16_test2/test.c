#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	printf("����һ����i����<=i�����Ľ׳˵ĺ�:>");
	scanf("%d", &i);
	int a = 1;
	int b = 1;
	int c = 0;
	for(;b < i+1; b++)
	{
		a = a * b;
		c = c + a;
	}
	printf("%d", c);
	return 0;
}