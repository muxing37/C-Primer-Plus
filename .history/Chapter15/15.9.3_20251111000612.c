#include <stdio.h>
int check(int);
int main()
{
    int m,c;
    printf("请输入一个整数\n");
    scanf("%d",m);
    c=check(m);
    printf("打开位的数量是%d\n",c);
}
int check(int n) {
    int c,i;
    for(i=0;i<32;i++) {
        if(n&1==1) {
            c++;
        }
        n=n>>1;
    }
    return c;
}