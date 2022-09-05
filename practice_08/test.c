#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("输入两个数，比较大小:>");
	scanf("%d %d",&a, &b);
	int max = a > b ? a : b;
	printf("更大的数为:%d",max);
	return 0;
}