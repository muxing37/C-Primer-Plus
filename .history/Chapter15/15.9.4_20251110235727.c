#include <stdio.h>
int wei(int,int);
int main()
{
    int m,n;
    printf("请输入两个整数，第一个是值，第二个是位的位置\n");
    scanf("%d %d",&m,&n);
    int i=wei(m,n);
    printf("第%d位是%d\n",n,i);
    return 0;
}

int wei(int m,int n) {
    int i;
    i=(m>>n)&1;
    return i;
}