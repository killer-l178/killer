#pragma once
#include<stdio.h>
#include<stdlib.h>
//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ������
void initboard(char board[ROW][COL], int row, int col);

//��ӡ����
void print_board(char board[ROW][COL],int row,int col);

//�������
void Player_Move(char board[ROW][COL], int row, int col);

//��������
void Computer_Move(char board[ROW][COL], int row, int col);

//�ж�
char Judge(char board[ROW][COL], int row, int col);

//ƽ�ֻ�������ж�
int Full(char board[ROW][COL], int row, int col);
