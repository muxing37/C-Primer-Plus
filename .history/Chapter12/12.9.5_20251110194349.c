#include <stdio.h>

#include <time.h>

#define SIZE 100
#define MIN 1
#define MAX 10

// 降序排序函数
void bubbleSortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) { // 改为降序：当前元素小于下一个元素时交换
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void) {
    int numbers[SIZE];
    int i;
    
    // 设置随机数种子
    srand((unsigned int)time(NULL));
    
    // 生成100个1-10的随机数
    printf("生成的100个随机数（1-10）：\n");
    for (i = 0; i < SIZE; i++) {
        numbers[i] = rand() % (MAX - MIN + 1) + MIN;
        printf("%d ", numbers[i]);
        if ((i + 1) % 10 == 0) // 每10个数字换一行
            printf("\n");
    }
    
    // 对数组进行降序排序
    bubbleSortDescending(numbers, SIZE);
    
    // 输出排序后的结果
    printf("\n降序排列后的结果：\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
        if ((i + 1) % 10 == 0) // 每10个数字换一行
            printf("\n");
    }
    
    return 0;
}