#include <stdio.h>
int main()
{
    char str[10001];
    for(int i=0,b=1;b!=0;i++) {
        b=scanf("%c",&str[i]);
    }
    printf("%s",str);
    return 0;
}