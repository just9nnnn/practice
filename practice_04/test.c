#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int input = 0;
	printf("你被仙人看中\n");
	printf("是否开始修炼？(0\\1):>");
	scanf("%d", &input);
	if (input == 0)
		printf("你会后悔的！\n");
	else
	{
		int i = input;
		while (i < 1000)
		{
			printf("努力修炼!:%d\n", i);
			i++;
		}
		if (i = 1000)
		{
			printf("成功进阶！\n");
		}
	}
	return 0;
}