#include "Tools.h"
#include <windows.h>
#include <stdio.h>

void SetWindowSize(int cols, int lines)//设置窗口大小
{
    system("title 贪吃蛇");//设置窗口标题
    char cmd[30];
    sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//一个图形■占两个字符，故宽度乘以2
    system(cmd);//system(mode con cols=88 lines=88)设置窗口宽度和高度
}