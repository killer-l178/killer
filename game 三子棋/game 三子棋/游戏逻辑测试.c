#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include"��Ϸͷ�ļ�.h"
#include"��Ϸʵ��.cpp"
//��ӡ�˵�
void menu()
{
	printf("*****        1.play         *****\n");
	printf("*****        0.exit         *****\n");
}

void game()
{
	char ret = 0;
	//�洢����--��ά����
	char board[ROW][COL];
	//��ʼ������
	initboard(board, ROW, COL);
	//��ӡ����
	print_board(board,ROW,COL);

	//�˻��Ծ�
	//�������������壬ÿ��һ��Ҫ�����ж���Ӯ
	while (1)
	{
		/*�������*/
		Player_Move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж�
		//1.���Ӯ2.����Ӯ3.ƽ��4.����
		Judge(board, ROW, COL);			//��������ʱ��ʽ������ͻ�ľ���ԭ����ʲôJudge(board[ROW][COL])�����
		ret = Judge(board, ROW, COL);
		if (ret != 'c')
			break;
		/*��������*/
		Computer_Move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж�
		Judge(board, ROW, COL);
		ret = Judge(board, ROW, COL);
		if (ret != 'c')
			break;
	}
		if (ret == '#')
		{
			printf("���Ӯ��\n");
		}
		else if (ret == '*')
		{
			printf("������...\n");
		}
		else if(ret == 'q')
		{
			printf("ƽ��\n");
		}
			///*��������*/
			//Computer_Move(board, ROW, COL);
			//print_board(board, ROW, COL);
			////�ж�
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
		printf("��ѡ��-->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�ټ���ף�������죡");
			break;
		default:
			printf("�����������������");
			break;
		}
		break;
	} while (input);
	return 0;
}