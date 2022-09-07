#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	int a = 158;
	printf("猜一个数:>");
	while (158 != input)
	{
		scanf("%d", &input);
		if (158 < input)
		{
			printf("太大了\n");
		}
		else if (158 > input)
		{
			printf("太小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
	return 0;
}