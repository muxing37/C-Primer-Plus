#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num[100];
    int i;
    srand((unsigned int)time(NULL));
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