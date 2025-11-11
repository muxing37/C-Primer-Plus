#include <stdio.h>
#include <string.h>
int main()
{
    char danci[101];
    printf("请输入一个单词\n");
    scanf("%100s",danci);
    for(int i=strlen(danci);i>=0;i--) {
        printf("%c",danci[i]);
    }
    printf("\n");
    return 0;
}