#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include"游戏头文件.h"
#include"游戏实现.cpp"
//打印菜单
void menu()
{
	printf("*****        1.play         *****\n");
	printf("*****        0.exit         *****\n");
}

void game()
{
	char ret = 0;
	//存储数据--二维数组
	char board[ROW][COL];
	//初始化棋盘
	initboard(board, ROW, COL);
	//打印棋盘
	print_board(board,ROW,COL);

	//人机对决
	//玩家下棋电脑下棋，每走一步要进行判断输赢
	while (1)
	{
		/*玩家下棋*/
		Player_Move(board, ROW, COL);
		print_board(board, ROW, COL);
		//判断
		//1.玩家赢2.电脑赢3.平局4.继续
		Judge(board, ROW, COL);			//函数传参时形式引发冲突的具体原因是什么Judge(board[ROW][COL])错误的
		ret = Judge(board, ROW, COL);
		if (ret != 'c')
			break;
		/*电脑下棋*/
		Computer_Move(board, ROW, COL);
		print_board(board, ROW, COL);
		//判断
		Judge(board, ROW, COL);
		ret = Judge(board, ROW, COL);
		if (ret != 'c')
			break;
	}
		if (ret == '#')
		{
			printf("玩家赢！\n");
		}
		else if (ret == '*')
		{
			printf("你输了...\n");
		}
		else if(ret == 'q')
		{
			printf("平局\n");
		}
			///*电脑下棋*/
			//Computer_Move(board, ROW, COL);
			//print_board(board, ROW, COL);
			////判断
			//Judge(board[ROW][COL], ROW, COL);
	//}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("请选择-->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("再见，祝你今日愉快！");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
		break;
	} while (input);
	return 0;
}