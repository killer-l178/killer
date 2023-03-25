#define _CRT_SECURE_NO_WARNINGS
//找鞍点

#include<stdio.h>
#define N 10
//找出每行最大的数据并返回其列向下标
int max(int arr[][N], int i, int n)//参数：数组、第几行、共有多少列
{
    int max_index = 0;
    int max = arr[i][0];//定义max可以避免返回“次大”的数据
    int j;
    for(j = 1;j<n;j++)
    {
        if (max < arr[i][j])
        {
            max_index = j;
            max = arr[i][j];
        }
    }
    //确保arr[i][j]是最大的，并且得到它的下标
    return max_index;
    //返回的是列
}

int min(int arr[][10], int j, int m)//参数：数组、第几列、共有多少行
{
    int min_index = 0;
    int min = arr[0][j];
    int i;
    for (i = 1; i < m; i++)
    {
        if (min > arr[i][j])
        {
            min_index = i;
            min = arr[i][j];
        }
    }
    return min_index;
}


//数据在该行最大，在该列最小
int main()
{
    int arr[N][N];
    int i = 0, j = 0;
    int m = 0, n = 0;
    //创建二维数组
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //找鞍点
    //找每行最大的数，再判断它是否是该列最小的数
   
    for (i = 0;i < m;i++)
    {
        int t = max(arr, i, n);
        if (arr[i][max(arr, i, n)] == arr[min(arr, t, m)][max(arr, i, n)])
        {
            printf("Array[%d][%d] = %d", i, max(arr, i, n), arr[i][max(arr, i, n)]);
            return 0;
        }
    }
    printf("None");
    return 0;
}