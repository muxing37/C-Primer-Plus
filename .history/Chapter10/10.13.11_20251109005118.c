#include <stdio.h>

#define ROWS 3
#define COLS 5

// 函数声明
void print_arr(int rows, int cols, int arr[rows][cols]);
void double_arr(int rows, int cols, int arr[rows][cols]);

int main(void)
{
    int data[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    printf("原始数组：\n");
    print_arr(ROWS, COLS, data);

    double_arr(ROWS, COLS, data);

    printf("\n翻倍后的数组：\n");
    print_arr(ROWS, COLS, data);

    return 0;
}

// 打印二维数组
void print_arr(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%4d ", arr[i][j]);
        printf("\n");
    }
}

// 将二维数组中每个元素翻倍
void double_arr(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] *= 2;
}