#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DigitSum(int a)
{
	if (a > 9)
	{
		return DigitSum(a / 10) + a % 10;
	}
	else
	{
		return a;
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", DigitSum(a));
	return 0;
}