#define _CRT_SECURE_NO_WARNINGS
#include"��Ϸͷ�ļ�.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;//����
	int j = 0;//ȷ������
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
	int i = 0;//����
	int j = 0;//����
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

//�������
//�������ָ��Ϊ��#��
//��ֻ���ڿ�λ
void Player_Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����-->\n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (1 <= x  && x - 1 < row && y - 1 < col && 1 <= y )//��֤�������ĺ�����
		{
			if (board[x - 1][y - 1] = ' ')//��֤����������
			{
				board[x-1][y-1] = '#';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ�ã�����������");
			}
		}
		else
		{
			printf("���������������������\n");
		}
	}
}

//��������
//��������ָ��Ϊ��*��
void Computer_Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������-->\n");
	
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
//1.���Ӯ2.����Ӯ3.ƽ��4.����
//��ʼ����ȫ�ǿո�����
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
				return 1;//λ��û����������
			}
		}
	}
	return 0;//����
}

char Judge(char board[ROW][COL], int row, int col)
{
	//�����ж�
	//for (int i = 0; i < row; i++)
	//{
	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == '#')
	//	{
	//		printf("���Ӯ�ˣ�\n");
	//		return board[i][0];
	//	}
	//	else/* if (board[i][0] == board[i][1] == board[i][2] == '*')*/
	//	{
	//		printf("������...\n");
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
	






	//�������ж�
	/*for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == '#')
		{
			printf("���Ӯ�ˣ�");
			return board[j][0];
		}
		else if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == '*')
		{
			printf("������...");
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






	//���ߵĶԽ���
	/*if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == '#')
	{
		printf("���Ӯ�ˣ�");
		return board[0][0];
	}
	else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == '*')
	{
		printf("������...");
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]&& board[2][0] == '#')
	{
		printf("���Ӯ�ˣ�");
		return board[0][2];
	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == '*')
	{
		printf("������...");
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






	//ƽ��
	if (Full(board, ROW, COL) == 0)//ƽ��
	{
		return 'q';
	}
	else //����
	return 'c';

}