#include <stdio.h>
int stop(char *str, int n) {
    int i = 0;
    char ch='a';
    printf("请输入字符（最多 %d 个字符，遇到空白、制表符或换行符停止）：",n);
    while (i<n && ch!=EOF) {
        ch = getchar();
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            break;
        }
        str[i] = (char)ch;
        i++;
    }
    str[i] = '\0';
    return i;
}
int main()
{
    char str[10000];
    int c,n;
    printf("在n个字符后停止，请输入n的值:");
    
    scanf("%d",&n);
    while (getchar() != '\n');
    c=stop(str,n);
    printf("\n实际读取了%d个字符：%s\n",c,str);
    return 0;
}