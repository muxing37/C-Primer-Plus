#include <stdio.h>
void dayin(char,int,int);
int main()
{
    char ch;
    int m,n;
    printf("请输入一个字符和两个整数，\n"
    "第一个整数指定该字符每行打印的次数，\n"
    "第二个整数指定打印字符的行数\n");
    ch=getchar();
    scanf("%d %d",&m,&n);
    dayin(ch,m,n);
    return 0;
}
void dayin(char ch,int m,int n) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%c",ch);
        }
    }
}