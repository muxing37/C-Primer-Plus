#include <stdio.h>
void daoxu(int,char *);
int main()
{
    char str[10001]={0};
    char ch;
    int c=0;
    while(ch=getchar()!=EOF) {
        str[c]=ch;
        c++;
    }
    str[c]='\0';
    printf("\n");
    daoxu(c,str);
    return 0;
}
void daoxu(int c,char *str) {
    int i;
    printf("%d",c);
    for(i=c-1;i>=0;i--) {
        printf("%c",str[i]);
    }
}