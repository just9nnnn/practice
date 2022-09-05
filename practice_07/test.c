#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Max(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入两个数，比较大小:>");
	scanf("%d %d",&num1 ,&num2);
	int max = Max(num1, num2);
	printf("更大的数为:%d\n",max);
	return 0;
}

