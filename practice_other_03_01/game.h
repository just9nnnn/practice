#pragma once
//头文件包含
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

//值定义
#define Row 9
#define Col 9

#define Rows Row+2
#define Cols Col+2

#define minenum 10

//函数定义
void menu();

void game();

void Int_board(char board[Rows][Cols], int rows, int cols, char set);

void Print_board(char board[Rows][Cols], int row, int col);

void Set_mine(char board[Rows][Cols], int row, int col);

void Sweep_mine(char mine[Rows][Cols], char sweep[Rows][Cols], int row, int col);

void Get_minenum(char mine[Rows][Cols], char sweep[Rows][Cols], int x, int y);

int count_sweep(char sweep[Rows][Cols], int row, int col);

int find_O(char sweep[Rows][Cols], int row, int col);
