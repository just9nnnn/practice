#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	printf("����һ�����������Ľ׳�:>");
	scanf("%d", &i);
	int a = 1;
	int b = 1;
	for (; b < i+1; b++)
	{
		a = a * b;
	}
	printf("%d ", a);
	return 0;
}