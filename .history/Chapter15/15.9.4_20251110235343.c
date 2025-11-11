#include <stdio.h>
int wei(int,int);
int main()
{
    int m,n;
    printf("请输入两个整数，第一个是值，第二个是位的位置\n");
    scanf("%d %d",&m,&n);
    int i=wei(m,n);
    if(i==1) {
        printf("指定位的位置为1\n");
    }
    if(i==0) {
        printf("指定位的位置为0\n");
    }
    return 0;
}

int wei(int m,int n) {
    int i;
    i=(m>>n)&1;
    return i;
}