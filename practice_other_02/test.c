#define _CRT_SECURE_NO_WARNINGS 1
# include "game.h"

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请输入数字选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("游戏开始!\n");
			game();//游戏进程
			break;
		}
		case 0:
		{
			printf("退出游戏!\n");
			break;
		}
		default:
		{
			printf("选择错误，请重新选择!\n");
			Sleep(1200);
			system("cls");
			break;
		}
		}
	} while (input);
	return 0;
}