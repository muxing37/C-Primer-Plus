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
    return 0;
}