#pragma once
//ͷ�ļ�����
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//������Ϸ����
#define Row 3
#define Col 3

//������Ϸ����
void menu();//�˵�

void game();//��Ϸ����

Int_board(char board[Row][Col], int row, int col);//��ʼ������

Print_board(char board[Row][Col], int row, int col);//��ӡ����

int choose();//ѡ��˭����

void player_move(char board[Row][Col], int row, int col);//�������

void computer_move(char board[Row][Col], int row, int col);//��������

char judge_win(char board[Row][Col], int row, int col);//�ж�˭Ӯ

int judge_full(char board[Row][Col], int row, int col);//�ж������Ƿ�����