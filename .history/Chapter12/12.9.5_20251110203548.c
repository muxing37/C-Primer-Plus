#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num[100];
    int i;
    srand((unsigned int)time(NULL));
    /* srand()设置随机数种子
    time(NULL)获取当前时间，time() 函数返回自1970年1月1日以来的秒数(时间戳)
    srand() 函数要求 unsigned int 类型的参数 */
    for(i=0;i<100;i++) {
        num[i]=rand()%10+1;
    }
    printf("生成的随机数：\n");
    for(i=0;i<100;i++) {
        printf("%d ",num[i]);
    }
    for(i=0;i<99;i++) {
        for(int j=0;j<99-i;j++) {
            if(num[j]<num[j+1]) {
                int t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    }
    printf("\n排序后：\n");
    for(i=0;i<100;i++) {
        printf("%d ",num[i]);
    }
    return 0;
}