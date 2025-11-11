#include <stdio.h>
int main()
{
    int ch;
    int up=0;
    int down=0;
    printf("请输入一些字母(按Ctrl+D结束输入):\n");
    while (ch!=EOF) {
        ch=getchar();
        if(ch>='A' && ch<='Z') {
            up++;
        }
        else if(ch>='a' && ch<='z'){
            down++;
        }
    }
    printf("\n大写字母数量:%d\n",up);
    printf("小写字母数量:%d\n",down);
    return 0;
}