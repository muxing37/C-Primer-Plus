#include <stdio.h>
int main()
{
    int ch;
    int c=0;
    printf("请输入一些字符(按Ctrl+D结束输入):\n");
    while (ch!=EOF) {
        ch=getchar();
        c++;
    }
    printf("字符数量:%d\n",c);
    return 0;
}