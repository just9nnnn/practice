#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("�������������Ƚϴ�С:>");
	scanf("%d %d",&a, &b);
	int max = a > b ? a : b;
	printf("�������Ϊ:%d",max);
	return 0;
}