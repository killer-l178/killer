#include "Tools.h"
#include <windows.h>
#include <stdio.h>

void SetWindowSize(int cols, int lines)//���ô��ڴ�С
{
    system("title ̰����");//���ô��ڱ���
    char cmd[30];
    sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//һ��ͼ�Ρ�ռ�����ַ����ʿ�ȳ���2
    system(cmd);//system(mode con cols=88 lines=88)���ô��ڿ�Ⱥ͸߶�
}