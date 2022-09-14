#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//�˵�
void menu()
{
	printf("#########################\n");
	printf("########  ɨ��.  ########\n");
	printf("#######0.�˳���Ϸ.#######\n");
	printf("#######1.������Ϸ.#######\n");
	printf("###Written by SQ Eggs.###\n");
	printf("#########################\n");
}

//��Ϸ����
void game()
{
	//����
	char mine[Rows][Cols] = { 0 };
	char sweep[Rows][Cols] = { 0 };

	//��ʼ��
	Int_board(mine, Rows, Cols, '0');
	Int_board(sweep, Rows, Cols, '#');

	Print_board(sweep, Row, Col);//��ӡ

	//������
	Set_mine(mine, Row, Col);
	//Print_board(mine, Row, Col);//��ӡ

	//ɨ��
	Sweep_mine(mine, sweep, Row, Col);
}

//��ʼ��
void Int_board(char board[Rows][Cols], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//��ӡ
void Print_board(char board[Rows][Cols], int row, int col)
{
	int i = 1;
	printf("------------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 1;
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------------------\n");
}

//������
void Set_mine(char mine[Rows][Cols], int row, int col)
{
	int count = minenum;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//ɨ��
void Sweep_mine(char mine[Rows][Cols], char sweep[Rows][Cols], int row, int col)
{
	int x = 0;
	int y = 0;
	int n = 0;
	int count = 0;
	int ret;
	do
	{
		printf("1.ɨ�� \n2.��� \n3.ȡ����� \n");
		printf("��ѡ����Ĳ���:>");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			do
			{
				Print_board(sweep, Row, Col);
				printf("----------ɨ��----------:\n");
				printf("����������(��ʽ:x y):>");
				scanf("%d %d", &x, &y);
				if (x >= 1 && x <= row && y >= 1 && y <= col)
				{
					if (mine[x][y] == '1')
					{
						printf("��ȵ�����,��Ϸ����!\n");
						Print_board(mine, Row, Col);
						Sleep(5000);
						system("cls");
						break;
					}
					else
					{
						if (mine[x][y] == '0')
						{
							if (sweep[x][y] == '#')
							{
								Get_minenum(mine, sweep, x, y);//�������������Χ�׵�����
								Print_board(sweep, Row, Col);
								count = count_sweep(sweep, Row, Col);//sweep��'#'������
							}
							else
							{
								printf("�������ѱ��鿴,����������:\n");
							}
						}
					}
				}
				else
				{
					printf("�����������,����������\n");
				}
				if (count == minenum)
				{
					printf("��ϲ���óɹ�!\n");
					Print_board(mine, Row, Col);
					Sleep(5000);
					system("cls");
					break;
				}
			} while (row * col - minenum > row * col - count);
			n = 0;
			break;
		}
		case 2:
		{
		again1:
			Print_board(sweep, Row, Col);
			printf("----------���----------:\n");
			printf("����������(��ʽ:x y):>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				while (1)
				{
					if (sweep[x][y] == '#')
					{
						sweep[x][y] = 'O';
						Print_board(sweep, Row, Col);
						break;
					}
					else
					{
						printf("�������,����������\n");
						goto again1;
					}
				}
			}
			break;
		}
		case 3:
		{
		again2:
			ret = find_O(sweep, Row, Col);
			if (ret == 1)
			{
				Print_board(sweep, Row, Col);
				printf("--------ȡ�����--------:\n");
				printf("����������(��ʽ:x y):>");
				scanf("%d %d", &x, &y);
				if (x >= 1 && x <= row && y >= 1 && y <= col)
				{
					while (1)
					{
						if (sweep[x][y] == 'O')
						{
							sweep[x][y] = '#';
							Print_board(sweep, Row, Col);
							break;
						}
						else
						{
							printf("�������,����������\n");
							goto again2;
						}
					}
				}
				break;
			}
			else
				break;
		}
		default:
		{
			printf("ѡ�����,������ѡ��:>\n");
		}
		}
	} while (n != 0);

}

//���������Χ�׵�����
void Get_minenum(char mine[Rows][Cols], char sweep[Rows][Cols], int x, int y)
{
	if (sweep[x][y] == '#')
	{
		int count = 0;
		int i = -1;
		int j = -1;
		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				if (i != j)
				{
					if (mine[x + i][y + j] == '1')
					{
						count++;
					}
				}
			}
		}
		if (count == 0)
		{
			sweep[x][y] = ' ';
			if (x >= 1 && x <= Rows - 2 && y >= 1 && y <= Cols - 2)
			{
				int i = -1;
				int j = -1;
				for (i = -1; i <= 1; i++)
				{
					for (j = -1; j <= 1; j++)
					{
						if (i != j)
						{
							if (mine[x + i][y + j] == '0')
							{
								Get_minenum(mine, sweep, x, y + 1);
								Get_minenum(mine, sweep, x, y - 1);
								Get_minenum(mine, sweep, x + 1, y);
								Get_minenum(mine, sweep, x - 1, y);
							}
						}
					}
				}
			}
		}
		else
		{
			sweep[x][y] = count + '0';
		}
	}
}

int count_sweep(char sweep[Rows][Cols], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (sweep[i][j] == '#')
			{
				count++;
			}
		}
	}
	return count;
}

int find_O(char sweep[Rows][Cols], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (sweep[i][j] == 'O')
			{
				return 1;
			}
		}
	}
	return 0;
}
