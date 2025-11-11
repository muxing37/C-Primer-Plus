#include <stdio.h>
void daoxu(int,char *);
int main()
{
    char str[10001]={0};
    int c=0;
    for(int i=0;str[i]!=EOF;i++) {
        str[i]=getchar();
        c++;
    }
    printf("\n");
    daoxu(c,str);
    return 0;
}
void daoxu(int c,char *str) {
    int i=0;
    for(i=c-1;i>=0;i--) {
        printf("%c",str[i]);
    }
}