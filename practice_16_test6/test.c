#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char possword[20] = { 0 };
	int i = 1;
	char ture[] = { "SQeggs" };
	for (i = 1; i < 4; i++)
	{
		printf("请输入密码:>");
		scanf("%s", &possword);
		if (strcmp(possword, ture) == 0)
		{
			printf("验证中...\n");
			Sleep(200);
			printf("密码正确\n");
			Sleep(200);
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("验证中...\n");
			Sleep(200);
			printf("密码错误\n");
			Sleep(200);
		}
		if (i == 4)
			printf("密码错误三次，请重启程序\n");
	}

	return 0;
}