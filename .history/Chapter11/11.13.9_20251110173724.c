#include <stdio.h>
#include <string.h>
void daoxu(int,char *);
int main()
{
    char str[10001]={0};
    char ch;
    int c=0;
    printf("请输入一串字符，按下Ctrl+D结束输入\n");
    while((ch=getchar())!=EOF) {
        str[c]=ch;
        c++;
    }
    str[c]='\0';
    printf("\n");
    daoxu(c,str);
    return 0;
}
void daoxu(int c,char *str) {
    int i,j;
    char d[c+1];
    for(i=c-1,j=0;i>=0;i--,j++) {
        d[j]=str[i];
    }
    d[j]='\0';
    strcpy(str,d);
    printf("%s",str);
}