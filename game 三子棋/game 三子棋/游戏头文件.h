#pragma once
#include<stdio.h>
#include<stdlib.h>
//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void initboard(char board[ROW][COL], int row, int col);

//打印棋盘
void print_board(char board[ROW][COL],int row,int col);

//玩家下棋
void Player_Move(char board[ROW][COL], int row, int col);

//电脑下棋
void Computer_Move(char board[ROW][COL], int row, int col);

//判断
char Judge(char board[ROW][COL], int row, int col);

//平局或继续的判断
int Full(char board[ROW][COL], int row, int col);
