#include <stdio.h>
int is_within(char ch,char *str);

int main() {
    char str[100];
    char ch;
    int result;
    printf("字符查找测试程序（输入空行退出）\n");
    while (1) {
        printf("\n请输入一个字符串: ");
        if (fgets(str, sizeof(str), stdin) == NULL) break;
        if (str[0] == '\n') {
            printf("程序结束。\n");
            break;
        }
        int len = 0;
        while (str[len] != '\0' && str[len] != '\n') {
            len++;
        }
        str[len] = '\0';
        printf("请输入要查找的字符: ");
        ch = getchar();
        while (getchar() != '\n');
        result = is_within(ch, str);
        if (result) {
            printf("字符 '%c' 在字符串 \"%s\" 中\n", ch, str);
        } else {
            printf("字符 '%c' 不在字符串 \"%s\" 中\n", ch, str);
        }
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