#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入数字选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		case 1:
		{
			printf("游戏开始\n");
			game();
			break;
		}
		default:
		{
			printf("输入错误,请重新输入:\n");
			Sleep(1800);
			system("cls");
		}
		}
	} while (input);
	return 0;
}