#include <stdio.h>
void daoxu(char *);
int main()
{
    char str[10001];
    int c;
    for(int i=0;str[i]!=EOF;i++) {
        str[i]=getchar();
        c++;
    }
    void daoxu(str);
    return 0;
}
void daoxu(char *str) {
    for(int i=0;str[i]!=EOF;i++) {
        printf("%c",str[i]);
    }
}