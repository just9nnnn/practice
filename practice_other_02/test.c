#define _CRT_SECURE_NO_WARNINGS 1
# include "game.h"

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("����������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("��Ϸ��ʼ!\n");
			game();//��Ϸ����
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ!\n");
			break;
		}
		default:
		{
			printf("ѡ�����������ѡ��!\n");
			Sleep(1200);
			system("cls");
			break;
		}
		}
	} while (input);
	return 0;
}