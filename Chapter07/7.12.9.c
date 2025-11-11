#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入一个正整数\n");
    scanf("%d",&a);
    for(int i=2;i<=a;i++) {
        for(b=2;b<i;b++) {
            c=i%b;
            if(c==0) break;
        }
        if(c!=0) {
            printf("%d ",i);
        }
    }
    return 0;
}