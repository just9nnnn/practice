#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("########################\n");
	printf("######猜数字小游戏######\n");
	printf("######1.开始游戏.#######\n");
	printf("######0.退出游戏.#######\n");
	printf("########################\n");
}
void game()
{
	int tmp = rand() % 100 + 1;
	int guess = 0;
	while (!0)
	{
		printf("请输入你的数字(1~100):>");
		scanf("%d", &guess);
		if (guess < tmp)
		{
			printf("猜小了\n");
		}
		else if (guess > tmp)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你,猜对了!!!\n");
			Sleep(500);
			printf("游戏即将刷新!!!\n");
			Sleep(1300);
			system("cls");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入\n");
			Sleep(800);
			system("cls");
			break;
		}
	} while(input);
	printf("退出游戏\n");
	return 0;
}