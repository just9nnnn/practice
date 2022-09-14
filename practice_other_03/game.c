#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//菜单
void menu()
{
	printf("#########################\n");
	printf("########  扫雷.  ########\n");
	printf("#######0.退出游戏.#######\n");
	printf("#######1.进入游戏.#######\n");
	printf("###Written by SQ Eggs.###\n");
	printf("#########################\n");
}

//游戏进程
void game()
{
	//创建
	char mine[Rows][Cols] = { 0 };
	char sweep[Rows][Cols] = { 0 };

	//初始化
	Int_board(mine, Rows, Cols, '0');
	Int_board(sweep, Rows, Cols, '#');

	Print_board(sweep, Row, Col);//打印

	//布置雷
	Set_mine(mine, Row, Col);
	//Print_board(mine, Row, Col);//打印

	//扫雷
	Sweep_mine(mine, sweep, Row, Col);
}

//初始化
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

//打印
void Print_board(char board[Rows][Cols], int row, int col)
{
	int i = 1;
	printf("----------扫雷----------\n");
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
	printf("----------扫雷----------\n");
}

//布置雷
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

//扫雷
void Sweep_mine(char mine[Rows][Cols], char sweep[Rows][Cols], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while(row * col - minenum > count)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你踩到雷了,游戏结束!\n");
				Print_board(mine, Row, Col);
				Sleep(5000);
				system("cls");
				break;
			}
			else
			{
				if(mine[x][y] == '0')
				{
					if(sweep[x][y] == '#')
					{
						Get_minenum(mine, sweep, x, y);//获得输入坐标周围雷的数量
						count++;
					}
					else
					{
						printf("该坐标已被查看,请重新输入:\n");
					}
				}
			}
		}
		else
		{
			printf("坐标输入错误,请重新输入\n");
		}
	}
	if (count == row * col - minenum)
	{
		printf("恭喜你获得成功!\n");
		Print_board(mine, Row, Col);
		Sleep(5000);
		system("cls");
	}

}

//获得坐标周围雷的数量
void Get_minenum(char mine[Rows][Cols], char sweep[Rows][Cols], int x, int y)
{
	int count = 0;
	int i = -1;
	int j = -1;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if(i != j)
			{
				if (mine[x + i][y + j] == '1')
				{
					count++;
				}
			}
		}
	}
	sweep[x][y] = count + '0';
	Print_board(sweep, Row, Col);
}
