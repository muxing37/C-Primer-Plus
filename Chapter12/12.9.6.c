#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num[11]={0};
    int i;
    srand((unsigned int)time(NULL));
    /* srand()设置随机数种子
    time(NULL)获取当前时间，time() 函数返回自1970年1月1日以来的秒数(时间戳)
    srand() 函数要求 unsigned int 类型的参数 */
    for(i=0;i<1000;i++) {
        num[rand()%10+1]++;
    }
    for(i=1;i<11;i++) {
        printf("数字%d出现了%d次\n",i,num[i]);
    }
    return 0;
}