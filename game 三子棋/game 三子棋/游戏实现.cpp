#define _CRT_SECURE_NO_WARNINGS
#include"游戏头文件.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;//行数
	int j = 0;//确定列数
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
		board[i][j] = ' ';
		}
	}
}

void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;//行数
	int j = 0;//列数
	for (i = 0; i < row; i++)
	{
		int j = 0;
		/*printf("  %c | %c | %c\n ",board[i][0],board[i][1], board[i][2]);*/
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		/*if (i < row - 1)
		{
			printf("---|---|---\n");
		}*/
		if(i<row-1)
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j < row - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}

//玩家下棋
//玩家下棋指令为‘#’
//棋只能在空位
void Player_Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走-->\n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (1 <= x  && x - 1 < row && y - 1 < col && 1 <= y )//保证玩家走棋的合理性
		{
			if (board[x - 1][y - 1] = ' ')//保证该坐标无棋
			{
				board[x-1][y-1] = '#';
				break;
			}
			else
			{
				printf("该位置已被占用，请重新输入");
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入\n");
		}
	}
}

//电脑下棋
//电脑下棋指令为‘*’
void Computer_Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走-->\n");
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}
	}
	
}
//1.玩家赢2.电脑赢3.平局4.继续
//初始化后全是空格问题
int Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;//位置没满，继续下
			}
		}
	}
	return 0;//满了
}

char Judge(char board[ROW][COL], int row, int col)
{
	//从行判断
	//for (int i = 0; i < row; i++)
	//{
	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == '#')
	//	{
	//		printf("玩家赢了！\n");
	//		return board[i][0];
	//	}
	//	else/* if (board[i][0] == board[i][1] == board[i][2] == '*')*/
	//	{
	//		printf("你输了...\n");
	//		return board[i][0];
	//	}
	//}
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	






	//从列来判断
	/*for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == '#')
		{
			printf("玩家赢了！");
			return board[j][0];
		}
		else if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == '*')
		{
			printf("你输了...");
			return board[j][0];
		}
	}*/
	 
	for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}






	//两边的对角线
	/*if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == '#')
	{
		printf("玩家赢了！");
		return board[0][0];
	}
	else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == '*')
	{
		printf("你输了...");
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]&& board[2][0] == '#')
	{
		printf("玩家赢了！");
		return board[0][2];
	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == '*')
	{
		printf("你输了...");
		return board[0][2];
	}*/

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}






	//平局
	if (Full(board, ROW, COL) == 0)//平局
	{
		return 'q';
	}
	else //继续
	return 'c';

}