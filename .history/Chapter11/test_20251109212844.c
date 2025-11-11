#include <stdio.h>

void daoxu(int, char *);

int main()
{
    char str[10001];
    int c = 0;
    int ch;
    
    while((ch = getchar()) != EOF && c < 10000) {
        str[c++] = ch;
    }
    str[c] = '\0';
    
    printf("\n");
    daoxu(c, str);
    return 0;
}

void daoxu(int c, char *str) {
    for(int i = c - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}