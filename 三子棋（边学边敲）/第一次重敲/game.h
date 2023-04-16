#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//���Ӯ - ��*��
//����Ӯ - ��#��
//ƽ�� - ��Q��
//���� - ��C��
char Is_Win(char board[ROW][COL], int row, int col);