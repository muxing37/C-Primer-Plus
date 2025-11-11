#include <stdio.h>
#define mintoh 60
int main()
{
    double m,min;
    int h;
    printf("请输入分钟表示的时间，输入小于等于0的数时程序停止\n");
    do {
        scanf("%lf",&m);
        if(m<=0) break;
        h=(int)m/mintoh;
        min=m-h*mintoh;
        printf("%dh %gmin\n",h,min);
    } while(m>0);
    return 0;
}