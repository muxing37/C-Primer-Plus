#include <stdio.h>
void print_arr(int rows, int cols, int arr[rows][cols]);
void double_arr(int rows, int cols, int arr[rows][cols]);

int main(void)
{
    int data[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    printf("原始数组：\n");
    print(3,5,data);

    doubl(3,5,data);

    printf("\n翻倍后的数组：\n");
    print(3, 5, data);

    return 0;
}
void print(int m, int n, int arr[m][n])
{
    for (int i=0;i<m;i++) {
        for (int j=0;j<m;j++)
            printf("%4d ",arr[i][j]);
        printf("\n");
    }
}
void doubl(int m, int n, int arr[m][n])
{
    for (int i=0; i<m; i++)
        for (int j=0;j<n; j++)
            arr[i][j] *= 2;
}