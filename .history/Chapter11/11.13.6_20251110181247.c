#include <stdio.h>
int is_within(char ch,char *str);
int main()
{
    char str[10001];
    char ch;
    int result,c;
    printf("\n请输入一个字符串: ");
    int i = 0;
    while ((c = getchar()) != '\n' && c != EOF && i < 99) {
        str[i++] = (char)c;
    }
    str[i] = '\0';
    printf("请输入要查找的字符: ");
    ch = getchar();
    while ((c = getchar()) != '\n' && c != EOF);
    result = is_within(ch, str);
    if (result) {
        printf("字符 '%c' 在字符串 \"%s\" 中。\n", ch, str);
    } else {
        printf("字符 '%c' 不在字符串 \"%s\" 中。\n", ch, str);
    }
    return 0;
}
int is_within(char ch,char *str) {
    int i=0;
    while (*str != '\0') {
        if (*str == ch) {
            i=1;
        }
        str++;
    }
    return i;
}