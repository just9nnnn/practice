#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//打印游戏菜单
void menu()
{
	printf("#########################\n");
	printf("#######  三子棋.  #######\n");
	printf("#######1.进入游戏.#######\n");
	printf("#######0.退出游戏.#######\n");
	printf("#########################\n");
	printf("###Written by SQ Eggs.###\n");
	printf("#########################\n");
}


//游戏进程
void game()
{
	char board[Row][Col] = { 0 };//创建棋盘

	Int_board(board, Row, Col);//初始化棋盘
	int tmp = choose();
	char ret = 0;
	if (tmp == 1)
	{
		while(1)
		{
			Print_board(board, Row, Col);//打印棋盘

			player_move(board, Row, Col);//玩家下棋

			Print_board(board, Row, Col);//打印棋盘

			ret = judge_win(board, Row, Col);//判断
			if (ret != 'C')
			{
				break;
			}

			computer_move(board, Row, Col);//电脑下棋

			Print_board(board, Row, Col);//打印棋盘

			ret = judge_win(board, Row, Col);//判断
			if (ret != 'C')
			{
				break;
			}
		}
		if (ret == 'O')
		{
			printf("玩家胜！\n");
			Sleep(1800);
			system("cls");
		}
		if (ret == 'X')
		{
			printf("电脑胜！\n");
			Sleep(1800);
			system("cls");
		}
		if (ret == 'P')
		{
			printf("平局！\n");
			Sleep(1800);
			system("cls");
		}
	}
	if (tmp == 2)
	{
		while (1)
		{
			computer_move(board, Row, Col);//电脑下棋

			Print_board(board, Row, Col);//打印棋盘

			ret = judge_win(board, Row, Col);//判断
			if (ret != 'C')
			{
				break;
			}

			player_move(board, Row, Col);//玩家下棋

			Print_board(board, Row, Col);//打印棋盘

			ret = judge_win(board, Row, Col);//判断
			if (ret != 'C')
			{
				break;
			}
		}
		if (ret == 'O')
		{
			printf("玩家胜！\n");
			Sleep(1800);
			system("cls");
		}
		if (ret == 'X')
		{
			printf("电脑胜！\n");
			Sleep(1800);
			system("cls");
		}
		if (ret == 'P')
		{
			printf("平局！\n");
			Sleep(1800);
			system("cls");
		}
	}
}


//初始化棋盘
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


//打印棋盘
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


//选择谁先下界面
int choose()
{
	while(1)
	{
		int input = 0;
		printf("#################\n");
		printf("###选择谁先下:###\n");
		printf("###1.玩家先下.###\n");
		printf("###2.电脑先下.###\n");
		printf("#################\n");
		printf("请选择:>");
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
			printf("选择错误请重新选择\n");
			Sleep(1800);
			system("cls");
		}
	}
}


//玩家下棋
void player_move(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("玩家走\n");
		printf("请输入坐标(格式x y):>");
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
				printf("该位置已被下过,请重新输入:\n");
			}
		}
		else
		{
			printf("坐标输入错误,请重新输入:\n");
		}
	}
}


//电脑下棋
void computer_move(char board[Row][Col], int row, int col)
{
	printf("电脑走\n");
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


//判断
//玩家赢O
//电脑赢X
//平局P
//继续C
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


//判断棋盘是否下满
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
