#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char possword[20] = { 0 };
	printf("输入你的密码:>");
	scanf("%s", &possword);
	int tmp = getchar();
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	printf("输入(Y/N)确认密码:>");
	int ch = getchar();
	if (ch == 'Y')
		printf("验证成功\n");
	else
		printf("验证失败\n");
	return 0;
}