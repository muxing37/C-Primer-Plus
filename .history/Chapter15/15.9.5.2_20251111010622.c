#include <stdio.h>
unsigned int rotate(unsigned int x,int n) {
    int bits=sizeof(unsigned int)*8;
    n=n%bits;
    return (x<<n)|(x>>(bits-n));
}
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