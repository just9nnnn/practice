#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("########################\n");
	printf("######������С��Ϸ######\n");
	printf("######1.��ʼ��Ϸ.#######\n");
	printf("######0.�˳���Ϸ.#######\n");
	printf("########################\n");
}
void game()
{
	int tmp = rand() % 100 + 1;
	int guess = 0;
	while (!0)
	{
		printf("�������������(1~100):>");
		scanf("%d", &guess);
		if (guess < tmp)
		{
			printf("��С��\n");
		}
		else if (guess > tmp)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��,�¶���!!!\n");
			Sleep(500);
			printf("��Ϸ����ˢ��!!!\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ���������������\n");
			Sleep(800);
			system("cls");
			break;
		}
	} while(input);
	printf("�˳���Ϸ\n");
	return 0;
}