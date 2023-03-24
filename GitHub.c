#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int fun(int arr[][10], int row, int col)
{
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // 如果元素位于第一行、最后一行、第一列或最后一列，
            // 则加上周围元素的值
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int arr[5][5];
    int i = 0, j = 0;//行 列
    int n = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);//格式化输出，字符和数字是有区别的
        }
    }
    int temp = fun(arr, n, n);
    printf("%d", temp);
    return 0;
}
