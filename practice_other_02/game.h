#pragma once
//头文件引用
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//声明游戏数据
#define Row 3
#define Col 3

//声明游戏函数
void menu();//菜单

void game();//游戏进程

Int_board(char board[Row][Col], int row, int col);//初始化棋盘

Print_board(char board[Row][Col], int row, int col);//打印棋盘

int choose();//选择谁先下

void player_move(char board[Row][Col], int row, int col);//玩家下棋

void computer_move(char board[Row][Col], int row, int col);//电脑下棋

char judge_win(char board[Row][Col], int row, int col);//判断谁赢

int judge_full(char board[Row][Col], int row, int col);//判断棋盘是否下满