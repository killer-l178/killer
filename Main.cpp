#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include<iostream>

/*
程序中为啥会有cmd：
创建一个字符数组，然后将命令行复制到字符数组中，再进行输出

*/
#include<string.h>
using namespace std;
int main() {
	system("color b");//依靠system改变控制面板的字体颜色，Cool!
	char cmd[10];
	strcpy(cmd, "dir");
	system(cmd);
	return 0;
}