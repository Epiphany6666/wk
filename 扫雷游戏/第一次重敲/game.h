//1.���Ǵ��ε�ʱ�򵽵״�ROW����ROWS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80//�򵥰汾

void InitBoard(char board[ROWS][COLS], int row, int col, char set);//ע������ȡ������Ҫ��rows

void DisplayBoard(char board[ROWS][COLS], int row, int col);

void SetMine(char board[ROWS][COLS], int row, int col);

void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);