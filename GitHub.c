#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//շת�����ʵ��
int Way(int m, int n)
{
    int tmp;
    //�����Լ��
    tmp = m % n;
    if (tmp != 0)
    {
        m = n;
        n = tmp;
        Way(m, n);
    }
    else
        return n;
}


int main()
{
    int m = 0, n = 0;
    int temp = 0;
    int r = 0;//���ܺ�������ֵ
    scanf("%d%d", &m, &n);
    //ȷ��m>n
    if (m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    r = Way(m, n);
    printf("���Լ��Ϊ��%d\n", r);
    printf("��С������Ϊ��%d\n", (m * n) / r);
    return 0;
}
