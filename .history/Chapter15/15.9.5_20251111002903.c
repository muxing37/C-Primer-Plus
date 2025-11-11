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
        }
        if((x>>i)&1) {
            printf("0");
        }
    }

    return 0;
}

unsigned int rotate(unsigned int x,unsigned int n) {

}