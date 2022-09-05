#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	printf("想成为成为大师？\n");
	printf("你会认真学习吗？(1/0)");
	scanf(" %d", &input);
	if (input == 1)
		printf("加油!\n");
	else
		printf("你没有选择！\n");
	return 0;
}