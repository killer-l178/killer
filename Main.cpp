#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include<iostream>

/*
������Ϊɶ����cmd��
����һ���ַ����飬Ȼ�������и��Ƶ��ַ������У��ٽ������

*/
#include<string.h>
using namespace std;
int main() {
	system("color b");//����system�ı��������������ɫ��Cool!
	char cmd[10];
	strcpy(cmd, "dir");
	system(cmd);
	return 0;
}