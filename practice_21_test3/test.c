#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	scanf("%d", &input);
	int i = 0;
	printf("偶数位是:");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (input >> i) & 1);
	}
	printf("\n");
	printf("奇数位是:");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (input >> i) & 1);
	}
	return 0;
}