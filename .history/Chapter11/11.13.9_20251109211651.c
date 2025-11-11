#include <stdio.h>
int main()
{
    char str[10001];
    for(int i=0;str[i]!=EOF;i++) {
        str[i]=getchar();
    }
    for(int i=0;str[i]!=EOF;i++) {
    printf("%c",str[i]);
    }
    return 0;
}