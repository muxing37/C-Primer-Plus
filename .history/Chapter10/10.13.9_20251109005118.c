#include <stdio.h>

#define ROWS 3
#define COLS 5

// 函数声明
void copy_arr(int n, int m, double target[n][m], const double source[n][m]);
void print_arr(int n, int m, const double arr[n][m]);

int main(void)
{
    // 原数组初始化
    double source[ROWS][COLS] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.1},
        {11.2, 12.3, 13.4, 14.5, 15.6}
    };

    double target[ROWS][COLS]; // 目标数组

    printf("原始数组：\n");
    print_arr(ROWS, COLS, source);

    // 调用函数复制
    copy_arr(ROWS, COLS, target, source);

    printf("\n复制后的数组：\n");
    print_arr(ROWS, COLS, target);

    return 0;
}

void copy_arr(int n, int m, double target[n][m], const double source[n][m])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            target[i][j] = source[i][j];
}

// 打印二维数组（变长数组参数）
void print_arr(int n, int m, const double arr[n][m])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%6.2f ", arr[i][j]);
        printf("\n");
    }
}