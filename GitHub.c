//创建二维数组存放字符串
//用strcmp()函数函数去给字符串排序
#include<stdio.h>
#include<string.h>

int main()
{
    char s[9][100];
    int i = 0, j = 0;
    char tmp[10];
    //将数据输入到二维数组中
    for (i = 0; i < 9; i++)
    {
        scanf("%s", s[i]);//数组名就是地址，再用&s就是地址的地址
    }
    //打印排序前的字符串
    printf("排序前的字符串：\n");
    for (i = 0; i < 9; i++)
        printf("%s\n", s[i]);
    i = 0;
    while (i < 9)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(tmp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], tmp);
            }
        }
        i++;
    }

    //打印排序后的字符串
    printf("排序后的字符串：\n");
    for (i = 0; i < 9; i++)
        printf("%s\n", s[i]);

    return 0;
}