#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ӡ��Ϸ�˵�
void menu()
{
	printf("#########################\n");
	printf("#######  ������.  #######\n");
	printf("#######1.������Ϸ.#######\n");
	printf("#######0.�˳���Ϸ.#######\n");
	printf("#########################\n");
	printf("###Written by SQ Eggs.###\n");
	printf("#########################\n");
}


//��Ϸ����
void game()
{
	char board[Row][Col] = { 0 };//��������

	Int_board(board, Row, Col);//��ʼ������
	int tmp = choose();
	char ret = 0;
	if (tmp == 1)
	{
		while(1)
		{
			Print_board(board, Row, Col);//��ӡ����

			player_move(board, Row, Col);//�������

			Print_board(board, Row, Col);//��ӡ����

			ret = judge_win(board, Row, Col);//�ж�
			if (ret != 'C')
			{
				break;
			}

			computer_move(board, Row, Col);//��������

			Print_board(board, Row, Col);//��ӡ����

			ret = judge_win(board, Row, Col);//�ж�
			if (ret != 'C')
			{
				break;
			}
		}
		if (ret == 'O')
		{
			printf("���ʤ��\n");
			Sleep(1800);
			system("cls");
		}
		if (ret == 'X')
		{
			printf("����ʤ��\n");
			Sleep(1800);
			system("cls");
		}
		if (ret == 'P')
		{
			printf("ƽ�֣�\n");
			Sleep(1800);
			system("cls");
		}
	}
	if (tmp == 2)
	{
		while (1)
		{
			computer_move(board, Row, Col);//��������

			Print_board(board, Row, Col);//��ӡ����

			ret = judge_win(board, Row, Col);//�ж�
			if (ret != 'C')
			{
				break;
			}

			player_move(board, Row, Col);//�������

			Print_board(board, Row, Col);//��ӡ����

			ret = judge_win(board, Row, Col);//�ж�
			if (ret != 'C')
			{
				break;
			}
		}
		if (ret == 'O')
		{
			printf("���ʤ��\n");
			Sleep(1800);
			system("cls");
		}
		if (ret == 'X')
		{
			printf("����ʤ��\n");
			Sleep(1800);
			system("cls");
		}
		if (ret == 'P')
		{
			printf("ƽ�֣�\n");
			Sleep(1800);
			system("cls");
		}
	}
}


//��ʼ������
Int_board(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//��ӡ����
Print_board(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}


//ѡ��˭���½���
int choose()
{
	while(1)
	{
		int input = 0;
		printf("#################\n");
		printf("###ѡ��˭����:###\n");
		printf("###1.�������.###\n");
		printf("###2.��������.###\n");
		printf("#################\n");
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input == 1)
		{
			return 1;
		}
		else if (input == 2)
		{
			return 2;
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
			Sleep(1800);
			system("cls");
		}
	}
}


//�������
void player_move(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("�����\n");
		printf("����������(��ʽx y):>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if(board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';
				break;
			}
			else
			{
				printf("��λ���ѱ��¹�,����������:\n");
			}
		}
		else
		{
			printf("�����������,����������:\n");
		}
	}
}


//��������
void computer_move(char board[Row][Col], int row, int col)
{
	printf("������\n");
	while(1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}
}


//�ж�
//���ӮO
//����ӮX
//ƽ��P
//����C
char judge_win(char board[Row][Col], int row, int col)
{
	int i = 0;
	for(i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		{
			return board[1][1];
		}
	}
	int ret = judge_full(board, row, col);
	if (ret == 1)
	{
		return 'P';
	}
	if (ret == 0)
	{
		return 'C';
	}
}


//�ж������Ƿ�����
int judge_full(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;

			}

		}
	}
	return 1;
}
