#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	scanf("%d", &input);
	int i = 0;
	printf("ż��λ��:");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (input >> i) & 1);
	}
	printf("\n");
	printf("����λ��:");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (input >> i) & 1);
	}
	return 0;
}