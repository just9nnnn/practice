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
	printf("�������������Ƚϴ�С:>");
	scanf("%d %d",&num1 ,&num2);
	int max = Max(num1, num2);
	printf("�������Ϊ:%d\n",max);
	return 0;
}

