#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		case 1:
		{
			printf("��Ϸ��ʼ\n");
			game();
			break;
		}
		default:
		{
			printf("�������,����������:\n");
			Sleep(1800);
			system("cls");
		}
		}
	} while (input);
	return 0;
}