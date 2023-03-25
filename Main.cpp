//#include<iostream>
//#define N 10
////开头结尾都是1
//int main()
//{
//    int arr[N][N];
//    int i, j;
//    //把开头结尾赋值
//    for (i = 0,j = 0; i < N; i++)
//    {
//        arr[i][j] = 1;
//    }
//
//    for (i = 0, j = 0; i < N; i++)
//    {
//        arr[i][j] = 1;
//        j++;
//    }
//
//    for (i = 2; i < N; i++)
//    {
//        for (j = 1; j < i; j++)
//        {
//            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//        }
//    }
//
//    //打印
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//}

#include<iostream>
#define N 10
//开头结尾都是1
int main()
{
    int arr[N][N];
    int i, j;
    //把开头结尾赋值
    for (i = 0, j = 0; i < N; i++)
    {
        arr[i][j] = 1;
    }

    for (i = 0, j = 0; i < N; i++)
    {
        arr[i][j] = 1;
        j++;
    }

    for (i = 2; i < N; i++)
    {
        for (j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    //打印
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= i; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}