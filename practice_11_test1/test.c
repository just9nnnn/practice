#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("����һ�������ж���ż:>");
	scanf("%d", &a);
	if (0 == a % 2)
		printf("ż��\n");
	else
		printf("����\n");
	return 0;
}