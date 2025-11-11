#include <stdio.h>
unsigned int rotate(unsigned int x,unsigned int n);
int main()
{
    unsigned int x,n;
    printf("请输入两个正整数，第一个是数，第二个是位向左移动的数量\n");
    scanf("%d %d",&x,&n);
    printf("该整数对应二进制为\n");
    for(int i=31;i>=0;i--) {
        if((x>>i)&1) {
            printf("1");
        } else {
            printf("0");
        }
        if (i%4==0 && i!= 0) {
            printf(" ");
        }
    }
    printf("\n");
    x=rotate(x,n);
    printf("左旋转后的值为%d\n",x);
    printf("所有位向左旋转后对应二进制为\n");
    for(int i=31;i>=0;i--) {
        if((x>>i)&1) {
            printf("1");
        } else {
            printf("0");
        }
        if (i%4==0 && i!= 0) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

unsigned int rotate(unsigned int x,unsigned int n) {
    int wei[32];
    for(int i=31;i>=0;i--) {
        if((x>>i)&1) {
            wei[i]=1;
        } else {
            wei[i]=0;
        }
    }
    int t[32];
    n=n%32;
    for(int i=n;i<32;i++) {
        t[i]=wei[i-n];
    }
    for(int i=0;i<n;i++) {
        t[i]=wei[32-n-i];
    }
    //for(int i=0;i<32;i++) {  printf("%d",t[i]);}
    x=0;
    for(int i=0,c=1;i<32;i++) {
        x=x+c*t[i];
        c=c*2;
    }
    return x;
}