//1.考虑传参的时候到底传ROW还是ROWS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80//简单版本

void InitBoard(char board[ROWS][COLS], int row, int col, char set);//注意这里取名不需要用rows

void DisplayBoard(char board[ROWS][COLS], int row, int col);

void SetMine(char board[ROWS][COLS], int row, int col);

void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);