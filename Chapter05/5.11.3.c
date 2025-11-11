#include <stdio.h>
int main()
{
    int d,w,day;
    printf("请输入天数，输入小于等于0的数时程序停止\n");
    do {
        scanf("%d",&d);
        if(d<=0) break;
        w=d/7;
        day=d-w*7;
        printf("%d days are %d weeks, %d days.\n",d,w,day);
    } while(d>0);
    return 0;
}