﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 1000

//二分查找
int Find(int goal, int arr[], int right)//目标数字、数组、右值
{
    int left = 0;
    int mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] > goal)
        {
            right = mid;
            right--;
        }
        else if (arr[mid] < goal)
        {
            left = mid;
            left++;
        }
        else if (arr[mid] == goal)
        {
            return mid+1;
            break;
        }
        if (left >= right)
            return -1;
    }
}


int main(void)
{
    int n = 0;//数组的大小
    int i = 0;
    int goal = 0;//目标值
    int arr[N];
    scanf("%d", &n);
    //一维数组的创立
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //二分查找
    scanf("%d", &goal);//输入目标值
    int temp = Find(goal, arr, n-1);
    if (temp != -1)
        printf("%d", temp);
    else
        printf("None");

    return 0;
}