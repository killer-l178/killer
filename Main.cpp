#define _CRT_SECURE_NO_WARNINGS
//�Ұ���

#include<stdio.h>
#define N 10
//�ҳ�ÿ���������ݲ������������±�
int max(int arr[][N], int i, int n)//���������顢�ڼ��С����ж�����
{
    int max_index = 0;
    int max = arr[i][0];//����max���Ա��ⷵ�ء��δ󡱵�����
    int j;
    for(j = 1;j<n;j++)
    {
        if (max < arr[i][j])
        {
            max_index = j;
            max = arr[i][j];
        }
    }
    //ȷ��arr[i][j]�����ģ����ҵõ������±�
    return max_index;
    //���ص�����
}

int min(int arr[][10], int j, int m)//���������顢�ڼ��С����ж�����
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


//�����ڸ�������ڸ�����С
int main()
{
    int arr[N][N];
    int i = 0, j = 0;
    int m = 0, n = 0;
    //������ά����
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //�Ұ���
    //��ÿ�������������ж����Ƿ��Ǹ�����С����
   
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