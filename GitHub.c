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
            // ���Ԫ��λ�ڵ�һ�С����һ�С���һ�л����һ�У�
            // �������ΧԪ�ص�ֵ
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
    int i = 0, j = 0;//�� ��
    int n = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);//��ʽ��������ַ����������������
        }
    }
    int temp = fun(arr, n, n);
    printf("%d", temp);
    return 0;
}
