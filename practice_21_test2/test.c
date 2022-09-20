#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int NumberOf1(int input)
{
	int count = 0;
	while (input)
	{
		input &= (input - 1);
		count++;
	}
	return count;
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	printf("%d", NumberOf1(input));
	return 0;
}